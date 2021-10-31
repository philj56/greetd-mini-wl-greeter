#ifndef LOG_H
#define LOG_H

void log_error(const char * restrict const fmt, ...);
void log_warning(const char * restrict const fmt, ...);
void log_debug(const char * restrict const fmt, ...);
void log_info(const char * restrict const fmt, ...);

#endif /* LOG_H */
