/*In this problem, the task is to read a code of a product 1, the number of units of product 1,
the price for one unit of product 1, the code of a product 2, the number of units of product 2 and
the price for one unit of product 2. After this, calculate and show the amount to be paid.*/
#include <stdio.h>

int main() {

int code,unit[2],i;

float price[2],total;

for(i=0;i<2;i++){

    scanf("%d %d %f",&code,&unit[i],&price[i]);

}
total=((unit[0]*price[0])+(unit[1]*price[1]));

printf("VALOR A PAGAR: R$ %.2f\n",total);

return 0;

}
