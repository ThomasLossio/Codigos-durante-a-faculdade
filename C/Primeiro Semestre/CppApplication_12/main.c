/* 
 * File:   main.c
 * Author: Geral
 *
 * Created on 1 de Maio de 2014, 16:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int cont=1, fat=1, num=0, nov=1;
    while (nov==1){
        num=0;
        printf("Digite qual o número você quer usar o fatorial: \n");
        scanf("%i", &num);
        while (cont <= num) {
            fat=fat*cont;
            cont=cont+1;
        }
            printf("O fatorial de %i eh %i\n", num, fat);
            printf("Deseja novamente?");
            scanf("%i", &nov);
    }


    return (EXIT_SUCCESS);
}

