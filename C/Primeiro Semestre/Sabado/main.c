/* 
 * File:   main.c
 * Author: Geral
 *
 * Created on 26 de Abril de 2014, 08:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int contador=1, n=0;
    int n1=1, n2=1, n3=1;
    printf("Qual o número de termos?\n");
    scanf ("%i", &n);
    while (contador <= n) {
        n3 = n1 + n2;
        n1=n2;
        n2=n3;
        if (n3 % 2 == 0) {
            printf ("%i , ", n3);
            
        }
        contador++;
    }

    return (EXIT_SUCCESS);
}

