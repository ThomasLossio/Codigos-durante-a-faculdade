/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 30 de Abril de 2017, 23:50
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double raio;
    
    
    scanf("%lf", &raio);
    printf("VOLUME = %.3lf", ((4.0/3) * 3.14159 * (raio * raio * raio)));
    printf("\n");
    return (EXIT_SUCCESS);
}

