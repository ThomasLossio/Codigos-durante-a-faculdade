/* 
 * File:   main.c
 * Author: thoma
 *
 * Created on 17 de Maio de 2017, 00:40
 */

#include <stdio.h>
//#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int A, B;
    scanf("%d %d", &A, &B);
    if (B % A == 0) printf("Sao Multiplos");
    else if (A % B == 0) printf("Sao Multiplos");
    else printf("Nao sao Multiplos");
    printf("\n");
    return 0;
}

