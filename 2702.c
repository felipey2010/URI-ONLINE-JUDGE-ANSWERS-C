#include <stdio.h>

int main(){
    int Ca, Ba, Pa, Cr, Br, Pr, aux=0;

    scanf("%d %d %d", &Ca, &Ba, &Pa);

    scanf("%d %d %d", &Cr, &Br, &Pr);

    if(Cr > Ca)
        aux = Cr - Ca;
    if(Br > Ba)
        aux += Br - Ba;
    if(Pr > Pa)
        aux += Pr - Pa;

    printf("%d\n", aux);
    return 0;
}
