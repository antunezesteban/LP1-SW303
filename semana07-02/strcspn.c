#include <stdio.h>
#include <string.h>
int main() {
    // Ejemplo 1: Buscar caracteres no deseados (números o signos)
    char clave[] = "usuarioX492";
    char caracteres_prohibidos[] = "0123456789";
    // Cuenta cuántos caracteres hay ANTES de encontrarse con el primer número
    size_t longitud_valida = strcspn(clave, caracteres_prohibidos);
    printf("La parte inicial sin numeros tiene una longitud de: %zu\n", longitud_valida);
    // Salida: 8 (porque "usuarioX" tiene 8 letras antes del '4')
    // Ejemplo 2: El uso clásico para limpiar fgets()
    char nombre[50];
    printf("\nEscribe tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin); // Si escribes "Ana", guarda "Ana\n"
    // Busca dónde está el '\n' y lo reemplaza por el fin de cadena '\0'
    nombre[strcspn(nombre, "\n")] = '\0';
    printf("Nombre limpio: '%s'\n", nombre);
 return 0;
}
