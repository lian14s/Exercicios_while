/*
VERIFICADOR DE NÚMEROS PERFEITOS Verifique se um número é perfeito
(soma dos divisores = número). Exemplo: Entrada: 28 Saída: "28 é perfeito" (1+2+4+7+14=28)

*/

#include <stdio.h>

int main()
{
    int numero, soma = 0;
    int i = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero <= 0)
    {
        printf("Erro: Digite um numero inteiro positivo.\n");
        return 1;
    }

    while (i < numero)
    {
        if (numero % i == 0)
        {
            soma += i;
        }
        i++;
    }

    if (soma == numero)
    {
        printf("%d e perfeito\n", numero);
    }
    else
    {
        printf("%d nao e perfeito\n", numero);
    }

    return 0;
}