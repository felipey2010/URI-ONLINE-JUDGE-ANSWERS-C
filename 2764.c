#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    char date[9];

    scanf("%s", date);

    //print formatted
    printf("%c%c/%c%c/%c%c\n",date[3], date[4],date[0], date[1],date[6], date[7]);
    printf("%c%c/%c%c/%c%c\n",date[6], date[7],date[3], date[4],date[0], date[1]);
    printf("%c%c-%c%c-%c%c\n",date[0], date[1],date[3], date[4],date[6], date[7]);

    return 0;
}
