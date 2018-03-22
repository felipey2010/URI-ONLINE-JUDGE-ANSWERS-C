#include <stdio.h>

int main(){
    int D, I, X, F, soma = 0, aux;
    scanf("%d %d %d %d", &D, &I, &X, &F);
    aux = D;
    soma = I;
    aux++;
    while(aux <= (D+F)){
        if(aux%2 == 0){
            soma+=X;
        }
        else{
            soma-=X;
        }
        aux++;
    }
    printf("%d\n", soma);

    return 0;
}
