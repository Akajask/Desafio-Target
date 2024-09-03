#include <stdio.h>

int main()
{
    int indice = 13;
    int k = 1;
    int soma = 0;

    for (k = 1; k < indice; k++){
      soma += k;
    }

    printf("%d", soma);
    return 0;
}