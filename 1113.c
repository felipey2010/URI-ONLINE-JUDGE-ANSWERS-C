#include <stdio.h>

main(){
    int X, Y, aux;
    while(scanf("%d %d", &X, &Y)){
        if(X == Y){
                break;
        }
        else if(X > Y){
            printf("Decrescente\n");
        }
        else{
            printf("Crescente\n");
        }
    }
    return 0;
}

