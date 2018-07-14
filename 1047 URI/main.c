/* 
 * File:   main.c
 * Author: thoma
 *
 * Created on 17 de Maio de 2017, 23:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horInicio, minInicio, horFinal, minFinal, minTotal, minHInicio, minHFinal;
    scanf("%d %d %d %d", &horInicio, &minInicio, &horFinal, &minFinal);
    
    if (horInicio >= horFinal && minInicio >= minFinal) horInicio = horInicio - 24;
    minHInicio = minInicio + horInicio * 60;
    minHFinal = minFinal + horFinal * 60;
        
    minTotal = minHFinal - minHInicio;
    
    
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", minTotal/60, minTotal%60);
    return (EXIT_SUCCESS);
}

