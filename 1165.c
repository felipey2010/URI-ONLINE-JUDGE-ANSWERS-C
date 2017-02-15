#include <stdio.h>

main(){
    int primo, i, sum, num;

    scanf("%d", &num);
    do{
        sum = 0;

        scanf("%d", &primo);
        for(i =1; i <= primo; i++){
            if(primo%i == 0){
                sum += i;
            }
        }
        if(sum == (primo+1)){
            printf("%d eh primo\n", primo);
        }
        else{
            printf("%d nao eh primo\n", primo);
        }
        num--;
    }while(num != 0);


    return 0;
}
