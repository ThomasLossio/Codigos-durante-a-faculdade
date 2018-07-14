/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 12 de Maio de 2017, 21:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int A, B, C, D;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if ((B > C) && (D > A) && (C+D > A+B) && (C > 0) && (D > 0) && (A%2 == 0)) printf("Valores aceitos");
    else printf("Valores nao aceitos");
    printf("\n");
    return (EXIT_SUCCESS);
}

