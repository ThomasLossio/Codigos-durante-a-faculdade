/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 1 de Maio de 2017, 00:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double A, B, C;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\n", ((A * C) / 2));
    printf("CIRCULO: %.3lf\n", (C * C) * 3.14159);
    printf("TRAPEZIO: %.3lf\n", ((C * (A + B)) / 2));
    printf("QUADRADO: %.3lf\n", B * B);
    printf("RETANGULO: %.3lf", A * B);
    printf("\n");
    return (EXIT_SUCCESS);
}

