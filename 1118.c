#include <stdio.h>

main(){
    float A, B, media;
    int i, X = 1;

    while(X == 1){
        scanf("%f", &A); //Checking A
        while(A < 0 || A > 10){
            if(A < 0 || A > 10){
                printf("nota invalida\n");
              }
            scanf("%f", &A);
        }
        scanf("%f", &B); //Checking B
        while(B < 0 || B > 10){
            if(B < 0 || B > 10){
                printf("nota invalida\n");
              }
            scanf("%f", &B);
        }
    media = ((A + B) / 2);
    printf("media = %.2f\n", media);

    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &X);
    while(X < 1 || X > 2){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &X);
    }

    }
    return 0;
}
