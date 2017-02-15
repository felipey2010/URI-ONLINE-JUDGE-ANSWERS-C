#include <stdio.h>

main(){
    int A, B;
    int X = 1, gre = 0, inter = 0, draw = 0;

    while(X == 1){
        scanf("%d %d", &A, &B);
        if(A == B){
            draw+=1;
        }
        else if(A > B){
            inter += 1;
        }
        else{
            gre += 1;
        }
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &X);
        if(X < 1 || X > 1){
            X = 2;
        }
    }
    printf("%d grenais\n", (inter + draw + gre));
    printf("Inter:%d\nGremio:%d\nEmpates:%d\n", inter, gre, draw);
    if(inter > gre){
        printf("Inter venceu mais\n");
    }
    else if(gre > inter){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Nao houve vencedor\n");
    }
    return 0;
}
