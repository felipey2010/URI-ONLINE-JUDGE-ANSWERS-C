#include <stdio.h>
#include <string.h>
main(){
    char animal;
    int i, num, C = 0, R = 0, S = 0;
    double c, r, s, total;

    scanf("%d", &i);
    while(i != 0){
        scanf("%d", &num);
        scanf(" %c", &animal);
        getchar();
        animal = toupper(animal);
        if(animal == 'C'){
            C += num;
        }
        else if(animal == 'R'){
            R += num;
        }
        else if(animal == 'S'){
            S += num;
        }
        i--;
    }
    total = (C+R+S);
    c = ((C / total) * 100.0);
    r = ((R / total) * 100.0);
    s = ((S / total) * 100.0);

    printf("Total: %.0lf cobaias\n", total);
    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", C, R, S);
    printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", c, r, s);

    return 0;
}
