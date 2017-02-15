#include <stdio.h>
#include <stdlib.h>

main(){
    int num, i, aux;
    scanf("%d", &num);

    for(i = 0; i < 10000; i++){
        aux = (i%num);
        if(aux == 2){
            printf("%d\n", i);
        }
    }
    return 0;
}
