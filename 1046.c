#include <stdio.h>

main(){
    int start, end, duration1, duration2;

    scanf("%d %d", &start, &end);

    if(start > end){
        duration1 = (24 - start) + end;
        printf("O JOGO DUROU %d HORA(S)\n", duration1);
    }
    else if(end > start){
        duration2 = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", duration2);
    }
    else if(start == end){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
