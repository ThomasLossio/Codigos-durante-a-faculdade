/* 
 * File:   prog2ponteiros1211.c
 * Author: Geral
 *
 * Created on 12 de Novembro de 2014, 18:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int i;
int cont=0;
int *x;
int tam = 2;
int *a;
void add(int valor){
    if(cont==tam){
        int *a = (int *) malloc(sizeof(int) * cont * 2);        
        for(i=0; i<tam; i++){
            *(a+cont)=*(x+cont);
            printf("valor de x: %d\n", *(x+cont));
            printf("valor de a: %d\n", *(a+cont));
        }
        free(x);
    } else {
        *(x+cont)=valor;
        cont++;
    }
}
int main(int argc, char** argv) {
    x = (int *) malloc(sizeof(int) * tam);
    
    return (EXIT_SUCCESS);
}

