/* 
 * File:   estruc09102014.c
 * Author: Geral
 *
 * Created on 9 de Outubro de 2014, 18:27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>


struct end{
    char rua[50];
    char bairro[50];
    char cidade[50];
    char estado[50];
    char cep[9];
};

struct cadastro{
    char nome[50];
    struct end endereco;
    float salario;
    char identidade[50];
    char cpf[50];
    char estciv[50];
    char telefone[50];
    int idade;
    char sexo[50];
};

int main(int argc, char** argv) {
    int l=0, sal=0;
    char nomereceber[5][50];
    struct cadastro p1[5];
    
    for(l=0; l<5; l++){
        printf("\nNome: ");
        gets(p1[l].nome);
        printf("Rua: ");
        gets(p1[l].endereco.rua);
        printf("Bairro: ");
        gets(p1[l].endereco.bairro);
        printf("Cidade: ");
        gets(p1[l].endereco.cidade);
        printf("Estado: ");
        gets(p1[l].endereco.estado);
        printf("Cep: ");
        gets(p1[l].endereco.cep);
        printf("Salário: ");
        scanf("%f", &p1[l].salario);
        printf("Identidade: ");
        getchar();
        gets(p1[l].identidade);
        printf("Cpf: ");
        gets(p1[l].cpf);
        printf("Estado Civil: ");
        gets(p1[l].estciv);
        printf("Telefone: ");
        gets(p1[l].telefone);
        printf("Idade: ");
        scanf("%d", &p1[l].idade);
        printf("Sexo: ");
        getchar();
        gets(p1[l].sexo);
        system("clear");
    }
    
    for(l=0; l<5; l++){
        printf("\n\nListagem %d", l+1);
        printf("\nNome: %s", p1[l].nome);
        printf("\nEndereço:\nRua: %s\tBairro: %s\tCidade/Estado: %s/%s\t\tCep: %s", p1[l].endereco.rua, p1[l].endereco.bairro, p1[l].endereco.cidade, p1[l].endereco.estado, p1[l].endereco.cep);
        printf("\nSalário: %.2f", p1[l].salario);
        printf("\nIdentidade: %s\tCpf: %s", p1[l].identidade, p1[l].cpf);
        printf("\nEstado Civil: %s", p1[l].estciv);
        printf("\nTelefone: %s", p1[l].telefone);
        printf("\nIdade: %d", p1[l].idade);
        printf("\nSexo: %s\n", p1[l].sexo);
    }
    
    for(l=0; l<5; l++){
        if(p1[l].salario > 1000.00 && strcmp(p1[l].endereco.estado, "CE")==0){
            sal++;
            strcpy(nomereceber[l],p1[l].nome);
        } else {
            strcpy(nomereceber[l],"");
        }
    }
    
    printf("Quantidade de pessoas e nomes das pessoas com salario > 1000 e Vivendo no Estado CE:\n");
    printf("Quantidade: %d", sal);
    printf("Nomes: \n");
    for(l=0; l<5; l++){
        if(strlen(nomereceber[l])!=0){
            printf("%s", nomereceber[l]);
        }
    }
    return (EXIT_SUCCESS);
}

