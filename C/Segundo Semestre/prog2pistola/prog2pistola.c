/* 
 * File:   prog2pistola.c
 * Author: Geral
 *
 * Created on 24 de Outubro de 2014, 21:07
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 15

typedef struct{
    int balas;
}Pistola;

int recarrega(Pistola *A){
    if(A->balas<MAX){
        A->balas=MAX;
        return 1;
    } else {
        return 0;
    }
}

int atira(Pistola *A){
    if(A->balas>0){
        A->balas--;
        return 1;
    } else {
        return 0;
    }
}

/*
 * 
 */
int main() {
    Pistola P;
    int op=0;
    P.balas=MAX;
    do{
        printf("[1]Atirar [2]Recarregar\n");
        scanf("%d", &op);
        switch(op){
            case 1: {//atira
                if(atira(&P)==1){
                    printf("Pow!\n\a");
                    printf("%d/%d\n\n", P.balas, 15);
                } else {
                    printf("Reload!\n\n");
                }
            break;}
            case 2:{
                if(recarrega(&P)==1){
                    printf("Arma Recarregada!\n\n");
                } else { 
                    printf("Pente Cheio!\n\n");
                }
            break;}
            case 0:{
                printf("\n\nSaiu!\n\n");
            break;}
            default: printf("Opção Inválida\n\n");
        }
    }while(op>0);
    return (EXIT_SUCCESS);
}

