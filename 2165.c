#include <stdio.h>
#include <string.h>

main(){
    char word[501];

    gets(word);
    if(strlen(word) < 141){
        printf("TWEET\n");
    }
    else{
        printf("MUTE\n");
    }
    return 0;
}
