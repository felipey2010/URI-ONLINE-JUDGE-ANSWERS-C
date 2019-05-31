#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, aux;

    scanf("%d", &aux);

    if(aux >= 2 && aux <=99){
        while(aux > 0){
            char a[100]="";
            getchar();
            scanf("%[^\n]s", a);

            printf("gzuz\n");

            aux--;
        }
    }

    return 0;
}

