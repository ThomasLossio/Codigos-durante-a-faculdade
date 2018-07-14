/* 
 * File:   estrutura21082014.c
 * Author: Geral
 *
 * Created on 21 de Agosto de 2014, 18:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
/*    int vetor[10], i;
    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for(i=0; i<10; i++){
    printf("Numero: %d \n", vetor[i]);
    }
*/
/*    int maior;
    int vetor[10];
    int i;
    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    maior=vetor[0];
    for(i=1; i<10; i++){
        if (vetor[i]>maior){
            maior=vetor[i];
        }
    }
    printf("\n Maior eh: %d \n", maior);
 */
 /*   int aux, maior, ultimo, i;
    int vetor[5];
    for(i=0; i<5; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    ultimo=vetor[4];
    maior=vetor[0];
    for(i=1; i<5; i++){
        if (vetor[i]>maior){
            maior=vetor[i];
        }
    }
    printf("\nAntes da troca: \n");  
    printf("\n Tal numero: %d \n", maior);
    printf("\n Outro numero: %d\n", ultimo);    
    aux=maior;
    maior=ultimo;
    ultimo=aux;
    printf("\n Depois da troca: \n");
    printf("\n Tal numero: %d\n", maior);
    printf("\n Outro numero: %d\n", ultimo);
*/
    int j=0, i;
    int vetor[5];
    for(i=0; i<5; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if (vetor[i]%2!=0){
            vetor[j]=vetor[i];
            j++;
        }
    }
    for(j=0; i<j; j++){
        printf("Nova sequencia: %d", vetor[j]);
    }

    return (EXIT_SUCCESS);
}

