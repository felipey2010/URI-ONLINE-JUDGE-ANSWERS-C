/*The formula to calculate the area of a circumference is defined as A = π . R2.
Considering to this problem that π = 3.14159:
Calculate the area using the formula given in the problem description.*/
#include <stdio.h>
main(){
    double r, pi=3.14159;

    scanf("%lf",&r);


    printf("A=%.4lf\n",pi*r*r);

    return 0;
}
