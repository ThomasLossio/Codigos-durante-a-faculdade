/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 1 de Maio de 2017, 02:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int dist;
    double combustivel;
    
    scanf("%d %lf", &dist, &combustivel);
    printf("%.3lf km/l", (dist / combustivel));
    printf("\n");
    return (EXIT_SUCCESS);
}

