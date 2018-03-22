#include <stdio.h>

int main(){
    int vet[101] = {0}, i=0, aux, N, max=0,pos;

    scanf("%d", &N);

    while(i < N){
        scanf("%d", &aux);
        vet[aux]++;
        i++;
    }
    i=0;
    while(i < 101){
        if(vet[i] >= max){
            pos = i;
            max = vet[pos];
        }
        i++;
    }
    printf("%d\n",pos);
    return 0;
}
