/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 1 de Maio de 2017, 01:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    
    int A, B, C, maior = 0;
    
    scanf("%d %d %d", &A, &B, &C);
    
    if (A > maior){
        maior = A;
    }
    if (B > maior){
        maior = B;
    }
    if (C > maior){
        maior = C;
    }
    
    printf("%d eh o maior", maior);
    printf("\n");
    return (EXIT_SUCCESS);
}

