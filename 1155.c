#include <stdio.h>

main(){
    double i, sum = 0.0;
    for(i = 1.0; i <= 100.0; i++){
        sum += (1 / i);
    }
    printf("%.2f\n", sum);

    return 0;
}
