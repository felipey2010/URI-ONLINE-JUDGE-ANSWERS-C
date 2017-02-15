#include <stdio.h>

main(){
    float a, b, c, av;
    int i, j, k;
    scanf("%d", &k);

    for(i = 1; i <= k; i++){
        scanf("%f %f %f", &a, &b, &c);
        av = (((a * 2) + (b * 3) + (c * 5)) / 10.0);
        printf("%.1f\n", av);
    }
return 0;
}
