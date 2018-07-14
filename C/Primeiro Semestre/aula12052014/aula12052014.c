/* 
 * File:   main.c
 * Author: Geral
 *
 * Created on 12 de Maio de 2014, 18:54
 */

#include <stdio.h>
#include <stdlib.h>
#include "../string.h"

/*
 * 
 */
int main() {
char nome[51];
char senha[31];
int tamNome=0, inicio=0, i=0;
senha[0]='\0';
nome[0]='\0';
printf("Digite o nome: ");
scanf("%s", nome);
tamNome=(strlen(nome));
printf("%d", tamNome);

for(i=inicio;i<=tamNome;i++){
	printf(" %c", nome[tamNome-i]);
}

printf("\n\nFinalizou...\n");

    
    
    return (EXIT_SUCCESS);
}

