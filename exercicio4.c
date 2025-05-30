/*
MÉDIA DE NOTAS VÁLIDAS Peça notas (0 a 10) até que o usuário digite
uma nota inválida. Calcule a média das notas válidas.
Exemplo: Entrada: 7, 8, 11 Saída: Média = 7.5

*/

#include <stdio.h>

int main()
{
    float nota, soma = 0.0;
    int NumeroNotas=0;
    printf("Digite notas entre 0 e 10 (digite uma nota invalida para sair):\n");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10)
    {
        printf("Erro: Nota invalida foi digitada antes de notas validas.\n");
        return 1;
    }

    while (nota >= 0 && nota <= 10)
    {
        soma += nota;
        NumeroNotas++;
        scanf("%f", &nota);
    }
    printf("Media = %.1f\n", soma / NumeroNotas);

    return 0;
}