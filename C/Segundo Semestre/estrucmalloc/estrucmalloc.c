/* 
 * File:   estrucmalloc.c
 * Author: Geral
 *
 * Created on 30 de Outubro de 2014, 19:00
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double * p3;
    
    p3=(double *)malloc(3*sizeof(double));
    
    p3[0]=0.2;
    p3[1]=0.5;
    p3[2]=0.8;
    
    printf("\nAgora p3[0] eh %f e ", p3[0]);
    printf("\np3[1] eh %f.", p3[1]);
    printf("\np3[2] eh %f.\n", p3[2]);
    
    free(p3);
    getchar();
    return (EXIT_SUCCESS);
}

