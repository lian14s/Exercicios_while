/*
CÁLCULO DE FATORIAL Calcule o fatorial de um número inteiro positivo
usando while. Exemplo: Entrada: 5 Saída: 120 (5! = 5×4×3×2×1)

*/

#include <stdio.h>
int main()
{
    int num;
    long fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Erro: Fatorial de numero negativo nao existe.\n");
        return 1;
    }

    int i = num; 
    while (i > 0)
    {
        fatorial *= i;
        i--;
    }

    printf("%d! = %ld\n", num, fatorial);
    return 0;
}