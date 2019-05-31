#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    int N, i;
    char q[100];

    scanf("%d", &N);


    while(N > 0){
        getchar();
        scanf("%[^\n]s", q);

        printf("I am Toorg!\n");
        N--;
    }

    return 0;
}
