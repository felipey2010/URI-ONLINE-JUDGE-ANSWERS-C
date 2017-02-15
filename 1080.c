#include <stdio.h>

main(){
    int vet[100], i = 1, pos, val;

    while(i <= 100){
        scanf("%d", &vet[i]);
        i++;
    }
    val = vet[1];
    for(i = 1; i <= 100; i++){
        if(vet[i] > val){
            val = vet[i];
            pos = i;
        }
    }
    printf("%d\n%d\n", vet[pos], pos);
    return 0;
}
