/* 
 * File:   prog2aula2.c
 * Author: Geral
 *
 * Created on 8 de Agosto de 2014, 21:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x=0, y=0, a=0;
        printf("Digite segundo número: ");
        scanf("%d", &x);
        printf("\nDigite terceiro número: ");
        scanf("%d", &y);
        if (x>y){
            a=x;
            x=y;
            y=a;
        }
        while (x<=y){
             if (x%2==0){
                printf("%d \n", x);
             } 
        x++;
        }
     

         
    return (EXIT_SUCCESS);
}

