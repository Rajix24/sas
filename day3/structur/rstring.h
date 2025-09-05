#ifndef MYSTDSTRING_H
#define MYSTDSTRING_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// strupr: convert string to uppercase
static char* strupr_custom(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper((unsigned char) str[i]);
    }
    return str;
}

// strlwr: convert string to lowercase
static char* strlwr_custom(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char) str[i]);
    }
    return str;
}

// strrev: reverse a string
static char* strrev_custom(char* str) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}

// itoa: convert integer to string
static char* itoa_custom(int value, char* str, int base) {
    if (base == 10)
        sprintf(str, "%d", value);
    else if (base == 16)
        sprintf(str, "%x", value);
    else if (base == 8)
        sprintf(str, "%o", value);
    else
        sprintf(str, "%d", value);  // default decimal
    return str;
}

// Optional: define macros so you can just use strupr/strlwr/strrev/itoa
#define strupr strupr_custom
#define strlwr strlwr_custom
#define strrev strrev_custom
#define itoa itoa_custom

#endif

