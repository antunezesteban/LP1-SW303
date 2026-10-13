#include <stdio.h>
#include <stdarg.h>

// Nuestra función personalizada de logs con formato

void mi_log(const char *nivel, const char *formato, ...) {
    char buffer[128];
    va_list args;

    // Inicializamos los argumentos variables que vienen después de 'formato'
    va_start(args, formato);


    // vsnprintf toma la lista de argumentos formateados y los guarda en 'buffer' de forma segura
    vsnprintf(buffer, sizeof(buffer), formato, args);
    va_end(args);

    // Imprimimos el resultado final añadiendo el prefijo del nivel de log
    printf("[%s] %s\n", nivel, buffer);
}

int main() {
    char usuario[] = "Carlos";
    int codigo_error = 404;

    // Podemos usarla exactamente como un printf normal
    mi_log("INFO", "El usuario %s ha iniciado sesion.", usuario);
    mi_log("ERROR", "No se pudo conectar al servidor. Codigo: %d.", codigo_error);

    /* Salida:
    [INFO] El usuario Carlos ha iniciado sesion.
    [ERROR] No se pudo conectar al servidor. Codigo: 404.
    */
    return 0;
}