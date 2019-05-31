#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    char data[101];

    scanf("%[^\n]s", data);

    for(i = 0; data[i] != '\0'; i++){
        if(data[i] == ',')
            printf("\n");
        else
            printf("%c", data[i]);
    }
    printf("\n");

    return 0;
}
