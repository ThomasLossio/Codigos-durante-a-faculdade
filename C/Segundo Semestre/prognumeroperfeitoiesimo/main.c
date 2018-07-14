/* 
 * File:   main.c
 * Author: Geral
 *
 * Created on 15 de Agosto de 2014, 21:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x=0, s=1;
    do{
        printf("Digite um numero positivo não neutro: ");
        scanf("%d", &x);
    } while (x <= 0);
    while (x>0){
        x=x-s;
        s=s+2;
    }
    if (x==0){
        printf("Numero perfeito!\n");
    } else {
        printf("Nao eh um numero perfeito!\n");
    }
    return (EXIT_SUCCESS);
}

