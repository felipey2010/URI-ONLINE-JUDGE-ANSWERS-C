#include <stdio.h>

int find_remainder(int sum){
    return (sum%9);
}

int main(){
    int i, aux = 0, soma = 0;

    for(i = 0; i < 9; i++){
        scanf("%d", &aux);
        soma+=aux;
    }
    aux = find_remainder(soma);
    if(aux == 0)
        printf("Rudolph\n");
    else if(aux == 1)
        printf("Dasher\n");
    else if(aux == 2)
        printf("Dancer\n");
    else if(aux == 3)
        printf("Prancer\n");
    else if(aux == 4)
        printf("Vixen\n");
    else if(aux == 5)
        printf("Comet\n");
    else if(aux == 6)
        printf("Cupid\n");
    else if(aux == 7)
        printf("Donner\n");
    else if(aux == 8)
        printf("Blitzen\n");


    return 0;
}
