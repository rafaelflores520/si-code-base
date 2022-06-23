
#include <stdio.h>
#include <string.h>

char* cifradoCesar(char* text, int d){
    for (int i = 0; i < strlen(text); i++) {
        text[i] = text[i] + d;
    }
    return text;
}

int main()
{
    char text[] = "CodigoSecreto";
    printf("Original: %s\n", text);
    int moovement = 5;
    cifradoCesar(text, moovement);
    printf("Cifrado: %s", text);
    return 0;
}
