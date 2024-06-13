#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, i, j, tempo = 0, posicao_atual = 0;
    int *casas, *encomendas;
    scanf("%d %d", &N, &M);
    casas = (int*) malloc(N * sizeof(int));
    encomendas = (int*) malloc(M * sizeof(int));
    for(i = 0; i < N; i++) {
        scanf("%d", &casas[i]);
    }
    for(i = 0; i < M; i++) {
        scanf("%d", 
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            if(encomendas[i] == casas[j]) {
                tempo += abs(j - posicao_atual);
                posicao_atual = j;
            }
        }
    }

    printf("%d\n", tempo);
}
