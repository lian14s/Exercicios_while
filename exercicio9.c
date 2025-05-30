/*
MÁXIMO E MÍNIMO Leia números até digitar 0. Encontre o maior e o
menor número. Exemplo: Entrada: 4, 9, 2, 0 Saída: Máximo = 9, Mínimo = 2


*/
#include <stdio.h>

int main()
{
    int numero, maximo, minimo;
    int primeiro = 1;

    printf("Digite numeros inteiros (0 para sair):\n");

    while (1)
    {
        scanf("%d", &numero);
        if (numero == 0)
            break;

        if (primeiro)
        {
            maximo = minimo = numero;
            primeiro = 0;
        }
        else
        {
            if (numero > maximo)
                maximo = numero;
            if (numero < minimo)
                minimo = numero;
        }
    }

    printf("Maximo = %d, Minimo = %d\n", maximo, minimo);
    return 0;
}
