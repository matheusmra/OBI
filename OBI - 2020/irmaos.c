#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M); // Lê as idades do irmão mais novo e de Otávio

    // Calcula a idade do irmão mais velho (Orlando)
    int Orlando = 2 * M - N;

    printf("%d\n", Orlando); // Imprime a idade de Orlando

    return 0;
}

