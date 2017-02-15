#include <stdio.h>

main(){
    int A, B, sum = 0, i;
    scanf("%d %d", &A, &B);
    if(A > B){
        int aux;
        aux = A;
        A = B;
        B = aux;
    }
    for(i = A; i <=B; i++){
        if(!(i%13 == 0)){
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
