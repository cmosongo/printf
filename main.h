#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct buffer_s - A new type defining a buffer struct.
 * @buffer: A pointer to a character array.
 * @start: A pointer to the start of buffer.
 * @len: The length of the string stored in buffer.
 */
typedef struct buffer_s
{
    char *buffer;
    char *start;
    unsigned int len;
} buffer_t;

int _printf(const char *format, ...);
unsigned int convert_c(va_list args, buffer_t *output);
unsigned int convert_s(va_list args, buffer_t *output);
unsigned int convert_percent(va_list args, buffer_t *output);

/* Helper Functions */
buffer_t *init_buffer(void);
void free_buffer(buffer_t *output);
unsigned int _memcpy(buffer_t *output, const char *src, unsigned int n);

#endif /* MAIN_H */
