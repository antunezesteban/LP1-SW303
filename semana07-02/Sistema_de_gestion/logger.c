#include "logger.h"
#include <stdio.h>
#include <stdarg.h>
#include <time.h>

// Variable global estática para almacenar el nombre del archivo
static const char *log_filepath = "app_errors.txt";

// Convierte el ENUM de nivel a una cadena de texto legible
static const char* get_level_string(LogLevel level) {

    switch (level) {
    case LOG_INFO: return "INFO";
    case LOG_WARNING: return "WARNING";
    case LOG_ERROR: return "ERROR";
    case LOG_CRITICAL: return "CRITICAL";
    default: return "UNKNOWN";
    }

}

int logger_init(const char *filename) {

    if (filename != NULL) {
    log_filepath = filename;
    }

    // Intentamos abrir el archivo en modo escritura para resetearlo/crearlo
    FILE *file = fopen(log_filepath, "w");
    if (file == NULL) {
    return 0; // Error al inicializar
    }

    fprintf(file, "=== INICIO DEL LOG DE SISTEMA ===\n");
    fclose(file);
    return 1; // Inicialización exitosa
}


void log_message(LogLevel level, const char *format, ...) {

    // 1. Obtener y formatear la fecha/hora del sistema
    time_t ahora = time(NULL);
    struct tm *t = localtime(&ahora);
    char time_str[26];

    // Formato: AAAA-MM-DD HH:MM:SS
    strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", t);

    // 2. Procesar los argumentos variables de forma segura con vsnprintf
    char message_buffer[512];
    va_list args;
    va_start(args, format);

    // Escribe el mensaje formateado de manera segura en el buffer interno
    vsnprintf(message_buffer, sizeof(message_buffer), format, args);

    va_end(args);
    // 3. Escribir el log estructurado en el archivo físico (.txt)
    FILE *file = fopen(log_filepath, "a"); // "a" de append: añade al final del archivo

    if (file != NULL) {
        fprintf(file, "[%s] [%s] %s\n", time_str, get_level_string(level), message_buffer);
        fclose(file);
    } else {
        // Fallback: Si el archivo físico falla, imprimimos en la salida de error estándar
        fprintf(stderr, "[FALLO LOG] No se pudo escribir en el archivo físico.\n");
    }
}
