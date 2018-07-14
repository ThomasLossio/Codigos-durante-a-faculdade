/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 13 de Maio de 2017, 17:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float N1, N2, N3, N4, NExame, MEDIA;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    MEDIA = (2 * N1 + 3 * N2 + 4 * N3 + N4) / 10.00;
    printf("Media: %.1f\n", MEDIA);
    if (MEDIA >= 7) printf("Aluno aprovado.\n");
    else if (MEDIA < 5) printf("Aluno reprovado.\n");
    else {
        printf("Aluno em exame.\n");
        scanf("%f", &NExame);
        MEDIA = (MEDIA + NExame)/2;
        printf("Nota do exame: %.1f\n", NExame);
        if (MEDIA >= 5) printf("Aluno aprovado.\n");
        else printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", MEDIA);                
    }
    
    return (EXIT_SUCCESS);
}

