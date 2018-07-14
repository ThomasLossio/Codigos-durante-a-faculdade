/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 29 de Abril de 2017, 20:18
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double A, B, C, MEDIA;
    
    
    scanf("%lf %lf %lf", &A, &B, &C);
    MEDIA = (2 * A + 3 * B + 5 * C) / 10;
    printf("MEDIA = %.1lf", MEDIA);
    printf("\n");
    return (EXIT_SUCCESS);
}

