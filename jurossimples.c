#include <stdio.h>

float jurossimples(float capital, float taxa, int tempo);

int main()

{
    float capital, taxa;
    int tempo;

    printf("Capital: ");
    scanf("%f", &capital);

    printf("Taxa: ");
    scanf("%f", &taxa);

    printf("Tempo: ");
    scanf("%d", &tempo);

    printf("Juros = %.2f\n", jurossimples(capital, taxa, tempo));

    printf("\nFeito por Luís Guilherme ( https://github.com/luisblguilherme-11 ) ");

    return 0;
}
