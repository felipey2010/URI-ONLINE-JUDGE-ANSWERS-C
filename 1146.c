#include <stdio.h>

main(){
    int num, i = 1;

    do{
        scanf("%d", &num);
        for(i = 1; i <= num; i++){
            if(i == num){
                printf("%d\n", i);
            }
            else{
                printf("%d ", i);
            }
        }
    }while(num != 0);

    return 0;
}

