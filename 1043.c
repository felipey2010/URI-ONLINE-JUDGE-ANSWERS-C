#include <stdio.h>

main(){
    float vet[4], num[4], area, perimetro = 0;
    int i, j;

    for(i = 1; i <= 3; i++){
        scanf("%f", &vet[i]);
        perimetro += vet[i];
    }
    for(i = 1; i <= 3; i++){
        num[i] = vet[i];
    }
    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 3; j++){
            if(vet[j] < vet[i]){
                int aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }

    }
    if((vet[2] + vet[3]) > vet[1]){
        printf("Perimetro = %.1f\n", perimetro);
    }
    else{
        area = (((num[1] + num[2]) / 2) * num[3]);
        printf("Area = %.1f\n", area);
    }

    return 0;
}
