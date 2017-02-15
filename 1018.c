#include <stdio.h>

main(){
    int dinheiro, cem, cinquenta, vinte, dez,  cinco, dois, um, aux;
    scanf("%d", &dinheiro);

    cem = dinheiro / 100;
    aux = (dinheiro - (cem * 100));
    cinquenta =  aux / 50;
    aux = aux - (cinquenta * 50);
    vinte = aux / 20;
    aux = aux - (vinte * 20);
    dez = aux / 10;
    aux = aux - (dez * 10);
    cinco = aux / 5;
    aux = aux -(cinco * 5);
    dois = aux / 2;
    aux = aux - (dois * 2);
    um = aux / 1;
    printf("%d\n", dinheiro);
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n",cem, cinquenta, vinte);
    printf("%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",dez, cinco, dois, um);
return 0;
}

