/* 
 * File:   prog2120914.c
 * Author: Geral
 *
 * Created on 12 de Setembro de 2014, 20:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int flag=1;
int fat(int x){
    if(x==1){
        return 1;
    } else{
        return x*fat(x-1);
    }
}

void imprime(int x){
    if(x>0){     
                imprime(x-1);             
                if (flag==0){
                    printf("%3d- Thomas Jefferson Lossio Alencar\t", x);
                    flag=flag+2;
                } else {
                    if(flag==1){
                printf("%3d- Thomas Jefferson Lossio Alencar\t", x); //64428 max valor 
                 flag=2;
                    } else {
                        printf("%3d- Thomas Jefferson Lossio Alencar\n", x);
                        flag=0;
                    }
                }
  
    }
}

void fibo(int qntd, int a, int b){
    if(qntd > 0){
        printf("%d ", a+b);
        fibo(qntd-1, b, a+b);
    }
}

void nPerfeitos(int qntd, int soma, int corrente){
    if(qntd>0){
        printf("%d ", soma);
        corrente += 2;
        nPerfeitos(qntd-1, soma+corrente, corrente);
    }
}
int main(int argc, char** argv) {
    int x;
    scanf("%d", &x);
    //printf("%d", fat(x));
    //printf("\n");
    imprime(x);
    //printf("\n");
    //fibo(x, 1, 0);
    //printf("\n");
    //nPerfeitos(x, 1, 1);
    printf("\n\n\n\n\n");
    return (EXIT_SUCCESS);
}

