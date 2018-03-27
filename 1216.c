#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double count = 0, avg = 0, sum = 0;
    char nome[100];

    while(fgets(nome, 100, stdin) != NULL){
        scanf("%lf", &avg);
        sum += avg;
        count++;
        getchar();
    }
    printf("%.1f\n",(sum/count));
    return 0;
}
