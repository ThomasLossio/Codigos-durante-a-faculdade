/* 
 * File:   main.c
 * Author: ThomasJefferson
 *
 * Created on 30 de Outubro de 2015, 17:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

struct telefone{
    char ddd[2];
    char numero[13];
};

struct caracteristicas{
    char cor_olhos[50];
    float altura;
    float peso;
    struct telefone t;
};

struct cadastro{
    char nome[50];
    int idade;
    char sexo;
    struct caracteristicas c;
};

int main(){ 
int i,j,M[3][3],S=0;
 for (j=0;j<3;j++){
 for (i=0;i<3;i++){
scanf("%d",&M[i][j]);
 }
 }
 for (i=0;i<3;i++){
 printf ("\n");
 for (j=0;j<3;j++){
//if (i>j){
 printf("%d",M[i][j]);
//}
 }
 }
return 0;
}

