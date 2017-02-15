#include <stdio.h>

main(){
    int tempo, horas, minutos, segundos, aux;
    scanf("%d", &tempo);

    horas = tempo / 3600;
    aux = (tempo - (horas * 3600));
    minutos =  aux / 60;
    aux = aux - (minutos * 60);
    segundos = aux / 1;
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}


