#include <stdio.h>

main(){
    int A, B, i;
    scanf("%d %d", &A, &B);
    if(!(A < 0) && !(B < 0)){
            if(A > B){
                int aux;
                aux = A;
                A = B;
                B = aux;
            }

            for(i = (A+1); i < B; i++){
                if((i%5 == 2) || (i%5 == 3)){
                printf("%d\n", i);
                }
            }
    }

    return 0;
}
