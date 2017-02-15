#include <stdio.h>

main(){
    int n, i, j, k;
    scanf("%d", &n);
    do{
        for(j = 1; n != 0;j++){
            for(k = 1; k <= 3; k++){
                printf("%d ", j);
                j++;
            }
            printf("PUM\n");
            n--;
        }
    }while(n != 0);
    return 0;
}
