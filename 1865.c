#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i, N, force;
    char nomes[100];

    scanf("%d", &N);
    getchar();
    char resultado[N];

    for(i=0;i < N; i++){
        scanf("%s", nomes);
        scanf("%d", &force);
        getchar();

        if(strcmp(nomes, "Thor") == 0)
            resultado[i] = 'Y';
        else
            resultado[i] = 'N';
    }
    i = 0;
    while(i < N){
        printf("%c\n", resultado[i]);
        i++;
    }

    return 0;
}
