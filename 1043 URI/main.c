/* 
 * File:   main.c
 * Author: thoma
 *
 * Created on 17 de Maio de 2017, 00:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float A, B, C;
    int triangulo = 0;
    
    scanf("%f %f %f", &A, &B, &C);
    if (abs(B - C) < A && A < B + C) triangulo = 1;
    if (abs(A - C) < B && B < A + C) triangulo = 1;
    if (abs(A - B) < C && C < A + B) triangulo = 1;
    
    if (triangulo) printf("Perimetro = %.1f", A+B+C);
    else printf("Area = %.1f", (C * (A + B)) / 2);
    printf("\n");
    return 0;
}

