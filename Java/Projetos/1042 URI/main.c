/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 13 de Maio de 2017, 20:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j, valores[3], valoresOrdenados[3], aux, menor;
    int continua;
    for(i = 0; i < 3; i++){
        scanf("%d", &valores[i]);
        valoresOrdenados[i] = valores[i];
    }
    for (i=0; i < 2; i++){
        menor = i;
        continua = 0;

        
        for(j = i + 1; j < 3; j++){
            if(valoresOrdenados[menor] > valoresOrdenados[j]){
                menor = j;

            }
            if(valoresOrdenados[j] < valoresOrdenados[j-1] && continua == 0){
                continua = 1;
            }
        }
        if(!continua){
            
            break;
        }

            if(menor != i){
                aux = valoresOrdenados[i];
                valoresOrdenados[i] = valoresOrdenados[menor];
                valoresOrdenados[menor] = aux;
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

