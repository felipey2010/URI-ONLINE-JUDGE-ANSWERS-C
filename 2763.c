#include <stdio.h>
#include <stdlib.h>

int main(){
    int int_cpf[15], i;
    char char_cpf[15];

    scanf("%s", char_cpf);

    for(i = 0; char_cpf[i] != '\0'; i++){
        if(char_cpf[i] == '.' || char_cpf[i] == '-')
            printf("\n");
        else
            printf("%c", char_cpf[i]);
    }
    printf("\n");

    return 0;
}
