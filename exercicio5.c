/*
CONTADOR DE DÍGITOS PARES/ÍMPARES Leia um
número inteiro e conte quantos dígitos são pares e quantos são
ímpares. Exemplo: Entrada: 12345 Saída: 2 pares, 3 ímpares

*/

#include <stdio.h>

int main()
{
    int numero, digito, pares = 0, impares = 0;

    printf("Digite um numero inteiro:");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("Erro: Numero invalido, digite um numero inteiro positivo.\n");
        return 1;
    }

    if (numero == 0)
    {
        pares = 1;
    }

    while (numero > 0)
    {
        digito = numero % 10;
        if (digito % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        numero /= 10;
    }

    printf("%d pares, %d impares\n", pares, impares);
    return 0;
}