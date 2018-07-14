/* 
 * File:   estruclistas.c
 * Author: Geral
 *
 * Created on 13 de Outubro de 2014, 18:45
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int i;
/*
 * 
 */

typedef struct{
    int chave;
    char info[50];
} elem;

typedef struct{
    int nelem;
    elem A[MAX];
} Lista;

void Inicializar(Lista *L){
    L->nelem=0;
}

int Tamanho(Lista *L){
    return MAX;
}

int fim(Lista *L){
    return L->nelem;
}

int Lista_vazia(Lista *L){
    if(L->nelem==0){
        return 1;
    } else {
        return 0;
    }
}

int Lista_cheia(Lista *L){
    if(L->nelem==MAX){
        return 1;
    } else {
        return 0;
    }
}

int Inserir(char nome[50], Lista *L){
    if(Lista_cheia(L)==1){
        return 0;
    } else {
        strcpy(L->A[L->nelem].info,nome);
        L->nelem++;
        return 1;
    }
}


int Buscar(char nome[50], Lista *L){
        for(i=0; i<L->nelem; i++){
            if(strcmp(nome,L->A[i].info)==0){
                return i;
            }
        }
        return -1;

}

int Remover(Lista *L){
    if(Lista_vazia(L)==1){
        return -1;
    } else {
            strcpy(L->A[L->nelem].info,"");
        L->nelem--;
    }
}

int main(void) {
    Lista lista;
    char nome[50];
    int op=0;
    do{
        system("clear");
        printf("=====================================================================\n");
        printf("[1]Inicializar\t\t\t\t[2]Inserir\n[3]Buscar\t\t\t\t[4]Remover\n[5]Verificar Tamanho\t\t\t[6]Lista Vazia\n[7]Lista Cheia\t\t\t\t[8]Listagem\n");
        printf("=====================================================================\n");
        scanf("%d", &op);
        switch(op){
            case 1:{
                Inicializar(&lista);
            break;}
            case 2:{              
                printf("Digite um nome: ");
                getchar();
                gets(nome);
                printf("\nNome Inserido: %s\n\n", nome);
                if(Inserir(nome, &lista)==0){
                    printf("\nNão foi possível cadastrar!\n\n");
                } else {
                    printf("\nNome Inserido: %s\n\n", nome);
                }
            break;}
            case 3:{
                printf("Digite um nome para busca: ");
                getchar();
                gets(nome);
                if(Buscar(nome, &lista)==-1){
                    printf("Pessoa Não Encontrada!\n\n");
                } else {
                    printf("Pessoa Encontrada!\n\n");
                }
            break;}
            case 4:{
                if(Remover(&lista)==-1){
                    printf("Nome não encontrado!\n\n");
                } else {
                    printf("Nome removido com sucesso!\n\n");
                }
            break;}
            case 5:{
                printf("Tamanho da Lista: %d\n\n", fim(&lista));
            break;}
            case 6:{
                if(Lista_vazia(&lista)==1){
                    printf("A lista está Vazia!\n\n");
                } else {
                    printf("Não está Vazia!\n\n");
                }
            break;}
            case 7:{
                if(Lista_cheia(&lista)==1){
                    printf("A lista está Cheia!\n\n");
                } else {
                    printf("Não está Cheia!\n\n");
                }                
            break;}
            case 8:{
                for(i=0; i<lista.nelem; i++){
                    printf("%d- %s\n", i+1, lista.A[i].info);
                }
            break;}
        }
        printf("\nDeseja Mais Alguma Coisa? [1]Sim/[0]Não\n");
        scanf("%d", &op);
    } while(op>0);
    return (EXIT_SUCCESS);
}

