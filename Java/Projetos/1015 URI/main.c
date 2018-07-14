/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 1 de Maio de 2017, 02:34
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float x1, y1, x2, y2;
    
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    printf("%.4f", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    return (EXIT_SUCCESS);
}

