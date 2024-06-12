#include <stdio.h>
int main(){
    int N,M;
    char L;
    int total = 0;
    scanf("%d", &N);
    if(N%2==0){
        for(int i=0; i<N; i++){
            scanf("%d %c", &M, &L);
        if(L == 'E' || L == 'D'){
            total++;
        }
        }
        total = total/2;

    }
    printf("%d", total);
    }
