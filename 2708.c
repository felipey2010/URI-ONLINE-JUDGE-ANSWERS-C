#include <stdio.h>
#include <string.h>

int main(){
    int in = 0, out = 0, aux, jeep_in = 0, jeep_out = 0;
    char check[7];

    while(1){
        scanf("%s", check);
        getchar();

        if(strcmp(check, "SALIDA") == 0){
            scanf("%d", &aux);
            in += aux;
            jeep_in++;
        }
        else if(strcmp(check, "VUELTA") == 0){
            scanf("%d", &aux);
            out += aux;
            jeep_out++;
        }
        else if(strcmp(check, "ABEND") == 0)
            break;
    }
    printf("%d\n%d\n", (in-out), (jeep_in - jeep_out));

    return 0;
}
