/*Write a program to read the coordinates (X, Y) of an indeterminate number of points in Cartesian system.
For each point write the quadrant to which it belongs.
The program finish when at least one of two coordinates is NULL (in this situation without writing any message).*/
#include <stdio.h>
int main(){

    int x;
    int y;

     while(x!=0 && y!=0){
               scanf("%d", &x);
               scanf("%d", &y);

               if(x == 0 || y == 0)
                break;

               if(y > 0 && x > 0)
               printf("primeiro\n");
               if(y > 0 && x < 0)
               printf("segundo\n");
               if(y < 0 && x < 0)
               printf("terceiro\n");
               if(y < 0 && x > 0)
               printf("quarto\n");

    }


    return 0;
}
