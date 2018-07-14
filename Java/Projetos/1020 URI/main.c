/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 11 de Maio de 2017, 23:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int N, resto;
    scanf("%d", &N);
    printf("%d ano(s)\n", N/365);
    resto = N%365;
    printf("%d mes(es)\n", resto/30);
    resto = resto%30;
    printf("%d dia(s)\n", resto);
    
    return (EXIT_SUCCESS);
}

