#include <stdio.h>

main(){
    int hour, speed, distance;
    double litres;

    scanf("%d %d", &hour, &speed);

    distance = (speed * hour);
    litres = (distance / 12.0);

    printf("%.3lf\n", litres);

    return 0;
}
