#include <stdio.h>

main(){
    int X, Y, i = 1, aux;

    scanf("%d %d", &X, &Y);
    if(X > Y){
        aux = X;
        X = Y;
        Y = aux;
    }
    aux = 0;
    for(i = 1; i != (Y+1); i++){
        if(aux == X){
            printf("%d\n", i);
            aux = 0;
        }
        else{
            printf("%d ", i);
        }

        aux++;
    }
printf("\n");
    return 0;
}
