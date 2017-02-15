#include <stdio.h>
#include <stdlib.h>


int main (){
   int tam, grupos,i, dd, de, dp, k = 0, sum=0;

   scanf("%d %d", &tam, &grupos);
   if(tam <= 1 && grupos <= 1){
        //printf("0\n");
    return 0;
   }
    k = 0, sum = 0;
    int fila[tam];
    int dist[grupos-1];
   fila[0] = 0;
   for(i = 1; i < tam; i++){
      scanf("%d", &fila[i]);
   }

   for(i = 0; i < (tam - 1); i++){
      dp = abs(fila[i]-fila[i+1]);
      de = abs(fila[i-1] - fila[i]);
      dd = abs(fila[i+1] - fila[i+2]);

      if(dp != de && dp != dd){
         if(k+1 < grupos){
            dist[k] = dp ;
            k++ ;
         }
      }

   }

   for (i = 0; i < k; i++){
      sum += dist[i];
   }

   printf("%d\n", sum);

   return 0;
}
