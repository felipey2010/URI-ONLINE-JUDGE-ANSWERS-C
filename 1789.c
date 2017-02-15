#include <stdio.h>

main(){
    int num, i, aux;

    while((scanf("%d", &num)) != EOF){
    int vet[num];
    for(i = 0; i < num; i++){
        scanf("%d", &vet[i]);
    }
    aux = vet[0];
    for(i = 0; i < num; i++){
        if(vet[i] > aux){
            aux = vet[i];
        }
    }

    if(aux < 10){
        printf("1\n");
    }
    else if(aux >= 10 && aux <= 19){
        printf("2\n");
    }
    else{
        printf("3\n");
    }
    }
    return 0;
}
