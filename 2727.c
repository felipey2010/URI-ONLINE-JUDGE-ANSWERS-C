#include <stdio.h>
#include <string.h>

void checkDots(char* str, int* n){
    int i=0;

    while(str[i] != '\0' && str[i] != ' '){
        i++;
    }
    *n = i;
}
void checkSpace(char* str, int* n){
    int i = 0, count=0;
    while(str[i] != '\0'){
        if(str[i] == ' ')
            count++;
        i++;
    }
    *n = count;
}

int main(){
    char dots[50];
    int n, n_dots=0, n_space=0, result= 0;

    while(scanf("%d", &n) != EOF){
        int alphabets[50], count = 0;
        while(n > 0){
            getchar();
            scanf("%[^\n]s", dots);
            checkDots(dots, &n_dots);

            checkSpace(dots, &n_space);

            result = 97 + ((3*n_space) + (n_dots-1));
            alphabets[count] = result;
            count++;
            n--;
        }
        int i = 0;
        while(i != count){
            printf("%c\n", alphabets[i]);
            i++;
        }
    }
    return 0;
}
