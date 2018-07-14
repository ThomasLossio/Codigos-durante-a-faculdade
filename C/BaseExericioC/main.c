/* 
 * File:   main.c
 * Author: ThomasJefferson
 *
 * Created on 14 de Fevereiro de 2016, 19:00
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */

int contador = 0;

struct end{
    char rua[50];
    char bairro[50];
    int numero;
    char complemento[50];
    char cidade[50];
    char estado[50];
};

struct cadastro{
    char nome[50];
    char sobrenome[50];
    struct end endereco;
    char fone1[15];
    char fone2[50];
};

struct cadastro c1[100];

int inserir(){
        if(contador <= 100){
            printf("Digite o nome da pessoa: ");
            getchar();
            gets(c1[contador].nome);

            printf("Digite o sobrenome da pessoa: ");
            gets(c1[contador].sobrenome);

            printf("Digite a rua da residência da pessoa: ");
            gets(c1[contador].endereco.rua);

            printf("Digite o bairro da residência da pessoa: ");
            gets(c1[contador].endereco.bairro);

            printf("Digite o numero da residência da pessoa: ");
            scanf("%d", &c1[contador].endereco.numero);

            printf("Digite o complemento da residência da pessoa: ");
            getchar();
            gets(c1[contador].endereco.complemento);

            printf("Digite a cidade da residência da pessoa: ");
            gets(c1[contador].endereco.cidade);

            printf("Digite o estado da residência da pessoa: ");
            gets(c1[contador].endereco.estado);

            printf("Digite o telefone 1 da pessoa: ");
            gets(c1[contador].fone1);

            printf("Digite o telefone 2 da pessoa: ");
            gets(c1[contador].fone2);
            
            contador++;
            return 1;
        } else {
            return 0;
        }    
}

void listarCompleto(){
    int i=0;
    for(i = 0; i<contador; i++){
        printf("Nome: %s\n", c1[i].nome);
        printf("Sobrenome: %s\n", c1[i].sobrenome);
        printf("Endereço: Rua %s\nBairro: %s\nNúmero: %i\nComplemento: %s\nCidade: %s\nEstado: %s\n", c1[i].endereco.rua, c1[i].endereco.bairro, c1[i].endereco.numero, c1[i].endereco.complemento, c1[i].endereco.cidade, c1[i].endereco.estado);
        printf("Fone 1: %s\n", c1[i].fone1);
        printf("Fone 2: %s\n", c1[i].fone2);
        
        printf("\n\n");
    }
}

void listarResumido(){
    int i=0;
    for(i = 0; i<contador; i++){
        printf("Nome: %s\n", c1[i].nome);
        printf("Fone 1: %s\n", c1[i].fone1);
        printf("Fone 2: %s\n", c1[i].fone2);
        
        printf("\n\n");
    }
}

int buscar(char nome[50]){
    int i=0;
    for(i = 0; i<contador; i++){
        if(strcmp(nome, c1[i].nome) == 0){
            printf("Nome: %s\n", c1[i].nome);
            printf("Sobrenome: %s\n", c1[i].sobrenome);
            printf("Endereço: Rua %s\nBairro: %s\nNúmero: %i\nComplemento: %s\nCidade: %s\nEstado: %s\n", c1[i].endereco.rua, c1[i].endereco.bairro, c1[i].endereco.numero, c1[i].endereco.complemento, c1[i].endereco.cidade, c1[i].endereco.estado);
            printf("Fone 1: %s\n", c1[i].fone1);
            printf("Fone 2: %s\n", c1[i].fone2);

            printf("\n\n");
            return i;
        }
    }
    return -1;
}

int editar(char nome[50]){
    int busca = 0;
    busca = buscar(nome);
    if(busca == -1){
        return -1;
    } else {
        printf("Digite o novo nome: ");
        gets(c1[busca].nome);
        return 1;
    }
    
}

//int remover(char nome[50]){
//    int busca = 0;
//    busca = buscar(nome);
//    if(busca == -1){
//        return -1;
//    } else {
//        struct cadastro *tmp;
//        tmp = c1;
//        free();
//        c1=tmp;
//        return 1;
//    }    
//}

int main(int argc, char** argv) {
    int opmenu = 0;
    char pesqnome[50];
    do{
        printf("\n------------------------------------------\n");
        printf("|[1] - Inserir                           |\n"
                "|[2] - Editar                            |\n"
                "|[3] - Remover                           |\n"
                "|[4] - Buscar                            |\n"
                "|[5] - Listagem                          |\n"
                "|[0] - Sair                              |\n");
        printf("------------------------------------------\n");
        scanf("%d", &opmenu);
        switch(opmenu){
            case 1:{ //Inserir
                if(inserir() == 1){
                    printf("Inserido com Sucesso!\n");
                } else {
                    printf("Agenda lotada!\nCompre a versão premium para cadastros ilimitados!\nMaiores informações no nosso site!\n");
                }
                
            break;}
            case 2:{ //editar
                printf("Digite o nome para buscar: ");
                getchar();
                gets(pesqnome);
                if(editar(pesqnome) == -1){
                    printf("Não encontrado!\n");
                }
            break;}
            case 3:{ //remover
//                printf("Digite o nome para buscar: ");
//                getchar();
//                gets(pesqnome);
//                remover(pesqnome);
            break;}
            case 4:{ //buscar
                
                printf("Pesquisar nome: ");
                getchar();
                gets(pesqnome);
                if(buscar(pesqnome) == -1){
                    printf("Nome não encontrado!\n");
                }
            break;}
            case 5:{ //listar
                printf("\n------------------------------------------\n");
                printf("|[1] - Completa           [2] - Resumida |\n");
                printf("------------------------------------------\n");
                scanf("%d", &opmenu);
                if(opmenu == 1){
                    listarCompleto();
                    printf("\n");
                } else if(opmenu == 2){
                    listarResumido();
                    printf("\n");
                } else {
                    printf("Opção Inválida!\n");
                }
            break;}
            case 0:{ //sair
                printf("Até Mais!");
            break;}
            default: printf("Opção Inválida!");
        }
    }while(opmenu != 0);
    return (EXIT_SUCCESS);
}

