#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char *str = "cadena para codificar";
int main() {
    int shift;
    int lower = 1, upper = 25;
    char num[16];
    shift = (rand() % (upper - lower + 1)) + lower;
    while (*str) {
        if (!isspace(*str) || !isblank(*str))
            printf("%c", (((*str - 97) + shift) % 26) + 97);
        else
            printf("%c", *str);
        str += 1;
    }
    return 0;
}