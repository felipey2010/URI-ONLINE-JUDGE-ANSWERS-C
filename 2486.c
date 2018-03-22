#include <stdio.h>
#include <string.h>

/*
    suco de laranja	120 mg
    morango fresco	85 mg
    mamao	        85 mg
    goiaba vermelha	70 mg
    manga	        56 mg
    laranja	        50 mg
    brocolis	    34 mg
*/

int check(int n, char* str){
    if(strcmp(str, "suco de laranja") == 0)
        return (n * 120);
    else if(strcmp(str, "morango fresco") == 0)
        return(n * 85);
    else if(strcmp(str, "mamao") == 0)
        return (n * 85);
    else if(strcmp(str, "goiaba vermelha") == 0)
        return (n * 70);
    else if(strcmp(str, "manga") == 0)
        return (n * 56);
    else if(strcmp(str, "laranja") == 0)
        return (n * 50);
    else if(strcmp(str, "brocolis") == 0)
        return (n * 34);
    else
        return 0;
}

int main(){
    int qnt, sum=0, cont, i;
    char fruit[20];

    while(scanf("%d", &cont) && cont != 0){
        i = cont, sum = 0;
        while(cont > 0){
            getchar();
            scanf("%d %[^\n]s", &qnt, fruit);

            sum += check(qnt, fruit);

            cont--;
        }
        if(i > 0){
            if(sum >=110 && sum <= 130){
                printf("%d mg\n", sum);
            }
            else if(sum < 110){
                printf("Mais %d mg\n", (110-sum));
            }
            else{
                printf("Menos %d mg\n", (sum-130));
            }
        }
    }

    return 0;
}
