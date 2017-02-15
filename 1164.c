#include <stdio.h>

main(){
    int odd, i, sum, num;

    scanf("%d", &num);
    do{
        sum = 0;

        scanf("%d", &odd);
        for(i =1; i < odd; i++){
            if(odd%i == 0){
                sum += i;
            }
        }
        if(sum == odd){
            printf("%d eh perfeito\n", odd);
        }
        else{
            printf("%d nao eh perfeito\n", odd);
        }
        num--;
    }while(num != 0);


    return 0;
}
