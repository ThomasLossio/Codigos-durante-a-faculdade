/* 
 * File:   aula23052014.c
 * Author: Geral
 *
 * Created on 23 de Maio de 2014, 20:40
 */

#include <stdio.h>
#include <stdlib.h>

/* Simula Banco
 * Criar conta
 * Realizar Deposito
 * Realizar Saque
 * Listar Saldo
 */

int main(){
    char conta[8]="123456", nome[50], senha[7], entrada[8], entrada2;
    float dep=0.0, saldo=0.0, saque=0.0;
    int menu=0, nov=1, menu2=0, flagprimeira=0, nov2=1, flagseg=0;
    nome[0]='\0';
    while (nov==1){
        printf("Escolha [1]Criar Conta [2]Deposito/Saque/Saldo [0]Sair\n");
        scanf("%d", &menu);
        switch (menu){
            case 1:{
                printf("Nome do Proprietario da conta: ");
                scanf("%*c%[A-Z a-z]s", nome);
                printf("Senha(Limite 6 número): ");
                scanf("%*c%[0-9]s", senha);
                printf("Conta de %s Criada com Sucesso, o numero da conta sera: %s", nome, conta);
            break;}
            case 2:{
                while (nov2==1){
                if (flagseg++==0){
                    printf("Digite o numero da conta: ");
                    scanf("%*c%[0-9]", entrada);
                    printf("Digite a senha: ");
                    scanf("%*c%[0-9]s", entrada2);
                        if ((strcmp(conta,entrada)==0) && (strcmp(senha,entrada2)==0)){
                                if (flagprimeira++==0){
                                  printf("Bem Vindo %s", nome);
                                }
                        }

                            printf("Escolha a Opçao desejada [1]Deposito [2]Saque [3]Saldo [0]Menu Anterior");
                            scanf("%d", &menu2);
                            switch (menu2) {
                                case 1:{
                                    printf("Digite a Quantia de Deposito: ");
                                    scanf("%f", &dep);
                                    if (dep>0.0){
                                        saldo=saldo+dep;
                                        printf("Deposito Efetuado com Sucesso!\n");
                                        printf("Novo Saldo: %.2f", saldo);
                                    } else{
                                        printf("Deposito Não Efetuado, a quantia precisa ser maior do que 0!");
                                    }
                                break;}
                                case 2:{
                                    if (saldo>0){
                                        printf("Digite a Quantia de Saque: ");
                                        scanf("%f", &saque);
                                        if (saldo=saldo-saque<=0){
                                            printf("Saldo Insuficiente para o saque ser efetuado\n");
                                            printf("Você possui apenas %.2f", saldo);
                                        } else {
                                            saldo=saldo-saque;
                                            printf("Saque Efetuado com Sucesso!\n");
                                            printf("Novo Saldo: %.2f", saldo);
                                        }
                                    } else {
                                        printf("Você Não Possui Saldo Para Efetuar o Saque.\n");
                                    }
                                break;}
                                case 3:{
                                    printf("Seu saldo atual eh: %.2f", &saldo);
                                break;}
                                default: printf("Opçao Invalida");
                            }
                } else{
                    printf("Conta e/ou Senha Invalida, tente novamente.\n");
                }
                printf("[1]Continuar [0]Voltar ao Menu Anterior");
                scanf("%d", &nov2);
                }
            break;}
            case 0:{
                printf("Saída Efetuada!\n");
                nov=0;
            break;}
            default: printf("Opçao Invalida\n");
        }
        if (nov==1){
            printf("Deseja Novamente? [1]Continuar [0]Sair\n");
            scanf("%d", &nov);
        } 
        

    }
    return 0;
}

