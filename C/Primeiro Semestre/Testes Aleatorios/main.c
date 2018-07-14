/* 
 * File:   main.c
 * Author: Geral
 *
 * Created on 20 de Abril de 2014, 19:18
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int idade;
    printf ("Informe sua idade: ");
    scanf ("%i", &idade);
    if (idade<20){
        if (idade<13){
            printf ("Infantil");
                }else {
                        printf ("Adolescente");
                }
    }else {
                if (idade<50){
                        printf ("Adulto");
                }else {
                    printf ("Idoso");
                } 
    }   
    return (EXIT_SUCCESS);
}

