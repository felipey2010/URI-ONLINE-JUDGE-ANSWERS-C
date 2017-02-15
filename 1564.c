#include <stdio.h>

main(){
    int num, i, N;
    while((scanf("%d", &num)) != EOF){
        if(num == 0){
            printf("vai ter copa!\n");
        }
        else if(num >= 1 && num <= 100){
            printf("vai ter duas!\n");
        }
    }
    return 0;
}
