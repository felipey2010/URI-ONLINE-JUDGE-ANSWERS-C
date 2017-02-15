#include <stdio.h>

main(){
    int i,j, num, varA, varB, sum = 0, aux;
    scanf("%d", &num);

    while(num > 0){
        sum = 0, aux = 0;
        scanf("%d %d", &varA, &varB);
        if(varB < varA){
            aux = varA;
            varA = varB;
            varB = aux;
        }
        for(j = (varA+1); j < varB; j++){
            if(!(j%2 == 0)){
                sum +=j;
            }
        }
    num--;
    printf("%d\n", sum);
    }
}
