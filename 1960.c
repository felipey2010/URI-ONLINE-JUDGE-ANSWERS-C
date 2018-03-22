#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, resto, inteiro, aux;
    char* centenas[] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};//Temp
    char* dezenas[]  = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};//Temp
    char* unidades[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};//Temp

    scanf("%d", &numero);

    inteiro = numero/100;
    resto = numero-(inteiro*100);
    switch(inteiro){
        case 1: printf("%s", centenas[0]); break;
        case 2: printf("%s", centenas[1]); break;
        case 3: printf("%s", centenas[2]); break;
        case 4: printf("%s", centenas[3]); break;
        case 5: printf("%s", centenas[4]); break;
        case 6: printf("%s", centenas[5]); break;
        case 7: printf("%s", centenas[6]); break;
        case 8: printf("%s", centenas[7]); break;
        case 9: printf("%s", centenas[8]); break;
    }
    inteiro = resto/10;
    resto = resto - (inteiro*10);
    switch(inteiro){
        case 1: printf("%s", dezenas[0]); break;
        case 2: printf("%s", dezenas[1]); break;
        case 3: printf("%s", dezenas[2]); break;
        case 4: printf("%s", dezenas[3]); break;
        case 5: printf("%s", dezenas[4]); break;
        case 6: printf("%s", dezenas[5]); break;
        case 7: printf("%s", dezenas[6]); break;
        case 8: printf("%s", dezenas[7]); break;
        case 9: printf("%s", dezenas[8]); break;
    }
    switch(resto){
        case 1: printf("%s", unidades[0]); break;
        case 2: printf("%s", unidades[1]); break;
        case 3: printf("%s", unidades[2]); break;
        case 4: printf("%s", unidades[3]); break;
        case 5: printf("%s", unidades[4]); break;
        case 6: printf("%s", unidades[5]); break;
        case 7: printf("%s", unidades[6]); break;
        case 8: printf("%s", unidades[7]); break;
        case 9: printf("%s", unidades[8]); break;
    }

    printf("\n");
    return 0;
}
