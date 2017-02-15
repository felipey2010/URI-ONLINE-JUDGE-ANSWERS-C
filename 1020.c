#include <stdio.h>

main(){
    int dias, ano, mes, dia, aux;
    scanf("%d", &dias);

    ano = dias / 365;
    aux = (dias - (ano * 365));
    mes =  aux / 30;
    dia = (aux - (mes * 30));

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
}
