#include <stdio.h>

main(){
    int X, Y, i, sum;

    do{
        scanf("%d", &X); //X = starting number;
        sum = 0, Y = X;
        i = 5;
            do{
                if(Y%2 == 0){
                sum += Y;
                i--;
                }
                Y++;
            }while(i != 0);
        if(X != 0){
            printf("%d\n", sum);
        }
    }while(X != 0);

    return 0;
}


