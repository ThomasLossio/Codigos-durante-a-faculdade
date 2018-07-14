/* 
 * File:   strings.c
 * Author: Geral
 *
 * Created on 5 de Maio de 2014, 18:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    char nome[10]="MICHELAN\0";
    
    printf("Digite sua senha:");
    scanf("%s", nome);
    
    //COMPARACAO LOGIN
    
    if (strcmp(nome,"gato")==0){
        printf("Senha Correta");
    }
    else{
        printf("Senha errada");
    }

    return (EXIT_SUCCESS);
}

