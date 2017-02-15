#include <stdio.h>

main(){
    int k;
    float i=0.2, j = 1.0;

    for(i= 0.0; i <= 2.0;){
        j=1;
        for(k = 1; k <= 3; k++){
            printf("I=%.0f J=%.0f\n",i, j);
            j++;
            }
            j=1.2;
            i+=0.2;
        for(k = 1; k <= 3; k++){
            printf("I=%.1f J=%.1f\n",i, j);
            j+=1.0;
            }
            j = 1.2;
        }
    return 0;
}
