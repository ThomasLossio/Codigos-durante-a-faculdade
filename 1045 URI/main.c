/* 
 * File:   main.c
 * Author: thoma
 *
 * Created on 17 de Maio de 2017, 00:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double A, B, C, aux;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    if (A < B) {
        aux = A;
        A = B;
        B = aux;
    }
    if (A < C){
        aux = A;
        A = C;
        C = aux;
    }
    if (B < C) {
        aux = B;
        B = C;
        C = aux;
    }        
    if (A >= B + C) printf("NAO FORMA TRIANGULO\n");
    else {
        if (A*A == (B*B + C*C)) printf("TRIANGULO RETANGULO\n");
        if (A*A > B*B + C*C) printf("TRIANGULO OBTUSANGULO\n");
        if (A*A < B*B + C*C) printf("TRIANGULO ACUTANGULO\n");
        if (A == B && A == C) printf("TRIANGULO EQUILATERO\n");
        if ((A == B && A != C) || (B == C && B != A) || (A == C && A != B)) printf("TRIANGULO ISOSCELES\n");
    }    
    return (EXIT_SUCCESS);
}

