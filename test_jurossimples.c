#include <stdio.h>
#include <assert.h>

float jurossimples(float capital, float taxa, int tempo);

int main()
{

    assert(jurossimples(100, 0.5, 10) == 500);
    assert(jurossimples(100, 0.25, 12) == 300);
    assert(jurossimples(100, 0.75, 5) == 375);

    printf("Todos os testes passaram!\n");

    printf("\nFeito por Luís Guilherme ( https://github.com/luisblguilherme-11 ) ");

    return 0;
}
