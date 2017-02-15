#include <stdio.h>

main(){
    int age, cont = 0;
    float media = 0;
    do{
        scanf("%d", &age);
        if(!(age < 0)){
            cont++;
            media += age;
        }
    }while(!(age < 0));

    printf("%.2f\n", (media / cont));
    return 0;
}
