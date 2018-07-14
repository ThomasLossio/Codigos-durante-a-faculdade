/* 
 * File:   main.c
 * Author: ThomasJefferson
 *
 * Created on 20 de Fevereiro de 2016, 00:24
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */

void numeroEncontrado(int n){
    char teste[100], ref[2], ref2[2];
    int i, j, cont=0, auxint;
    itoa(n, teste, 10);
    for(i = 0; teste[i]!='\0'; i++){
        ref[0] = teste[i];
        for(j = 0; teste[j] != '\0'; j++){
            if(j!=i){
                if((strcmp(ref[0], teste[j])==0) && cont==2){
                    auxint = atoi(ref[0]);
                    if(auxint == 9){
                        auxint--;
                    } else {
                        auxint++;
                    }
                    itoa(auxint, ref2[0], 10);
                    teste[j] = ref2[0];
                } else {
                    cont++;
                }
            }
        }
        cont = 0;
    }
}

int main(int argc, char** argv) {
    numeroEncontrado(12);
    return (EXIT_SUCCESS);
}

