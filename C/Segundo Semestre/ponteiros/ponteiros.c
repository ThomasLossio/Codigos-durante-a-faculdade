/* 
 * File:   ponteiros.c
 * Author: Geral
 *
 * Created on 25 de Outubro de 2014, 15:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main() {
    int *ap = (int *) malloc(sizeof(int));
    printf("%d\n", *ap);
            
   return (EXIT_SUCCESS);
}


/*int main(int argc, char** argv) {
    int x=10;
    int *ap = &x;
    printf("Endereço de X: %p ----> Endereço de AP: %p\n", &x, &ap);
    printf("Valor de ap ----> %p\n", ap);
    *ap=11;
    printf("%d\n", x);
    x=10;
    printf("%d\n", *ap);
            
            
   return (EXIT_SUCCESS);
}

*/