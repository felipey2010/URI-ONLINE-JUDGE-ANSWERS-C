#include <stdio.h>

main(){
    int escolha, alc = 0, gas = 0, di = 0;
    do{
       scanf("%d", &escolha);
        if(escolha == 1){
            alc++;
        }
        else if(escolha == 2){
            gas++;
        }
        else if(escolha == 3){
            di++;
        }
    }while(escolha != 4);

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, di);
    return 0;
}
