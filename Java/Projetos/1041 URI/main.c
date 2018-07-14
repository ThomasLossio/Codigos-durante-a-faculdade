/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 13 de Maio de 2017, 18:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float x, y;
    scanf("%f %f", &x, &y);
    if (x == 0 && y == 0) printf("Origem\n");
    else if (x == 0 && y!=0) printf("Eixo Y\n");
    else if (y == 0 && x!=0) printf("Eixo X\n");
    else if (x > 0 && y > 0) printf("Q1\n");
    else if (x < 0 && y > 0) printf("Q2\n");
    else if (x < 0 && y < 0) printf("Q3\n");
    else if (x > 0 && y < 0) printf("Q4\n");
    
    return (EXIT_SUCCESS);
}

