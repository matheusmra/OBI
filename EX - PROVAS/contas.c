#include <stdio.h>
int main(){
    int V, A, F, P, total;
    scanf("%d", &V);
    scanf("%d", &A);
    scanf("%d", &F);
    scanf("%d", &P);
    if(V >= A || V >= F || V >= P){
        total = 1;
    }
    if(V >= (A + F) || V >= (A + P) || V >= (F + P)){
            total = 2;
    }if(V >= (A + F + P)){
        total = 3;
    }
    printf("%d\n", total);

    }
