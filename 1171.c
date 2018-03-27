#include <stdio.h>

int main(){
    int number, cont[2001];
    int i, num, aux;
    for(i = 0; i < 2001; i++){
        cont[i] = 0;
    }
    scanf("%d", &num);

    while(num > 0){
        scanf("%d", &aux);
        if(aux >= 0 && aux <= 2000)
            cont[aux]++;
        num--;
    }

    for(i = 0; i < 2001; i++){
        if(cont[i] != 0){
            printf("%d aparece %d vez(es)\n", i, cont[i]);
        }
    }
    return 0;
}
