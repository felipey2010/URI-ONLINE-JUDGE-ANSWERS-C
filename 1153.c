/*Read a value N. Calculate and write its corresponding factorial.
Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.*/
#include <stdio.h>
int main(){

    int valor;
    int fat = 1;
    int i;

    scanf("%d", &valor);

    for(i = 0; i < (valor-1); i++){
            fat *= (valor - i);
    }
    printf("%d\n", fat);
    return 0;
}
