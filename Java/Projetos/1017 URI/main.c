/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 1 de Maio de 2017, 03:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int t, v;
    
    scanf("%d %d", &t, &v);
    printf("%.3f", (t * v / 12.0));
    printf("\n");
    return (EXIT_SUCCESS);
}

