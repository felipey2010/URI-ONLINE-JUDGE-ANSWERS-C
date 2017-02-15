#include <stdio.h>

main(){
    int i, X, num;

    scanf("%d", &X);

    for(i = 1; i <= X; i++){
        scanf("%d", &num);
        if(num == 0){
            printf("NULL\n");
        }
        else if(num%2 == 0){
            printf("EVEN ");
        }
        else{
            printf("ODD ");
        }

        if(num > 0){
            printf("POSITIVE\n");
        }
        else if(num < 0){
            printf("NEGATIVE\n");
        }
    }
    return 0;
}


