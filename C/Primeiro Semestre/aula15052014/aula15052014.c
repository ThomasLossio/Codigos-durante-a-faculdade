/* 
 * File:   aula15052014.c
 * Author: Geral
 *
 * Created on 15 de Maio de 2014, 18:50
 */

#include <stdio.h>
#include <stdlib.h>
#include "../string.h"

#define NUMERO_MEDIC 1000
//MACRO
#define CADASTRAR(nome, end, tel, numCad){\
     if(numCad==1){\
        strcpy(nome1,nome);\
        strcpy(end1,end);\
        strcpy(tel1,tel);\
        printf("Usuario 1 cadastrado\n");\
        printf("Nome:%s", nome1);\
        printf("End:%s", end1);\
        printf("Tel:%s", tel1);\
        }\
    if(numCad==2){\
        strcpy(nome2,nome);\
        strcpy(end2,end);\
        strcpy(tel2,tel);\
        printf("Usuario 2 cadastrado\n");\
        printf("Nome:%s", nome2);\
        printf("End:%s", end2);\
        printf("Tel:%s", tel2);\
        }\
}\
        
/*
 * 
 */
int main() {
    int i=0;
    char nome[50]="", nome1[50]="", nome2[50]="";
    char end[50]="", end1[50]="", end2[50]="";
    char tel[50]="", tel1[50]="", tel2[50]="";
    
    while(1){
        printf("Qual usuário cadastrar?\n");
        scanf("%d", &i);
        printf("Nome:");
        scanf("%s", nome);
        printf("End:");
        scanf("%s", end);
        printf("Tel:");
        scanf("%s", tel);
        CADASTRAR(nome, end, tel, i);
    }
    


    return (EXIT_SUCCESS);
}

