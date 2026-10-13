#include <stdio.h>
int main() {
    // Un buffer intencionalmente pequeño para ver cómo actúa la seguridad
    char destino[20];
    char nombre[] = "Alejandro";
    char rol[] = "Administrador";
    // Le pasamos sizeof(destino) para que sepa que el límite estricto es 20 bytes
    int caracteres_necesarios = snprintf(destino, sizeof(destino), "User: %s (%s)", nombre, rol);
    printf("Resultado recortado de snprintf: \n'%s'\n", destino);
    // Salida: 'User: Alejandro (Ad' -> Se cortó de forma segura sin romper la memoria.
    // Comprobamos si el texto fue truncado
    if (caracteres_necesarios >=  (int)sizeof(destino)) {
        printf("\n[Alerta] El texto se recorto. Se necesitaban %d bytes, pero solo habia %zu.\n",
        caracteres_necesarios + 1, sizeof(destino));
    }
    return 0;
}
