/*
INVERSÃO DE NÚMEROS Inverta os dígitos de um número
inteiro positivo. Exemplo: Entrada: 123 Saída: 321

*/

#include <stdio.h>

int main()
{
    int numero, invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0)
    {
        printf("Erro: Digite apenas numeros inteiros positivos.\n");
        return 1;
    }

    while (numero > 0)
    {
        invertido = invertido * 10 + (numero % 10);
        numero /= 10;
    }

    printf("Numero invertido: %d\n", invertido);

    return 0;
}