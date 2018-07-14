/* 
 * File:   estrucpontstruct.c
 * Author: Geral
 *
 * Created on 30 de Outubro de 2014, 19:43
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int idade;
    int peso;
}pessoa;
/*
 * 
 */
int main(int argc, char** argv) {
    pessoa *p;
    p=(pessoa *)malloc(sizeof(pessoa));
    p->idade=10;
    p->peso=90;
    printf("%d", p->idade);
    printf("\n%d", p->peso);
    
    getchar();

    return (EXIT_SUCCESS);
}

