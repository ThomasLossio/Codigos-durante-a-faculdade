/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 29 de Abril de 2017, 20:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    printf("DIFERENCA = %d", A * B - C * D);
    printf("\n");
    
    return (EXIT_SUCCESS);
}

