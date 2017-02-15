/*Make a program that reads five integer values. Count how many of these values are even, odd, positive and negative.
Print these information like following example.
*/
#include <stdio.h>

int main(){
    int a,b,c,d,e, f;
    int par = 0;
    int impar = 0;
    int pos = 0;
    int neg = 0;

    scanf("%d", &a);

    if(a%2 == 0){
            par++;
            }
    else{
            impar++;
        }
    if(a > 0){
            pos++;
        }
    else if(a < 0){
        neg++;
        }
   scanf("%d", &b);
    if(b%2 == 0){
            par++;
        }
    else{
            impar++;
        }
    if(b > 0){
            pos++;
        }
    else if(b < 0){
            neg++;
        }
    scanf("%d", &c);
    if(c%2 == 0){
            par++;
        }
    else{
        impar++;
        }
    if(c > 0){
            pos++;
        }
    else if(c < 0){
        neg++;
        }
    scanf("%d", &d);
    if(d%2 == 0){
        par++;
        }
    else{
            impar++;
        }
    if(d > 0){
            pos++;
        }
    else if(d < 0){
            neg++;
        }
    scanf("%d", &e);
    if(e%2 == 0){
            par++;
        }
    else{impar++;
        }
    if(e > 0){
            pos++;
        }
    else if(e < 0){
            neg++;
    }
    scanf("%d", &f);

    if(f%2 == 0){
            par++;
            }
    else{
            impar++;
        }
    if(f > 0){
            pos++;
        }
    else if(f < 0){
        neg++;
        }

    printf("%d valores positivos\n", pos);

    return 0;
}
