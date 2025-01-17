#include <log.h>
#include <terminal.h>
#include <stdarg.h>

void log_info(const char* string, ...) {
    // ДРЕВНЕЕ ВОСТАНИЕ РАБОВ В ДРЕВНЕМ РИМЕ
    va_list args; // Broken needs to fix
    va_start(args, string);
    tprintf("%s %s\n", INFO_STRING, string, args);
    va_end(args);
}

void log_warn(const char* string, ...) {
    // ДРЕВНЕЕ ВОСТАНИЕ РАБОВ В ДРЕВНЕМ РИМЕ
    va_list args; // Broken needs to fix
    va_start(args, string);
    tprintf("%s %s\n", WARN_STRING, string, args);
    va_end(args);
}

void log_erro(const char* string, ...) {
    // ДРЕВНЕЕ ВОСТАНИЕ РАБОВ В ДРЕВНЕМ РИМЕ
    va_list args; // Broken needs to fix
    va_start(args, string);
    tprintf("%s %s\n", ERRO_STRING, string, args);
    va_end(args);
}