/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 11 de Maio de 2017, 23:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int N, resto;
    scanf("%d", &N);
    
    printf("%d:", N/3600);
    resto = N%3600;
    printf("%d:", resto/60);
    resto = resto%60;
    printf("%d", resto);
    printf("\n");

    return (EXIT_SUCCESS);
}

