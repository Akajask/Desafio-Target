#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char string[100];
    int contador = 0;

    printf("Digite uma palavra ou frase:");
    fgets(string, sizeof(string), stdin);

    for(int i = 0; string[i] != '\0'; i++) {
        if (tolower(string[i]) == 'a') {
            contador++;
        }
    }

    if (contador > 0) {
        printf("A letra 'a' ocorre %d vez(es) na string.\n", contador);
    } else {
        printf("A letra 'a' não ocorre na string.\n");
    }
    
    return 0;
}
