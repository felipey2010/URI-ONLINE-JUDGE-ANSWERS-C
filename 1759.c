#include <stdio.h>

main(){
    int num, i;

    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        if(i == num){
            printf("Ho!\n");
        }
        else{
            printf("Ho ");
        }
    }
    return 0;
}
