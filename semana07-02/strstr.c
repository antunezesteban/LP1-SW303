#include <stdio.h>
#include <string.h>
int main() {
    char frase[] = "El desarrollo en C es eficiente.";
    char buscar[] = "es";
    char *resultado = strstr(frase, buscar);
    if (resultado != NULL) {
        printf("¡Subcadena encontrada!\n");
        printf("Frase a partir de la coincidencia: %s\n", resultado);
            // Salida: "es eficiente."
    } else {
        printf("La subcadena no existe en la frase.\n");
    }
 return 0;
}