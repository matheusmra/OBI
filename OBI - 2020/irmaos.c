#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M); // L� as idades do irm�o mais novo e de Ot�vio

    // Calcula a idade do irm�o mais velho (Orlando)
    int Orlando = 2 * M - N;

    printf("%d\n", Orlando); // Imprime a idade de Orlando

    return 0;
}

