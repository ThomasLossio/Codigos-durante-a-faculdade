/* 
 * File:   estrucponteiros.c
 * Author: Geral
 *
 * Created on 30 de Outubro de 2014, 18:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int *pi;
    double *pd;
    
    pi=(int *)malloc(sizeof(int));
    if(pi == NULL){
        printf("Erro!! Não foi possível alocar memória!!\n");
        return 0;
    }
    *pi = 1001;
    
    printf("int ");
    printf("valor = %d: posição = %d\n", *pi, pi);
    
    pd=(double *)malloc(sizeof(double));
    if(pd == NULL){
        printf("Erro!! Não foi possível alocar memória!!\n");
        return 0;
    }
    *pd = 10000001.0;
    
    printf("\n\ndouble ");
    printf("valor = %f: posição = %d\n", *pd, pd);
    printf("\n\ntamanho de pi = %d", sizeof pi);
    printf(": tamanho de *pi = %d\n", sizeof *pi);
    printf("\n\ntamanho de pd = %d", sizeof pd);
    printf(": tamanho de *pd = %d\n", sizeof *pd);
    
    free(pi);
    free(pd);
    
    return (EXIT_SUCCESS);
}

