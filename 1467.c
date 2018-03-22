#include <stdio.h>

int main(){
    int A, B, C;
    while((scanf("%d %d %d", &A, &B, &C)) != EOF){
        if(A == B && B == C){
            printf("*\n");
        }
        else if(A == B && B != C){
            printf("C\n");
        }
        else if(B == C && C != A){
            printf("A\n");
        }
        else{
            printf("B\n");
        }
    }
    return 0;
}
