#include <stdio.h>
#include <string.h>

void extract(char* str, int* num){
    int i, j=0,k=0;
    char aux[13];

    strcpy(aux, "T");

    for(i = 0; i <= strlen(str); i++){
        if((str[i] >= 48) && (str[i] <= 57)){
            aux[j] = str[i];
            j++;
        }
        else{
            if((strcmp(aux, "T")==0)){
                j=0;
            }
            else{
                aux[j] = '\0';
                num[k] = atoi(aux);
                k++;
                j = 0;
                strcpy(aux, "T");
            }
        }
    }
}

int main(){
    int a, b, i;
    int num[6] = {0};
    char test[15];

    scanf("%d", &a);
    while(a > 0){
        getchar();
        scanf("%s", test);
        extract(test, num);

        /*for(i = 0; i <=2; i++)
            printf("%d\n", num[i]);
*/  printf("%d\n", (num[0]+num[1]+num[2]));
        a--;
    }

    return 0;
}
