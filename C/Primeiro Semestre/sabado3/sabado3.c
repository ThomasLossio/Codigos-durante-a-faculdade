/* 
 * File:   sabado3.c
 * Author: Geral
 *
 * Created on 26 de Abril de 2014, 10:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int EPOCA;
    printf("Digite o trimestre do ano em que estamos: ");
    scanf("%i", &EPOCA);
    switch (EPOCA) {
        case 1: printf("Verao\n");
        break;
        case 2: printf("Outono\n");
        break;
        case 3: printf("Inverno\n");
        break;
        case 4: printf("Primavera\n");
        break;
        default: printf("Periodo Invalido\n");
    }
    return (EXIT_SUCCESS);
}

