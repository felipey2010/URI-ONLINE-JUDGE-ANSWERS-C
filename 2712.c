#include <stdio.h>
#include <string.h>

void check(char* v){
    if(strlen(v) < 8 || strlen(v) > 8 || v[3] != '-'||
       v[0] < 65 || v[0] > 90 ||
       v[1] < 65 || v[1] > 90 ||
       v[2] < 65 || v[2] > 90 ||
       v[4] < 48 || v[4] > 57 ||
       v[5] < 48 || v[5] > 57 ||
       v[6] < 48 || v[6] > 57 ||
       v[7] < 48 || v[7] > 57){
        printf("FAILURE\n");
    }
    else{
        if(v[7] == '1' || v[7] == '2')
            printf("MONDAY\n");
        else if(v[7] == '3' || v[7] == '4')
            printf("TUESDAY\n");
        else if(v[7] == '5' || v[7] == '6')
            printf("WEDNESDAY\n");
        else if(v[7] == '7' || v[7] == '8')
            printf("THURSDAY\n");
        else if(v[7] == '9' || v[7] == '0')
            printf("FRIDAY\n");
    }
}

int main(){
    int N, i;
    char plate[10];

    scanf("%d", &N);
    getchar();

    for(i = 0; i < N; i++){
        scanf("%s", plate);
        check(plate);
    }

    return 0;
}
