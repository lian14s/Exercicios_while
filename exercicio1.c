/*
CONTAGEM REGRESSIVA Peça um número inteiro positivo e
use while para fazer uma contagem regressiva até 0. Exemplo:
Entrada: 5 Saída: 5 4 3 2 1 0

*/

#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &numero);
    if (numero < 0)
    {
        printf("Numero invalido, digite outro numero.\n");
        return 1;
    }
    while (numero >= 0) 
    {
        printf("%d ", numero);
        numero--;
    }

    return 0;
}