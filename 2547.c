#include <stdio.h>

int main(){
    int num, max_h, min_h;

    while((scanf("%d %d %d", &num, &min_h, &max_h)) != EOF){
        int cont = 0, i, aux;
        for(i=0; i < num; i++){
            scanf("%d", &aux);
            if(aux >= min_h && aux <=max_h)
                cont++;
        }
        printf("%d\n", cont);
    }

    return 0;
}
