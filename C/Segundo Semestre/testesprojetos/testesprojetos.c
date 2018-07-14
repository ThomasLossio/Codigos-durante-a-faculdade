#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Cria_B printf("Cadastro efetuado com sucesso!\n");
#define Deposito_B printf("Depósito efetuado com sucesso!\n");
#define Saque_B printf("Saque efetuado com sucesso!\n");
#define Transferir_B printf("Transferência efetuada com sucesso!\n");
#define Enter printf("Press ENTER...");

typedef struct Conta {
    char nome[50];
    char CPF[20];
    float saldo;
    struct Conta * prx;
} conta;

conta * c = NULL;

conta * Cria_Conta(char nome[], char CPF[], float saldo) {
    conta * aux = (conta *) malloc(sizeof (conta));
    (*aux).prx = NULL;
    strcpy((*aux).nome, nome);
    strcpy((*aux).CPF, CPF);
    (*aux).saldo = saldo;

    return aux;
}

void Add_Conta(conta * tmp, char nome[], char CPF[], float saldo) {
    if (c == NULL) {
        c = Cria_Conta(nome, CPF, saldo);

        return;
    } else {
        while ((*tmp).prx != NULL) tmp = (*tmp).prx;

        (*tmp).prx = Cria_Conta(nome, CPF, saldo);

        return;
    }
}

conta * Buscar(conta * tmp, char CPF[]) {
    while (strcmp((*tmp).CPF, CPF)) tmp = (*tmp).prx;

    return tmp;
}

void Depositar(char CPF[], float valor) {
    (*(Buscar(c, CPF))).saldo += valor;
}

void Sacar(char CPF[], float valor) {
    (*(Buscar(c, CPF))).saldo -= valor;
}

void Transferir(char CPF[], char CPF2[], float valor) {
    Sacar(CPF, valor);
    Depositar(CPF2, valor);
}

void Listar(conta * tmp) {
    int id = 0;
    while (tmp != NULL) {
        printf("\tID: %d - Nome: %s\n", ++id, (*tmp).nome);
        tmp = (*tmp).prx;
    }
}

int main() {
    int op_menu = 1;
    char Nome_C[50], CPF_C[20], CPF2_C[20];
    float Saldo_I, Valor;

    printf("================================================\n");
    printf("|| - - - - - Bem-Vindo ao Banco N&N - - - - - ||\n");
    printf("================================================\n");
    printf("Press ENTER para continuar...\n");
    scanf("1");

    while (op_menu != 0) {
        system("clear");
        printf("\n[1]Criar Conta | [2]Depositar | [3]Sacar\n");
        printf("[4]Transferir  | [5]Listar    | [6]Buscar | [0]Sair\n");
        printf("Digite uma Opção: ");
        scanf("%i", &op_menu);

        switch (op_menu) {
            case 0: op_menu = 0;
                break;
            case 1:
            {
                system("clear");
                printf("OBS: Valor Mínimo para abrir uma conta é R$ 50.00\n\n");
                printf("Digite o nome do cliente: ");
                getchar();
                gets(Nome_C);
                printf("Digite o CPF do cliente: ");
                gets(CPF_C);
                do {
                    printf("Digite o deposito inicial: ");
                    scanf("%f", &Saldo_I);
                } while (Saldo_I <= 50);
                Add_Conta(c, Nome_C, CPF_C, Saldo_I);
                Cria_B;
                Enter;
                getchar();
                scanf("1");
                break;
            }
            case 2:
            {
                system("clear");
                printf("Digite o CPF do cliente: ");
                getchar();
                gets(CPF_C);
                printf("Digite o valor do depósito: ");
                scanf("%f", &Valor);
                Depositar(CPF_C, Valor);
                Deposito_B;
                Enter;
                getchar();
                scanf("1");
                break;
            }
            case 3:
            {
                system("clear");
                printf("Digite o CPF do cliente: ");
                getchar();
                gets(CPF_C);
                printf("Digite o valor do saque: ");
                scanf("%f", &Valor);
                if ((*(Buscar(c, CPF_C))).saldo >= Valor) {
                    Sacar(CPF_C, Valor);
                    Saque_B;
                } else printf("Saldo Indisponivel!\n");
                Enter;
                getchar();
                scanf("1");
                break;
            }
            case 4:
            {
                system("clear");
                printf("Digite o CPF do Cliente que será debitado: ");
                getchar();
                gets(CPF_C);
                printf("Digite o CPF do cliente que será creditado: ");
                gets(CPF2_C);
                printf("Digite o valor da transferência: ");
                scanf("%f", &Valor);
                if ((*(Buscar(c, CPF_C))).saldo >= Valor) {
                    Transferir(CPF_C, CPF2_C, Valor);
                    Transferir_B;
                } else printf("Saldo Indisponivel!\n");
                Enter;
                getchar();
                scanf("1");
                break;
            }
            case 5:
            {
                system("clear");
                Listar(c);
                Enter;
                getchar();
                scanf("1");
                break;
            }
            case 6:
            {
                system("clear");
                printf("Digite o CPF do cliente: ");
                getchar();
                gets(CPF_C);
                printf("========================================================\n");
                printf("\tNome: %s\n", (Buscar(c, CPF_C)->nome));
                printf("\tCPF: %s\n", (Buscar(c, CPF_C)->CPF));
                printf("\tSaldo: %.2f\n", (Buscar(c, CPF_C)->saldo));
                printf("========================================================");
                Enter;
                getchar();
                scanf("1");
                break;
            }
            default:
            {
                system("clear");
                printf("Opcão Digitada está INCORRETA!!\n");
                Enter;
                getchar();
                scanf("1");
                break;
            }
        }
    }

    return 0;
}

