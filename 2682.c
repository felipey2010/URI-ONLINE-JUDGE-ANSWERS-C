#include <stdio.h>

int main(){
    long long int n = 0, m = 0, aux = 0;
    int flag = 0;

    while(scanf("%lld", &n) != EOF){
        if(n < m && flag != 1 ){
            aux = m + 1;
            flag = 1;
        }

        m = n;
    }

    if(flag == 1)
        printf("%lld\n", aux);
    else
        printf("%lld\n", (m+1));

    return 0;
}
