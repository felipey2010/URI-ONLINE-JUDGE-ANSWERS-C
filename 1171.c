#include <stdio.h>

main(){
    int number, cont[2000];
    int i, num;
    for(i = 0; i < 2000; i++){
        cont[i] = 0;
    }
    scanf("%d", &num);

    for( ; num > 0; num--){
        scanf("%d", &number);
        if(number >= 1 && number <= 2000){
            cont[number]++;
        }
    }
    for(i = 0; i < 2000; i++){
        if(cont[i] > 0){
            printf("%d aparece %d vez(es)\n", i, cont[i]);
        }
    }
    return 0;
}
