/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 29 de Abril de 2017, 20:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    int numFunc, horasTrab;
    double valPorHora;
    scanf("%d %d %lf", &numFunc, &horasTrab, &valPorHora);
    printf("NUMBER = %d\n", numFunc);
    printf("SALARY = U$ %.2lf", horasTrab * valPorHora);
    printf("\n");
    
    return (EXIT_SUCCESS);
}

