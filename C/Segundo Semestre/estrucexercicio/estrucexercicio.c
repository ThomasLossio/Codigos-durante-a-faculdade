/* 
 * File:   estrucexercicio.c
 * Author: Geral
 *
 * Created on 30 de Outubro de 2014, 19:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double * p3;
    int i, *v, maior;
    
    
    p3=(double *)malloc(3*sizeof(double));
    
    p3[0]=0.2;
    p3[1]=0.5;
    p3[2]=0.8;
    
    v = (int *)malloc(10*sizeof(int));
    
    for (i=0; i<10; i++){
        v[i]=i+1;
    }
    maior = v[0];
    
    for(i=1; i<10; i++){
        if(v[i]>maior){
            maior = v[i];
        }
    }
    printf("Maior: %d", maior);
    free(p3);
    getchar();
    
    return (EXIT_SUCCESS);
}

