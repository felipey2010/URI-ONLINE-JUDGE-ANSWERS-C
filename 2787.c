#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if((abs(a-b))%2 == 0)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
