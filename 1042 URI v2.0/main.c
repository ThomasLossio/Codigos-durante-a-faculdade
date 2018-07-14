/* 
 * File:   main.c
 * Author: thoma
 *
 * Created on 16 de Maio de 2017, 23:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j, valores[3], valoresOrdenados[3], aux;
    
    for(i = 0; i < 3; i++){
        scanf("%d", &valores[i]);
        valoresOrdenados[i] = valores[i];
    }
//    aux = valoresOrdenados[0];

    for (i = 1; i < 3; i++){
        for (j = i-1; j < 3; j++){
            if (valores[i] < valoresOrdenados[j]) {
//                aux = valoresOrdenados[j];
                valoresOrdenados[j] = valores[i];
                valoresOrdenados[i] = valores[j];
            }
        }
    }
    
    for (i = 0; i < 3; i++){
        printf("%d\n", valoresOrdenados[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++){
        printf("%d\n", valores[i]);
    }
    
    return (EXIT_SUCCESS);
}

