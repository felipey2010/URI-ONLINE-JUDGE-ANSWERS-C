/*Read an integer N. This N will be the number of integer numbers X that will be read.
Print how many these numbers X are in the interval [10,20] and how many values are out of this interval.
*/
#include <stdio.h>
int main(){
    int x, a, i;

    int in = 0;
    int out = 0;

    scanf("%d", &x);
    for (i = 0; i < x; i++){
            scanf("%d", &a);
            if(a >= 10 && a <= 20)
                in++;
            else out++;
    }
    printf(" %d\n", in);
    printf(" %d\n", out);

    return 0;
}
