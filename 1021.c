#include <stdio.h>

main(){
    int dinheiro, cem, cinquenta, vinte, dez,  cinco, dois, um, aux;
    int cinq, vin, d, cinqo, umc;
    double money, income, aux2;
    scanf("%lf", &money);

    dinheiro = money;


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

    income = money - dinheiro;
    cinq = (income / 0.50);
    aux2 = (income - (cinq * 0.50));
    vin = (aux2 / 0.25);
    aux2 = (aux2 - (vin * 0.25));
    d = (aux2 / 0.10);
    aux2 = (aux2 - (d * 0.10));
    cinqo = (aux2 / 0.05);
    aux2 = (aux2 - (cinqo * 0.05)) + 0.0001;
    umc = (aux2 / 0.01);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n",cem, cinquenta, vinte);
    printf("%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",dez, cinco, dois);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", um, cinq, vin, d, cinqo, umc);

return 0;
}

