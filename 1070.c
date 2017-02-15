#include <stdio.h>

main(){
    int i,j =0, X;

    scanf("%d", &X);

    while (!(j == 6)){
        X++;
        if(!(X%2 == 0)){
            printf("%d\n", X);
            j++;
        }
    }
    return 0;
}

