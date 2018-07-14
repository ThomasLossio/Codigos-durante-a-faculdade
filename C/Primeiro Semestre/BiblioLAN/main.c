/* 
 * File:   main.c
 * Author: michelan
 *
 * Created on April 28, 2014, 6:56 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int L1=0, L2=0; //status livro 0=LIVRE / 1=EMPRESTADO
    char nomeL1[80]="O ZERO QUE LEVEI";
    char nomeL2[80]="QUERIDA ENCOLHI MINHA NOTA";
    int opcao=0, flagPrimeira=0, livro=0, sujeira=0;
    while(1){//TODO O CODIGO
      if(flagPrimeira++==0) {
          printf("============================\n");
          printf("SEJA BEM VINDO AA BIBLIOLAN!\n");
          printf("============================\n");
      }
          printf("===================================\n");
          printf("ESCOLHA [1] EMPRESTRAR [2] DEVOLVER\n");
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
              system("clear");
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
              
          }
          
        
        
    }
    

    
    
    return (EXIT_SUCCESS);
}

