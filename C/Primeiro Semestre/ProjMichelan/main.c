/* 
 * File:   main.c
 * Author: Geral
 *
 * Created on 29 de Abril de 2014, 13:33
 */

#include <stdio.h>
#include <stdlib.h>
#include "../string.h"


/*
 * 
 */
int main() {
    int L1=0, L2=0; //status livro 0=LIVRE / 1=EMPRESTADO
    char nomeL1[80]="O ZERO QUE LEVEI";
    char nomeL2[80]="QUERIDA ENCOLHI MINHA NOTA";
    char novonomeL1[80]="", novonomeL2[80]="";
    int opcao=0, flagPrimeira=0, livro=0, sujeira=0, lista=0, exc=0, alt=0;
    while(1){//TODO O CODIGO
      if(flagPrimeira++==0) {
          printf("============================\n");
          printf("SEJA BEM VINDO AA BIBLIOLAN!\n");
          printf("============================\n");
      }
          printf("===================================\n");
          printf("ESCOLHA [1] EMPRESTRAR [2] DEVOLVER [3] LISTAR LIVROS [4] Excluir [5] Alterar\n");
          printf("===================================\n"); 
          scanf("%d",&opcao);
          switch (opcao){
              case 1: {//EMPRESTIMO
               printf("Escolha um livro:\n");
               printf("[1] %s [%d] \n", nomeL1,L1);
               printf("[2] %s [%d]\n", nomeL2,L2);   
               printf("Qual o livro? :: ");
               scanf("%d", &livro);
               switch (livro){
                   case 1:{
                       if (L1==0){
                          printf("LIVRO EMPRESTADO COM SUCESSO\n");
                          L1=1;
                       }
                       else {
                           printf("LIVRO JA EMPRESTADO\n");
                       } 
                   break;}
                   case 2:{
                       if (L2==0){
                          printf("LIVRO EMPRESTADO COM SUCESSO\n");
                          L2=1;
                       }
                       else {
                           printf("LIVRO JA EMPRESTADO\n");
                       }
                   break;}
                   default: printf("LIVRO NAO EXISTE...");
               }
              scanf("%d",&sujeira) ;
              system("cls");
              break;}  
              case 2: {//DEVOLUCAO
                                 printf("Escolha um livro:\n");
               printf("[1] %s [%d] \n", nomeL1,L1);
               printf("[2] %s [%d]\n", nomeL2,L2);   
               printf("Qual o livro? :: ");
               scanf("%d", &livro);
               switch (livro){
                   case 1:{
                       if (L1==1){
                          printf("LIVRO DEVOLVIDO COM SUCESSO\n");
                          L1=0;
                       }
                       else {
                           printf("LIVRO NAO EMPRESTADO\n");
                       } 
                   break;}
                   case 2:{
                       if (L2==1){
                          printf("LIVRO DEVOLVIDO COM SUCESSO\n");
                          L2=0;
                       }
                       else {
                           printf("LIVRO NAO EMPRESTADO\n");
                       }
                   break;}
                   default: printf("LIVRO NAO EXISTE...");
               }
              scanf("%d",&sujeira) ;
              system("clear");
              break;} 
              case 3:{ //Listagem Livros
                    printf("Escolha Listar [1]Todos [2]Emprestados [3]Livres\n");
                    scanf("%d", &lista);
                    switch (lista){
                        case 1:{
                            printf("1- %s\n 2- %s\n", nomeL1, nomeL2);
                        break;}
                        case 2:{
                            if (L1==1){
                                printf("%s\n", nomeL1);
                            }
                            if (L2==1){
                                printf("%s\n", nomeL2);
                            }
                        break;}
                        case 3: {
                            if (L1==0){
                                printf("%s\n", nomeL1);
                            }
                            if (L2==0){
                                printf("%s\n", nomeL2);
                            }                               
                        break;}
                        default: printf("Opçao Invalida\n");
                    }
                    scanf("%d",&sujeira) ;
                    system("clear");
              break;}
              case 4:{
                  printf("Para Excluir Escolha [1] %s [2] %s", nomeL1, nomeL2);
                  scanf("%d", &exc);
                  switch (exc){
                      case 1:{
                          strcpy(nomeL1,"");
                          printf("Livro Apagado com Sucesso!");
                      break;}
                      case 2:{
                          strcpy(nomeL1, "");
                          printf("Livro Apagado com Sucesso!");
                      break;}
                      default: printf("Opçao Invalida");
                  }
                    scanf("%d",&sujeira) ;
                    system("clear");
              break;}
              case 5: {//Alteraçao Livro
                  printf("Alterar [1] %s ou [2] %s",nomeL1, nomeL2);
                  scanf("%s", &alt);
                  switch (alt){
                      case 1:{
                          printf("Digite Novo Nome");
                          scanf("%s", novonomeL1);
                          strcpy(novonomeL1, nomeL1);
                          printf("Titulo do Livro Alterado com Sucesso!");
                      break;}
                      case 2:{
                          printf("Digite Novo Nome");
                          scanf("%s", novonomeL2);
                          strcpy(novonomeL2, nomeL2);
                          printf("Titulo do Livro Alterado com Sucesso!");                          
                      break;}
                      default: printf("Opçao Invalida");
                  }
                    scanf("%d",&sujeira) ;
                    system("clear");
              break;}
       }
        
    }
    

    
    
    return (EXIT_SUCCESS);
}

    
