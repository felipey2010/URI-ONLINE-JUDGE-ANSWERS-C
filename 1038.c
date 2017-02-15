#include <stdio.h>

main(){
    int x, y;
    float preco;

    scanf("%d %d", &x, &y);

    switch(x){
        case 1:
            preco = y * 4.00;
            printf("Total: R$ %.2f\n", preco);
            break;
        case 2:
            preco = y * 4.50;
            printf("Total: R$ %.2f\n", preco);
            break;
        case 3:
            preco = y * 5.00;
            printf("Total: R$ %.2f\n", preco);
            break;
        case 4:
            preco = y * 2.00;
            printf("Total: R$ %.2f\n", preco);
            break;
        case 5:
            preco = y * 1.50;
            printf("Total: R$ %.2f\n", preco);
            break;
        }
}
