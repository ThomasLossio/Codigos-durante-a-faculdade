/* 
 * File:   menus.c
 * Author: Geral
 *
 * Created on 19 de Maio de 2014, 18:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int op=0, op1=0, op2=0;
    
    while (op==0){
        printf("MENU PRINCIPAL \n");
        printf("[1]Cadastros [8]Relatorios \n");
        scanf("%d", &op1);
        switch (op1){
            case 1:{
                while (op1==1){
                    printf("CADASTROS\n\n");
                    printf("[1]CLIENTES [2]FORNECEDORES \n");
                    scanf("%d", &op2);
                    switch (op2){
                        case 1:{
                            printf("CLIENTES \n");
                        break;}
                        case 2:{
                            printf("FORNECEDORES \n");
                        break;}
                        default: printf("Opcao Incorreta \n");
                    }
                    printf("CONTINUAR [1] / VOLTAR AO MENU ANTERIOR [0]");
                    scanf("%d", &op1);
                }
            break;}
            
            case 8:{
                while (op==8){
                    printf("RELATORIOS\n\n");
                    printf("[1]VENDAS [2]COMPRAS \n");
                    scanf("%d", &op2);
                    switch (op2){
                        case 1:{
                            printf("VENDAS \n");
                        break;}
                        case 2:{
                            printf("COMPRAS \n");
                        break;}
                        default: printf("Opcao Incorreta \n");
                    }
                    printf("CONTINUAR [1] / VOLTAR AO MENU ANTERIOR [0]");
                    scanf("%d", &op1);
                }                
            break;}
            default: printf("OPCAO INCORRETA\n\n");
        }
        }
        printf("Deseja Continuar? [0] \n");
        scanf("%d", &op);
        return 0;
      }

