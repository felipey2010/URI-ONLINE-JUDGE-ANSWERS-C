#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main(){
    float a, b , c, r1 = 0, r2 = 0, delta;
    int alert = 0;

    scanf("%f %f %f", &a, &b, &c);

    delta = ((b*b) - (4.0 * a* c));
    if(delta > 0 && a != 0){
        alert = 1;

        r1 = (((-b) + sqrt(delta)) / (2*a));
        r2 = (((-b) - sqrt(delta)) / (2*a));
    }

    if(alert == 1){
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
