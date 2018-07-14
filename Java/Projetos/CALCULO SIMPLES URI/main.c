/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 30 de Abril de 2017, 23:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int codP1, qntdP1, codP2, qntdP2;
    double vlrP1, vlrP2;
    
    scanf("%d %d %lf", &codP1, &qntdP1, &vlrP1);
    scanf("%d %d %lf", &codP2, &qntdP2, &vlrP2);
    
    printf("VALOR A PAGAR: R$ %.2lf", qntdP1 * vlrP1 + qntdP2 * vlrP2);
    
    return (EXIT_SUCCESS);
}

