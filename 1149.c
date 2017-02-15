#include <stdio.h>

main(){
    int N, A, i, sum = 0;

    scanf("%d", &A);

    do{
        scanf("%d", &N);
    }while( N<= 0);

    for(i = 1; i <= N; i++){
        sum += A;
            A++;
    }

    printf("%d\n", sum);
    return 0;
}


