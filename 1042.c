#include <stdio.h>

main(){
    int num[4], aux[4], i, j, a;
    for(i = 1; i <= 3; i++){
            scanf("%d", &num[i]);
    }

    for(i = 1; i <= 3; i++){
        aux[i] = num[i];
    }

    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 3; j++){
            if(aux[i] < aux[j]){
                 a = aux[j];
                 aux[j] = aux[i];
                 aux[i] =a;
             }
        }
    }
    for(i = 1; i <= 3; i++){
        printf("%d\n", aux[i]);
    }
    printf("\n");
    for(i = 1; i <= 3; i++){
        printf("%d\n", num[i]);
    }
    return 0;
}
