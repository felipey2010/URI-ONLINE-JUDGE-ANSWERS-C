#include <stdio.h>
#include <stdlib.h>

main(){
    int i, Num[5], contador = 0;

    for(i = 0; i < 5; i++){
        scanf("%d", &Num[i]);
        setbuf(stdin, NULL);
    }
    for(i = 0; i < 5; i++){
        if(Num[i]%2 == 0){
            contador++;
        }
    }
    printf("%d valores pares\n", contador);

    return 0;
}
