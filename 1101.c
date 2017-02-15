#include <stdio.h>

main(){
    int M, N, aux;
    while(scanf("%d %d", &M, &N)){
            if(M <= 0 || N <= 0){
                break;
            }
        int sum = 0;
        if(M > N){
            int aux = M;
            M = N;
            N = aux;
        }
        for(aux = M; aux <= N; aux++){
            sum+=aux;
            printf("%d ",aux);
        }
    printf("Sum=%d\n", sum);
    }
}
