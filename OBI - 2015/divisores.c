#include<stdio.h>

int calcularDivisores(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int N;
    scanf("%d", &N);

    int numDivisores = calcularDivisores(N);
    printf("%d\n", numDivisores);

    return 0;
}
