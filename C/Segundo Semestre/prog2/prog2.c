/* 
 * File:   prog2.c
 * Author: Geral
 *
 * Created on 8 de Agosto de 2014, 20:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int x=0, y=0, a=0, ele=0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);
    while (a!=y){
        ele=x*x;
        a++;
    }
    printf("Total = %d \n", ele);
    return (EXIT_SUCCESS);
}

