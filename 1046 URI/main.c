/* 
 * File:   main.c
 * Author: thoma
 *
 * Created on 17 de Maio de 2017, 23:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horInicio, horFinal, calculo;
    scanf("%d %d", &horInicio, &horFinal);
    if (horFinal == 0) calculo = 24;
    else if (horInicio < horFinal) calculo = horFinal;
    else calculo = 2 * 12 + horFinal;
    
    printf("O JOGO DUROU %d HORA(S)\n", calculo - horInicio);
    return (EXIT_SUCCESS);
}

