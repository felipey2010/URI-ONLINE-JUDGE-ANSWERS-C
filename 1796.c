#include <stdio.h>

int main(){
    int q, num, count = 0;

    scanf("%d", &q);
    num = q;
    while(q > 0){
        int aux;
        scanf("%d", &aux);

        if(aux == 1)
            count++;
        q--;
    }
    if(count >= (num-count))
        printf("N\n");
    else
        printf("Y\n");

    return 0;
}
