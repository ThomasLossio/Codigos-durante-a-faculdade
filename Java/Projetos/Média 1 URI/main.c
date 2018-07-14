/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 29 de Abril de 2017, 19:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double A, B, MEDIA;
    
    
    scanf("%lf %lf", &A, &B);
    MEDIA = (3.5 * A + 7.5 * B) / 11;
    printf("MEDIA = %.5lf", MEDIA);
    printf("\n");
    return (EXIT_SUCCESS);
}

