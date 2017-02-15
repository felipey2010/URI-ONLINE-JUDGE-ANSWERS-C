#include <stdio.h>

main(){
    int N, X, Y, i, sum;

    scanf("%d", &N); //Number of test cases
    do{
        sum = 0;
        scanf("%d %d", &X, &Y); //X = starting number; Y = number of odd numbers to be added
        i = Y;
            do{
                if(!(X%2 == 0)){
                sum += X;
                i--;
                }
                X++;
            }while(i != 0);
        printf("%d\n", sum);
        N--;
    }while(N != 0);

    return 0;
}


