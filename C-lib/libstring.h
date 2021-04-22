#ifndef LIBSTRING_H
#define LIBSTRING_H

#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// #define STR_SIZE 1024

// clear all whitespaces at the start of a null-terminated string
// @param str pointer to null-terminated string
size_t trim_start(char *str);

// clear all whitespaces at the end of a null-terminated string
// @param str pointer to null-terminated string
size_t trim_end(char *str);

// clear all whitespaces at the start and the end of a null-terminated string
// @param str pointer to null-terminated string
size_t trim(char *str);

#endif // header guard
