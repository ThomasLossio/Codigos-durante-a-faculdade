/* 
 * File:   imc.c
 * Author: Geral
 *
 * Created on 3 de Setembro de 2014, 19:17
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 20

/*
 * 
 */

double peso[TAM], altura[TAM];
int idade[TAM], i=0;

void cadastro(double pesopessoa, double alturapessoa, int idadepessoa){
    if (i < TAM){
        peso[i] = pesopessoa;
        altura[i] = alturapessoa;
        idade[i] = idadepessoa;
        i++;        
    }
}
double IMC(double pesopessoa, double alturapessoa){
    return alturapessoa > 0?pesopessoa/(alturapessoa * alturapessoa):0;
}
int main(int argc, char** argv) {
    int op;
    double pesopessoa, alturapessoa;
    int idadepessoa;
    do{
        printf("[1]Cadastrar / [2]Listar / [0]Sair\n");
        scanf("%d", &op);
        if (op==1){
            printf("Informe o Peso: ");
            scanf("%lf", &pesopessoa);
            printf("Informe a Altura: ");
            scanf("%lf", &alturapessoa);
            printf("Informe a Idade: ");
            scanf("%lf", &idadepessoa);
            cadastro(pesopessoa, alturapessoa, idadepessoa);
        } else {
            if(op==2){
                printf("[1]Media IMC / [2]Magrelos / [3]Normais / [4]Gordos");
                scanf("%d", &op);
                if 
            }
        }
    }while(op>0);
    return (EXIT_SUCCESS);
}

