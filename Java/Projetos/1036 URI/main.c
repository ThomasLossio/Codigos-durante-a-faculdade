/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 12 de Maio de 2017, 21:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double A, B, C, delta, X1, X2;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    delta = B*B - 4 * A * C;
    
    if ((delta >= 0) && (A != 0)) {
        X1 = (-B + sqrt(delta))/(2*A);
        X2 = (-B - sqrt(delta))/(2*A);
        printf("R1 = %.5lf\n", X1);
        printf("R2 = %.5lf\n", X2);
    } else printf("Impossivel calcular\n");
    
    return (EXIT_SUCCESS);
}

