#include <stdio.h>

int main() {
 float dinheiro,incremento;

 scanf("%f", &dinheiro);

 if (dinheiro > 0 && dinheiro <= 400.00){
     incremento = ((15 / 100.0) * dinheiro);
     printf("Novo salario: %.2f\n", (incremento + dinheiro));
     printf("Reajuste ganho: %.2f\n",incremento);
     printf("Em percentual: 15 %%\n");
 }
  else if(dinheiro >= 400.01 && dinheiro <= 800.00){
      incremento = ((12 / 100.0) * dinheiro);
      printf("Novo salario: %.2f\n", (incremento + dinheiro));
      printf("Reajuste ganho: %.2f\n", incremento);
      printf("Em percentual: 12 %%\n");
  }
  else if(dinheiro >= 800.01 && dinheiro <= 1200.00){
      incremento = ((10 / 100.0) * dinheiro);
      printf("Novo salario: %.2f\n", (incremento + dinheiro));
      printf("Reajuste ganho: %.2f\n", incremento);
      printf("Em percentual: 10 %%\n");
  }
  else if(dinheiro >= 1200.01 && dinheiro <= 2000.00){
      incremento = ((7/100.0) * dinheiro);
      printf("Novo salario: %.2f\n", (incremento + dinheiro));
      printf("Reajuste ganho: %.2f\n", incremento);
      printf("Em percentual: 7 %%\n");
  }
  else if(dinheiro > 2000.00){
      incremento = ((4/100.0)* dinheiro);
      printf("Novo salario: %.2f\n", (incremento + dinheiro));
      printf("Reajuste ganho: %.2f\n", incremento);
      printf("Em percentual: 4 %%\n");
  }
    return 0;
}
