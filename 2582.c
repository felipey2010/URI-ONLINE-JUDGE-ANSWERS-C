#include <stdio.h>

/*
0 - PROXYCITY
1 - P.Y.N.G.
2 - DNSUEY!
3 - SERVERS
4 - HOST!
5 - CRIPTONIZE
6 - OFFLINE DAY
7 - SALT
8 - ANSWER!
9 - RAR?
10 - WIFI ANTENNAS
*/

int main(){
    int i, j, k, aux;

    char *music[12];
    music[0] = "PROXYCITY";
    music[1] = "P.Y.N.G.";
    music[2] = "DNSUEY!";
    music[3] = "SERVERS";
    music[4] = "HOST!";
    music[5] = "CRIPTONIZE";
    music[6] = "OFFLINE DAY";
    music[7] = "SALT";
    music[8] = "ANSWER!";
    music[9] = "RAR?";
    music[10] = "WIFI ANTENNAS";

    scanf("%d", &aux);

    while(aux > 0){
        scanf("%d %d", &j, &k);
        if(j >=0 && j <=5 && k >= 0 && k <= 5)
            printf("%s\n", music[j+k]);

        aux--;
    }

    return 0;
}
