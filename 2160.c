#include <stdio.h>
#include <string.h>

main(){
    char word[501];

    gets(word);
    if(strlen(word) < 81){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
