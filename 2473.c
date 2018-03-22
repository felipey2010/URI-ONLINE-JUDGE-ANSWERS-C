#include <stdio.h>

int main(){
    int vet[101] = {0}, i=0, aux, cont=0;

    while(i < 6){
        scanf("%d", &aux);
        vet[aux]++;
        i++;
    }
    i=0;
    while(i < 6){
        scanf("%d", &aux);
        if(vet[aux] != 0)
            cont++;
        i++;
    }

    if(cont < 3)
        printf("azar\n");
    else if(cont == 3)
        printf("terno\n");
    else if(cont == 4)
        printf("quadra\n");
    else if(cont == 5)
        printf("quina\n");
        else if(cont == 6)
        printf("sena\n");


    return 0;
}
