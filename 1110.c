#include <stdio.h>
#include <stdlib.h>

typedef struct Fila {
    int valor;
    struct Fila * prox;
} Fila;

Fila * insere(Fila * inicio, int valor) {
    Fila * aux = (Fila * )malloc(sizeof(Fila));
    aux->valor = valor;
    if(inicio == NULL) { //Fila vazia
        aux->prox = inicio;
        inicio = aux;
    } else {
        Fila * aux2;
        aux2 = inicio;
        while(aux2->prox != NULL) { //Procura ultimo elemento da fila
            aux2 = aux2->prox;
        }
        aux2->prox = aux;
        aux->prox = NULL;
    }
    return inicio;
}

Fila * deleta(Fila * inicio, int *v) {
    Fila * aux;
    aux = inicio;
    *v = (int) aux;
    mostraFila(aux);
    inicio = inicio->prox;
    free(aux);
    return inicio;
}

void mostraFila(Fila * inicio) {
    Fila * aux;
    aux = inicio;
    while(aux != NULL) {
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
    printf("\n");
}
int main(){
    int i, n;
    while(scanf("%d", &n) && n != 0){
        Fila * ini; // Register cards
        ini = NULL;
        Fila * dis; //For discarded cards
        dis = NULL;
        for(i = 1; i <= n; i++){
            ini = insere(ini, i);
        }
        //mostraFila(ini);
        int j = n;
        int cont = 1;
        while(j != 1){
            if(cont == 1){
                int val;
                ini = deleta(ini, &val);
                dis = insere(dis, val);
                cont++;
            }
            else{
                int vall;
                ini = deleta(ini, &vall);
                ini = insere(ini, vall);
                cont = 1;
            }
            j--;
        }
        /*printf("Discarded cards: \n");
        mostraFila(dis);
        printf("\nRemaining cards: \n");
        mostraFila(ini);*/
        free(ini);
        free(dis);
    }
    /*
    ini = insere(ini, 2);
    mostraFila(ini);
    ini = deleta(ini);
    ini = deleta(ini);
    mostraFila(ini);
    ini = deleta(ini);
    ini = deleta(ini);
    ini = insere(ini, 5);
    mostraFila(ini);
    */
    return 0;
}
