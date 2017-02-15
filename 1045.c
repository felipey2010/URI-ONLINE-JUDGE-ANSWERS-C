#include <stdio.h>

main(){
    double vet[4], a, b, c, aux;
    int i, j, cont = 0;
    //Reading float values
    for(i = 1; i <= 3; i++){
        scanf("%lf", &vet[i]);
    }
    //Arranging in descending order
    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 3; j++){
            if(vet[j] < vet[i]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 3; j++){
            if(vet[j] == vet[i]){
                if(j != i){
                    cont+=1;
                }
            }
        }
    }

    a = (vet[2] + vet[3]); //a = B + C
    b = ((vet[2] * vet[2]) + (vet[3] * vet[3])); //b = B2 + C2
    c = (vet[1] * vet[1]); // c = A2

    if(vet[1] >= a){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(c == b){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(c > b){
        printf("TRIANGULO OBTUSANGULO\n");
        if(vet[1] == vet[2] && vet[2] == vet[3]){
            printf("TRIANGULO EQUILATERO\n");
        }
        if(cont == 2){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    if(c < b){
        printf("TRIANGULO ACUTANGULO\n");
        if(vet[1] == vet[2] && vet[2] == vet[3]){
            printf("TRIANGULO EQUILATERO\n");
        }
        if(cont == 2){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
