/*
SOMA ATÉ DIGITAR ZERO Leia números inteiros até que o usuário digite 0.
Calcule e exiba a soma de
todos os números digitados. Exemplo: Entrada: 3, 7, 2, 0 Saída: Soma = 12

*/

#include <stdio.h>

int main()
{
    int numero, soma = 0;

    printf("Digite numeros inteiros (digite 0 para sair):\n");
    scanf("%d", &numero);

    while (numero != 0)
    {
        soma += numero; 
        scanf("%d", &numero);
    }

    printf("Soma = %d\n", soma);

    return 0;
}
