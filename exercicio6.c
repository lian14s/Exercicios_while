/*
SEQUÊNCIA DE FIBONACCI Gere os primeiros N termos da sequência de Fibonacci.
Exemplo: Entrada: 6 Saída: 0, 1, 1, 2, 3, 5
*/

#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;
    int i = 0;
    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erro: Numero negativo digitado.\n");
        return 1;
    }

    printf("Sequencia de Fibonacci: ");

    while (i < n)
    {
        if (i == 0)
        {
            printf("%d", a);
        }
        else if (i == 1)
        {
            printf(", %d", b);
        }
        else
        {
            c = a + b;
            printf(", %d", c);
            a = b;
            b = c;
        }
        i++;
    }

    printf("\n");
    return 0;
}