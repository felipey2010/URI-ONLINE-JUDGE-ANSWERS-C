#include <stdio.h>

main(){
    int X;
    while(scanf("%d", &X)){
        if(X == 2002){
                printf("Acesso Permitido\n");
                break;
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}

