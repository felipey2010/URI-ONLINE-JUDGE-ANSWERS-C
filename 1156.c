#include <stdio.h>

main(){
    double i, sum = 0, num = 1.0;

    for(i = 1.0; i <= 39.0; i+= 2.0){
        sum += (i /num);
        num += num;
    }
    printf("%.2f\n", sum);

    return 0;
}
