#include <stdio.h>

main(){
    float N1, N2, N3, N4, N5;
    float media, mediafinal;

    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    N1 = N1 * 2;
    N2 = N2 * 3;
    N3 = N3 * 4;

    media = ((N1 + N2 + N3 + N4) / 10);

    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(media >=5.0 && media <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &N5);
        printf("Nota do exame: %.1f\n", N5);
        mediafinal = ((media + N5)/2);
        if(mediafinal >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", mediafinal);
    }
    else{
        printf("Aluno reprovado.\n");
    }

return 0;
}
