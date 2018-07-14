/* 
 * File:   main.c
 * Author: Marcos Duarte
 *
 * Created on 3 de Setembro de 2014, 18:02
 */

#include <stdio.h>
#include <stdlib.h>

void soma(int x, int y){
    printf("Soma: %d \n", x+y);
}

void exponenciacao(int x, int y, int s){
    while (y>0){
        s=x*s;
        y--;
    }
    printf ("Resultado: %d", s);
}

void fibo(int x, int a, int b){
    if(x>0){
        printf("%d ", a+b);
        fibo(x-1, b, a+b);
    }
}

void fat(int x, int cont, int fat){
    while (cont <= x) {
                fat=fat*cont;
                cont=cont+1;
            }
                printf("O fatorial de %i eh %i \n", x, fat);
}

void primo(int x, int numcorrente, int cont){
    while (numcorrente <= x){
        cont += x % numcorrente == 0? 1:0;
        numcorrente++;
    }
    if (cont <= 2){
        printf("Numero eh primo\n");
    } else{
        printf("Numero não eh primo\n");
    }    
}

int main(int argc, char** argv) {
    int opcao, x, y;
    do{
        printf("\n 1- soma(x,y) 2- exponenciacao 3- fatorial 4- primo 5- fibonacci \n\n");
        scanf("%d", &opcao);
        if(opcao == 1){
            printf("informe x ");
            scanf("%d", &x);
            printf("informe y ");
            scanf("%d", &y);
            soma(x, y);
        }else if(opcao == 2){
            printf("informe x ");
            scanf("%d", &x);
            printf("informe y ");
            scanf("%d", &y);
            exponenciacao(x, y, 1);
        }else if(opcao == 3){
            printf("informe o numero para o fatorial ");
            scanf("%d", &x);
            fat(x, 1, 1);
        }else if(opcao == 4){
            printf("informe o numero para verificar se e primo ");
            scanf("%d", &x);
            primo(x, 1, 0);
        }else if(opcao == 5){
            printf("informe o numero de termos da sequencia  ");
            scanf("%d", &x);
            fibo(x, 1, 0);
        }
    }while(opcao > 0);
    return (EXIT_SUCCESS);
}

