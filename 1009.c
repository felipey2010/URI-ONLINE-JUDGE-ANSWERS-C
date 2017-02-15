/*Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month
(in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller
at the end of the month , with two decimal places.*/
#include <stdio.h>
main(){
    float salary, salesmade;
    char name[20];

    gets(name);
    scanf("%f %f", &salary, &salesmade);

    printf("TOTAL = R$ %.2f\n", (salary+(0.15 * salesmade)));

    return 0;
}
