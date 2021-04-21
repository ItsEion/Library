#include "libstring.h"

size_t trim_start(char *str) {

    // It's a empty string
    if(*str == 0) return 0ull;

    bool startgap = true;

    size_t count = 0;

    size_t length = strlen(str);

    char *start = str;
    char *term = start + length;
    char *end = term - 1;

    for(; start < term; start++ ) {
        if(startgap && isspace(*start)) count++;
        else break;
    }

    if(count) {
        char *temp = (char *)malloc((length - count + 1)*sizeof(char));

        strcpy(temp, str + count);

        strcpy(str, temp);

        free(temp);
    }

    return count;
}

size_t trim_end(char *str) {

    // It's a empty string
    if(*str == 0) return 0ull;

    bool endgap = true;

    size_t count = 0;

    size_t length = strlen(str);

    char *start = str;
    char *term = start + length;
    char *end = term - 1;

    for(; end - start > 0 ; end-- ) {
        if(endgap && isspace(*end)) count++;
        else break;
    }

    if(count) {
        term -= count;

        *term = 0;
    }

    return count;
}

size_t trim(char *str) {
    // It's a empty string
    if(*str == 0) return 0ull;

    size_t count = trim_end(str);

    count += trim_start(str);

    return count;
}
