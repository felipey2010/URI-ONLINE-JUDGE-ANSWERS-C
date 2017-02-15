/*Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour.
Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.*/
#include <stdio.h>
main(){
    int number, hours;
    float salary, salaryfinal;

    scanf("%d %d", &number, &hours);
    scanf("%f", &salary);
    salaryfinal = salary * hours;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salaryfinal);

    return 0;
}
