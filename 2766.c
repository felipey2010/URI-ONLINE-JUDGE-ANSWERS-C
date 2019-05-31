#include <stdio.h>
#include <string.h>

int main(){
    int i=1;
    char vet[11][31];

    while(scanf("%s", vet[i]) != EOF && i < 11){
        getchar();
        if(i == 10){
            i = 0;
            printf("%s\n%s\n%s\n", vet[3], vet[7], vet[9]);
        }
        i++;
    }

    return 0;
}
