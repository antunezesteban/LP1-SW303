#ifndef LOGGER_H
#define LOGGER_H

// Niveles de severidad para los logs
typedef enum {
 LOG_INFO,
 LOG_WARNING,
 LOG_ERROR,
 LOG_CRITICAL
} LogLevel;
// Inicializa el archivo de log (Borra el contenido anterior o crea uno nuevo)
int logger_init(const char *filename);
// Función principal para registrar eventos
void log_message(LogLevel level, const char *format, ...);
#endif // LOGGER_H