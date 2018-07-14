/* 
 * File:   Estrut25082014.c
 * Author: Geral
 *
 * Created on 25 de Agosto de 2014, 18:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
/*    int vetor[10], i = 0, media = 0;
    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        media += vetor[i];
    }
    media = media / 10;
    for (i = 0; i < 10; i++) {
        printf("\nDiferenca: %d \n", media - vetor[i]);
    }
 */
  /*  int v1[10], v2[10], i=0, soma;
    v1[0]=2;
    v2[0]=10;
    for (i=1; i<10; i++){
        v1[i]=v1[i-1]+2;
    }
    for (i=1; i<10; i++){
        v2[i]=v2[i-1]+1;
    }
    for (i=0; i<10; i++){
        soma=v1[i]+v2[i];
        printf("\nSoma eh: %d\n", soma);
    }
   */
    int vetor[8], i=0, maior, soma;
    for (i=0; i<8; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        soma=soma+vetor[i];        
    }
    for (i=0; i<8; i++){
        if  (vetor[i] > 30){
            maior=maior+1;
        } else{
            maior=maior+0;
        }
    }
    printf("Maiores que 30: %d \n", maior);
    printf("Soma: %d \n", soma);
    return (EXIT_SUCCESS);
}

