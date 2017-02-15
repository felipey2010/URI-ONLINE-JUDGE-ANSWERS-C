/*Read two integer values X and Y. Print the sum of all odd values between them.
*/
#include <stdio.h>

int main() {

    int x, y;

    scanf("%d %d", &x, &y);

    if (x > y)
        {//Mudando o valor de X para ser menor
           x = x + y;
           y = x - y;
           x = x - y;

        }

    int cont, soma = 0;

    for (cont = x + 1; cont < y; cont++)
        if (cont % 2 != 0)
            soma += cont;

    printf("%d\n", soma);

    return 0;

}
