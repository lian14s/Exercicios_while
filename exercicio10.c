/*
CONVERSÃO DECIMAL-BINÁRIO Converta um
número decimal para binário usando restos de divisão. Exemplo:
Entrada: 10 Saída: 1010 (10 em binário)

*/

#include <stdio.h>

int main()
{
    int numero, resto;
    int binario[32]; // Array para guardar até 32 bits (considerando que int vai até 32 bits)
    int i = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if(numero < 0)
    {
        printf("Erro: Digite apenas numeros inteiros positivos.\n");
        return 1;
    }

    if (numero == 0)
    {
        printf("0 em binario = 0\n");
        return 0;
    }

    while (numero > 0)
    {
        resto = numero % 2;
        binario[i] = resto;
        i++;
        numero = numero / 2;
    }

    printf("O numero em binario e: ");
    i--;

    while (i >= 0)
    {
        printf("%d", binario[i]);
        i--;
    }

    printf("\n");
    return 0;
}
