/* 
 * File:   ProjetoII.c
 * Author: Geral
 *
 * Created on 3 de Dezembro de 2014, 22:04
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, k;

typedef struct{
	char nome[100];
	char cpf[15];
	float saldo;
}cliente;

int busca(char cpfb[15], cliente *c, int contador){
	for(i=0; i<=contador; i++){
		if(strcmp(cpfb,c[i].cpf)==0){
			return i;
		}
	}
	return -1;
}

int busca2(char cpfb[15], cliente *c, int contador){
	for(k=0; k<=contador; k++){
		if(strcmp(cpfb,c[k].cpf)==0){
			return k;
		}
	}
	return -1;
}

void titulo(){
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("||||||||||||||||||||||||||       BEC         ||||||||||||||||||||||||||||||||||\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
}

int main(){
	cliente *conta;
	int n=1, opcao=0, cont=0, op2=0;
	char nomeprop[100], cpfprop[15], cpfrec[15], cpftrans[15];
	float saldoinicial=0.0, valor=0.0;
	conta = (cliente *)malloc(sizeof(cliente)*n);
	do{
            system("clear");
            titulo();
            printf("===============================================================================\n");
            printf("||  [1]Criar Conta                                                           ||\n"
                    "||  [2]Depósito                                                              ||\n"
                    "||  [3]Saque                                                                 ||\n"
                    "||  [4]Transferência                                                         ||\n"
                    "||  [5]Consulta Saldo                                                        ||\n"
                    "||  [0]Sair                                                                  ||\n");
            printf("===============================================================================\n\n");
            scanf("%d", &opcao);
            system("clear");
            switch(opcao){
                case 0: {
                    printf("Saída Efetuada!\n");
                break;}
                case 1:{ //Criar Conta
                    do{
                        titulo();
                        printf("\n");
                        if(cont==n){
                            conta = (cliente *)realloc(conta, sizeof(cliente)*(n*2));
                            if(conta==NULL){
                                printf("Não há espaço suficiente na memoria");
                                break;
                            }
                            n=n*2;
                        }
                        printf("Digite o Nome do proprietário da conta: ");
                        getchar();
                        gets(nomeprop);
                        printf("\nDigite o CPF do proprietário: ");
                        gets(cpfprop);
                        printf("\nDigite o Saldo Inicial da Conta(Valor Mínimo: R$100.00): ");
                        scanf("%f", &saldoinicial);
                        while(saldoinicial<100.00){
                            printf("\nO Saldo Inicial precisa ser maior ou igual a R$100.00, por favor digite novamente o valor: ");
                            scanf("%f", &saldoinicial);
                        }
                        printf("\nConta Criada Com Sucesso!");
                        strcpy(conta[cont].nome,nomeprop);
                        strcpy(conta[cont].cpf,cpfprop);
                        conta[cont].saldo = saldoinicial;
                        cont++;                        
                        printf("\n\nDigite [0] para voltar ao menu anterior: ");
                        scanf("%d", &op2);
                    }while(op2>0);
                break;}
                case 2:{ //Depósito
                    do{
                        system("clear");
                        titulo();
                        printf("\n");
                        printf("Digite o CPF da conta que você quer depositar: ");
                        getchar();
                        gets(cpfrec);
                        system("clear");
                        titulo();
                        printf("\n");
                        if(busca(cpfrec, conta, cont)==-1){
                            printf("\nCPF não encontrado!");
                        } else {
                            printf("\nDados Da Conta do CPF %s: ", conta[i].cpf);
                            printf("\n=======================================");
                            printf("\nProprietário da Conta: %s", conta[i].nome);
                            printf("\nSaldo Atual: %.2f", conta[i].saldo);
                            printf("\n=======================================");  
                            printf("\n\nDigite o valor de depósito(Valor Mínimo: R$50.00): ");
                            scanf("%f", &valor);
                            while(valor<50.00){
                                printf("\nO Depósito precisa ser maior ou igual a R$50.00, por favor digite novamente o valor: ");
                                scanf("%f", &valor);
                            }
                            conta[i].saldo = conta[i].saldo + valor;
                            printf("\nDepósito realizado com sucesso!");
                            printf("\nSeu Novo Saldo: %.2f", conta[i].saldo);
                        }
                        printf("\n\nDigite [0] para voltar ao menu anterior: ");
                        scanf("%d", &op2);
                    }while(op2>0);
                break;}
                case 3:{ //Saque
                    do{
                        titulo();
                        printf("Digite o CPF da conta que você quer fazer o Saque: ");
                        getchar();
                        gets(cpfrec);
                        system("clear");
                        titulo();
                        printf("\n");
                        if(busca(cpfrec, conta, cont)==-1){
                            printf("\nCPF não encontrado!");
                        } else {
                            printf("Dados Da Conta do CPF %s: ", conta[i].cpf);
                            printf("\n=======================================");
                            printf("\nProprietário da Conta: %s", conta[i].nome);
                            printf("\nSaldo Atual: %.2f", conta[i].saldo);
                            printf("\n=======================================");                       
                            printf("\n\nDigite o valor do saque: ");
                            scanf("%f", &valor);
                            if(conta[i].saldo<valor){
                                printf("\nSaldo Insuficiente para Concluir o Saque!");
                            } else {
                                conta[i].saldo = conta[i].saldo - valor;
                                printf("\nSaque realizado com sucesso!\nAguarde as notas sairem!\n");
                                printf("Seu Novo Saldo: %.2f", conta[i].saldo);
                            }
                        }
                        printf("\n\nDigite [0] para voltar ao menu anterior: ");
                        scanf("%d", &op2);                        
                    }while(op2>0);
                break;}
                case 4:{ //Transferência
                    do{
                        titulo();
                        printf("\n");
                        printf("Digite o CPF da conta que será retirado o dinheiro: ");
                        getchar();
                        gets(cpfrec);
                        system("clear");
                        titulo();
                        printf("\n");
                        if(busca(cpfrec, conta, cont)==-1){
                            printf("\nCPF não encontrado!");
                        } else {
                            printf("Dados Da Conta do CPF %s: ", conta[i].cpf);
                            printf("\n=======================================");
                            printf("\nProprietário da Conta: %s", conta[i].nome);
                            printf("\nSaldo Atual: %.2f", conta[i].saldo);
                            printf("\n=======================================");  
                            printf("\n\nDigite o CPF da conta que receberá o dinheiro: ");
                            gets(cpftrans);
                            if(busca2(cpftrans, conta, cont)==-1){
                                printf("\nCPF não encontrado!");
                            } else { 
                                printf("\nDigite o Valor a ser transferido: ");
                                scanf("%f", &valor);
                            }
                            conta[i].saldo = conta[i].saldo - valor;
                            conta[k].saldo = conta[k].saldo + valor;
                            printf("\nTransferência Concluída com Sucesso!");
                            printf("\n\nSeu Novo Saldo: %.2f", conta[i].saldo);
                        }
                        printf("\n\nDigite [0] para voltar ao menu anterior: ");
                        scanf("%d", &op2);
                    }while(op2>0);
                break;}
                case 5:{ //consulta
                    do{
                        titulo();
                        printf("\n");
                        printf("Digite o CPF da Conta que irá consultar o saldo: ");
                        getchar();
                        gets(cpfrec);
                        system("clear");
                        titulo();
                        printf("\n");
                        if(busca(cpfrec, conta, cont)==-1){
                            printf("\nCPF não encontrado!");
                        } else {
                            printf("Dados Da Conta do CPF %s: ", conta[i].cpf);
                            printf("\n===================================");
                            printf("\nProprietário da Conta: %s", conta[i].nome);
                            printf("\nSaldo Atual: %.2f", conta[i].saldo);
                            printf("\n===================================");
                        }
                        printf("\n\nDigite [0] para voltar ao menu anterior: ");
                        scanf("%d", &op2);                        
                    }while(op2>0);
                break;}
                default: printf("\nOpção Inválida");
            }
            if(op2!=0 && opcao!=0){
                printf("\nDeseja Mais Alguma Coisa? [0]Não/[1]Sim\n");
                scanf("%d", &opcao);
            } else {
                op2=1;
            }
	}while(opcao>0);
	free(conta);
        return 0;
}