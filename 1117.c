#include <stdio.h>

main(){
    float A, B;
    int i, j;

    for(i=1; i <=2; i++){
        scanf("%f", &A);
        if(A < 0.0 || A > 10.0){
            printf("nota invalida\n");
            i = 1;
        }
        else{
            for(j = 1; j<= 2; j++){
                scanf("%f", &B);
                if(B < 0.0 || B > 10.0){
                printf("nota invalida\n");
                j = 1;
                }
                else{
                    printf("media = %.2f\n",((A+B)/2));
                }
            }
        }
    }

}
