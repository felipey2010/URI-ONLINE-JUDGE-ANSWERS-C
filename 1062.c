#include <stdio.h>

//int vet[1005];

int main(){
    int i;
    int aux[];
    p->top = 1;
    for(i = 1; i < 4; i++){
        p->a[i] = i;
        if(i !=3){
           p->top++;
        }
    }
    printf("IMPRIMINDO\n");
    for(i = 1; i < 4; i++){
        printf("%d\n", p->a[i]);
    }
	/*int i, curr, n, top;

	while(scanf("%d", &n) && n){
		while(scanf("%d", &vet[0]) && vet[0]){
			for(i = 1; i < n; i++){
                scanf("%d", &vet[i]);
			}

			Num p;
			curr = 0;

			for(i = 1; i<= n; i++){
				p = i;

				while(sizeof(p) > 0 && vet[curr] == p.top()){
					curr++;
					p.pop();
				}
			}
            if(sizeof(p) == 0){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
		}

		printf("\n");
	}*/

	return 0;
}
