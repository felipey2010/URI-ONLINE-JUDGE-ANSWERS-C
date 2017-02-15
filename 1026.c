#include <stdio.h>

long long a, b;

void process(){
   long long tma, tmb, binary = 1, mofiz = 0;

   while (a!=0||b!=0){
      tma = a % 2;
      a = a / 2;

      tmb = b % 2;
      b = b / 2;

      if (tma+tmb==1) mofiz = mofiz + (tma+tmb)*binary;

      binary= binary*2;
    }

   printf("%d\n",mofiz);
}

main(){
    while(scanf("%d %d",&a,&b)){
       process();
    }
}
