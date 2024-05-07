#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, i, j, tempo = 0, posicao_atual = 0;
    int *casas, *encomendas;

    // Leitura do número de casas e encomendas
    scanf("%d %d", &N, &M);

    // Alocação dinâmica dos vetores
    casas = (int*) malloc(N * sizeof(int));
    encomendas = (int*) malloc(M * sizeof(int));

    // Leitura dos números das casas
    for(i = 0; i < N; i++) {
        scanf("%d", &casas[i]);
    }

    // Leitura dos números das encomendas
    for(i = 0; i < M; i++) {
        scanf("%d", &encomendas[i]);
    }

    // Processamento das encomendas
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
