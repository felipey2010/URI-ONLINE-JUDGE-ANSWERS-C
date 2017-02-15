#include <stdio.h>
#include <string.h>

main(){
    char number[10000];
    int i, num, sum = 0;

    scanf("%d", &num);
    while(num != 0){
        scanf("%s", number);
        sum = 0;
        for(i = strlen(number); i >= 0; i--){
            if(number[i] == '1'){
                sum += 2;
            }
            else if(number[i] == '2' || number[i] == '3' || number[i] == '5'){
                sum += 5;
            }
            else if(number[i] == '4'){
                sum += 4;
            }
            else if(number[i] == '6' || number[i] == '9' || number[i] == '0'){
                sum += 6;
            }
            else if(number[i] == '7'){
                sum += 3;
            }
            else if(number[i] == '8'){
                sum += 7;
            }
        }
        printf("%d leds\n", sum);
        num--;
    }
}
