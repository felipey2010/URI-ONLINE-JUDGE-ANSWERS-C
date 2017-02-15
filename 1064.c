#include <stdio.h>
#include <stdlib.h>

main(){
    int i, contador = 0, aux[5], j = 1;
    double num[5], sum = 0.0;

    for(i = 0; i < 6; i++){
        scanf("%lf", &num[i]);
        setbuf(stdin, NULL);
    }

    for(i = 0; i <= 5; i++){
        if(num[i] > 0){
            aux[j] = i;
            contador++;
            j++;
        }
    }
    for(j = 1; j <= contador; j++){
        sum += num[aux[j]];
    }

    printf("%d valores positivos\n", contador);
    printf("%.1lf\n", (sum / contador));
}
