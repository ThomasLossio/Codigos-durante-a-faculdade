/* 
 * File:   progpont2.c
 * Author: Geral
 *
 * Created on 31 de Outubro de 2014, 21:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
typedef struct{
    int dia;
    int mes;
    int ano;
}data;
int main(int argc, char** argv) {
    data *novoArray = (data *)malloc(sizeof(data)*5);
    int i;
    for (i=0; i<5; i++){
        scanf("%d", &(*(novoArray + i)).dia);
        scanf("%d", &(*(novoArray + i)).mes);
        scanf("%d", &(*(novoArray + i)).ano);
    }
    for (i=0; i<5; i++){
        printf("%d\n", (*(novoArray +i)).dia);
        printf("%d\n", (*(novoArray +i)).mes);
        printf("%d\n", (*(novoArray +i)).ano);
    }
    return (EXIT_SUCCESS);
}

