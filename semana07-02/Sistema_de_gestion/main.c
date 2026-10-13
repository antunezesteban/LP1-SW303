#include "logger.h"
#include <stdio.h>
int main() {
    // Inicializamos el sistema de logs apuntando a nuestro archivo .txt
    if (!logger_init("registro_errores.txt")) {
        printf("Error crítico: No se pudo crear el archivo de logs.\n");
        return 1;
    }

    printf("Ejecutando sistema... Revisa 'registro_errores.txt' para ver los resultados.\n");

    // Simulación de eventos en una aplicación real usando marcas de formato variádicas
    log_message(LOG_INFO, "El sistema ha iniciado correctamente en el puerto %d.", 8080);

    char *usuario = "AdminJuan";
    log_message(LOG_WARNING, "Intento de acceso no autorizado detectado. Usuario: '%s'.", usuario);

    int codigo_db = 1045;
    log_message(LOG_ERROR, "Fallo de conexion a la Base de Datos. Codigo de error MySQL: %d.", codigo_db);

    float temperatura = 98.5;
    log_message(LOG_CRITICAL, "Sobrecalentamiento del CPU detectado: %.1f C. Forzando apagado de seguridad.", temperatura);
    
    return 0;
}