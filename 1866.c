#include <stdio.h>

main(){
    int num, sum = 0, i, j;

    scanf("%d", &i);
    while(i != 0){
          sum = 0;
        scanf("%d", &num);
        for(j = 0; j < num; j++){
            if(j%2 == 0){
                sum += 1;
            }
            else{
                sum -= 1;
            }
        }
            printf("%d\n", sum);
        i--;
    }
    return 0;
}
