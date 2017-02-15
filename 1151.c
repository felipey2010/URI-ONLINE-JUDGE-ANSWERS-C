/*The following sequence of numbers 0 1 1 2 3 5 8 13 21 ... is known as the Fibonacci Sequence.
Thereafter, each number after the first 2 is equal to the sum of the previous two numbers.
Write an algorithm that reads an integer N (N < 46) and that print the first N numbers of this sequence.
*/
#include <stdio.h>
int main(){
    int n, i;
    int fib[46];

    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    printf("%d %d", fib[0], fib[1]);

    for(i = 2; i < n; i++){
            fib[i] = fib[i-1] + fib[i-2];
            if(i == (n-1))
                 printf(" %d", fib[i]);
            else
                printf(" %d", fib[i]);
    }

    printf("\n");
    return 0;
}
