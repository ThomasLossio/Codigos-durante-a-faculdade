/* 
 * File:   estruc06102014.c
 * Author: Geral
 *
 * Created on 6 de Outubro de 2014, 18:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
struct pessoa{
    float salario;
    char cpf[15];
    int idade;
    char sexo[10];
    char nome[50];
};

int main(int argc, char** argv) {
    
    struct pessoa p1;
    
    printf("Informe seu nome: ");
    gets(p1.nome);

    printf("Informe o salário: ");
    scanf("%f", &p1.salario);
    
    printf("Informe o CPF: ");
    scanf("%*c%[A-Z a-z 0-9 . -]s");
    
    printf("Informe a idade: ");
    scanf("%d", &p1.idade);
    
    printf("Informe o Sexo: ");
    scanf("%*c%[A-Z a-z 0-9 . -]s");
    
    printf("Nome: %s", p1.nome);
    printf("%.2f", p1.salario);
    printf("%s", p1.cpf);
    printf("%2d    |%s", p1.idade, p1.sexo);
    
    return (EXIT_SUCCESS);
}

