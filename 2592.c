#include <stdio.h>

void read_num(int* num, int aux){
    int i = aux;
    for(i=0; i < aux; i++){
        scanf("%d", &num[i]);
    }
}

int check(int* num, int N){
    int i;
    for(i = 0; (i+1) < N; i++){
        if(num[i] < num[i+1])
            continue;
        else
            return 1;
    }
    return 0;
}
int main(){
    int N, cont = 0, num[10000];

    scanf("%d", &N);

    while(N != 0){
        read_num(num, N);

        if(check(num, N) == 0){
            printf("%d\n", (cont+1));
            scanf("%d", &N);
            cont=0;
        }
        else{
            cont++;
        }

    }

    return 0;
}
