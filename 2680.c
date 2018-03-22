#include <stdio.h>

int main(){
    int test, i, j;

    scanf("%d", &test);

    int M[test];

    //take values from user
    for(i = 0; i < test; i++){
        scanf("%d", &M[i]);
        int s=0;
        for (j=1; (j*j)<=M[i]; j++){
            if(M[i]%j==0){
                if(M[i]/j==j){
                    s=s+j; }
                else{
                    s=s+j+M[i]/j;
                }
            }
        }
        M[i]=s;
    }

    //print the results of the sum
    for(i=0; i < test; i++){
        printf("%d\n",M[i]);
    }

    return 0;
}
