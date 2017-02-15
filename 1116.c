#include <stdio.h>

main(){
    float A, B;
    int N, i;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        scanf("%f %f", &A, &B);
        if(B == 0.0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n", (A / B));
        }
    }
    return 0;
}
