/* 
 * File:   main.c
 * Author: Geral
 *
 * Created on 20 de Setembro de 2014, 11:52
 */

#include <stdio.h>
#include <stdlib.h>
#include "../string.h"
#include "../strings.h"
#define TAM 1000
#define DEP 20

int funcionarios, admissao, demissao, i, departamento=0;
int exclui_fun, edic_fun;

int cont1 = 0, dependente1[200], i1 = 0, admissao = 0;
int cont2 = 0, dependente2[200], i2 = 0, admissao2 = 0;
int cont3 = 0, dependente3[200], i3 = 0, admissao3 = 0;
int cont4 = 0, dependente4[200], i4 = 0, admissao4 = 0;
int cont5 = 0, dependente5[200], i5 = 0, admissao5 = 0;
int dependentes[200];
int l = 0, exc[200];

float bonus1[200], sal_dep1[200], sal_total1[200];
float bonus2[200], sal_dep2[200], sal_total2[200];
float bonus3[200], sal_dep3[200], sal_total3[200];
float bonus4[200], sal_dep4[200], sal_total4[200];
float bonus5[200], sal_dep5[200], sal_total5[200];
float sal_dep[200], sal_total[200], bonus[200];
float total = 0.0, total2 = 0.0;

char nome_dep1[200][50];
char nome_dep2[200][50];
char nome_dep3[200][50];
char nome_dep4[200][50];
char nome_dep5[200][50];
char nome_dep[200][50], nomereceber[50]="";

int k=0;
float a=0.0;
int op=0;

//receber valores
void recebervalores(int depart){
    if(depart==1){
      for(l=0; l<200; l++){
        sal_dep[l]=sal_dep1[l];
        sal_total[l]=sal_total1[l];
        bonus[l]=bonus1[l];
        dependentes[l]=dependente1[l];
        strcpy(nome_dep[l],nome_dep1[l]);
      }
    } else if (depart==2){
        for(l=0; l<200; l++){
          sal_dep[l]=sal_dep2[l];
          sal_total[l]=sal_total2[l];          
          bonus[l]=bonus2[l];          
          dependentes[l]=dependente2[l];
          strcpy(nome_dep[l],nome_dep2[l]);
        }
    } else if (depart==3){
        for(l=0; l<200; l++){
            sal_dep[l]=sal_dep3[l];
            sal_total[l]=sal_total3[l];            
            bonus[l]=bonus3[l];
            dependentes[l]=dependente3[l];
            strcpy(nome_dep[l],nome_dep3[l]);
        }        
    } else if (depart==4){
        for(l=0; l<200; l++){
            sal_dep[l]=sal_dep4[l];
            sal_total[l]=sal_total4[l];
            bonus[l]=bonus4[l];
            dependentes[l]=dependente4[l];
            strcpy(nome_dep[l],nome_dep4[l]);
        }        
    } else if (depart==5){
        for(l=0; l<200; l++){
            sal_dep[l]=sal_dep5[l];
            sal_total[l]=sal_total5[l];
            bonus[l]=bonus5[l];
            dependentes[l]=dependente5[l];
            strcpy(nome_dep[l],nome_dep5[l]);
        }        
    }
}

//Cadastro Funcionarios
void admitir1() {
    i = 0;
    while (admissao < 1000 && op != 0 && cont1<200) {
        if ((strlen(nome_dep1[i]) == 0)) {
            printf("\nDigite o nome do funcionario: ");
            scanf("%*c%[A-Z a-z]s", &nome_dep1[i]);
            printf("\nQuantos dependentes o funcionario possui: ");
            scanf("%d", &dependente1[i]);
            bonus1[i] = DEP * dependente1[i];
            printf("\nDigite o Salário que ele irá receber: ");
            scanf("%f", &sal_dep1[i]);
            sal_total1[i] = sal_dep1[i] + bonus1[i];
            printf("\nSalario: %2.f  + Bonus %2.f = Total %2.f\n", sal_dep1[i], bonus1[i], sal_total1[i]);
            printf("Deseja continuar? [1]Sim/[0]Nao\n");
            scanf("%d", &op);
            if (op == 1 || op == 0) {
                admissao++;
                i++;
                cont1++;
            }
        } else i++;
    }
    op=1;
}

void admitir2() {
    i2 = 0;
    while (admissao < 1000 && op != 0 && cont2<200) {
        if ((strlen(nome_dep2[i2]) == 0)) {
            printf("\nDigite o nome do funcionario: ");
            scanf("%*c%[A-Z a-z]s", &nome_dep2[i2]);
            printf("\nQuantos dependentes o funcionario possui: ");
            scanf("%d", &dependente2[i2]);
            bonus2[i2] = DEP * dependente2[i2];
            printf("\nDigite o Salário que ele irá receber: ");
            scanf("%f", &sal_dep2[i2]);
            sal_total2[i2] = sal_dep2[i2] + bonus2[i2];
            printf("\nSalario: %2.f  + Bonus %2.f = Total %2.f\n", sal_dep2[i2], bonus2[i2], sal_total2[i2]);
            printf("Deseja continuar? [1]Sim/[0]Nao\n");
            scanf("%d", &op);
            if (op == 1 || op == 0) {
                admissao++;
                i2++;
                cont2++;
            }
        } else i2++;
    }
    op=1;
}

void admitir3() {
    i3 = 0;
    while (admissao < 1000 && op != 0 && cont3<200) {
        if ((strlen(nome_dep3[i3]) == 0)) {
            printf("\nDigite o nome do funcionario: ");
            scanf("%*c%[A-Z a-z]s", &nome_dep3[i3]);
            printf("\nQuantos dependentes o funcionario possui: ");
            scanf("%d", &dependente3[i3]);
            bonus3[i3] = DEP * dependente3[i3];
            printf("\nDigite o Salário que ele irá receber: ");
            scanf("%f", &sal_dep3[i3]);
            sal_total3[i3] = sal_dep3[i3] + bonus3[i3];
            printf("\nSalario: %2.f  + Bonus %2.f = Total %2.f\n", sal_dep3[i3], bonus3[i3], sal_total3[i3]);
            printf("Deseja continuar? [1]Sim/[0]Nao\n");
            scanf("%d", &op);
            if (op == 1 || op == 0) {
                admissao++;
                i3++;
                cont3++;
            }
        } else i3++;
    }
    op=1;
}

void admitir4() {
    i4 = 0;
    while (admissao < 1000 && op != 0 && cont4<200) {
        if ((strlen(nome_dep4[i4]) == 0)) {
            printf("\nDigite o nome do funcionario: ");
            scanf("%*c%[A-Z a-z]s", &nome_dep4[i4]);
            printf("\nQuantos dependentes o funcionario possui: ");
            scanf("%d", &dependente4[i4]);
            bonus4[i4] = DEP * dependente4[i4];
            printf("\nDigite o Salário que ele irá receber: ");
            scanf("%f", &sal_dep4[i4]);
            sal_total4[i4] = sal_dep4[i4] + bonus4[i4];
            printf("\nSalario: %2.f  + Bonus %2.f = Total %2.f\n", sal_dep4[i4], bonus4[i4], sal_total4[i4]);
            printf("Deseja continuar? [1]Sim/[0]Nao\n");
            scanf("%d", &op);
            if (op == 1 || op == 0) {
                admissao++;
                i4++;
                cont4++;
            }
        } else i4++;
    }
    op=1;
}

void admitir5() {
    i5 = 0;
    while (admissao5 < 1000 && op != 0 && cont5<200) {
        if ((strlen(nome_dep5[i5]) == 0)) {
            printf("\nDigite o nome do funcionario: ");
            scanf("%*c%[A-Z a-z]s", &nome_dep5[i5]);
            printf("\nQuantos dependentes o funcionario possui: ");
            scanf("%d", &dependente5[i5]);
            bonus5[i5] = DEP * dependente5[i5];
            printf("\nDigite o Salário que ele irá receber: ");
            scanf("%f", &sal_dep5[i5]);
            sal_total5[i5] = sal_dep5[i5] + bonus5[i5];
            printf("\nSalario: %2.f  + Bonus %2.f = Total %2.f\n", sal_dep5[i5], bonus5[i5], sal_total5[i5]);
            printf("Deseja continuar? [1]Sim/[0]Nao\n");
            scanf("%d", &op);
            if (op == 1 || op == 0) {
                admissao++;
                i5++;
                cont5++;
            }
        } else i5++;
    }
    op=1;
}

//Exclusao Funcionarios
int vazio_exc=0;
void demitir1() {
    vazio_exc=0;
    for (l = 0; l < cont1; l++) {
        if (strlen(nome_dep1[l]) != 0) {
            printf("%d- Nome: %s, Dependentes: %d, Salario: %.2f\n", l, nome_dep1[l], dependente1[l], sal_total1[l]);
            exc[l]=l;
        } else {
            vazio_exc++;
            exc[l]=-1;
        }
    }
    printf("\n");
    if(vazio_exc!=cont1){
        printf("Digite o numero do funcionario: ");
        scanf("%d", &exclui_fun);
        if(exc[exclui_fun] == exclui_fun){
            strcpy(nome_dep1[exclui_fun], "");
            dependente1[exclui_fun] = 0;
            bonus1[exclui_fun] = 0;
            sal_dep1[exclui_fun] = 0;
            sal_total1[exclui_fun] = 0;
            admissao--;
            cont1--;
            printf("\nFuncionario demitido com sucesso!!\n");
        } else {
            printf("\nMatrícula Não Cadastrada!\n");
        }
    } else {
        printf("\nNão há funcionários para demitir!\n");
    }
}

void demitir2() {
    vazio_exc=0;
    for (l = 0; l < cont2; l++) {
        if (strlen(nome_dep2[l]) != 0) {
            printf("%d- Nome: %s, Dependentes: %d, Salario: %.2f\n", l, nome_dep2[l], dependente2[l], sal_total2[l]);
            exc[l]=l;
        } else {
            vazio_exc++;
            exc[l]=-1;
        }
    }
    printf("\n");
    if(vazio_exc!=cont2){
        printf("Digite o numero do funcionario: ");
        scanf("%d", &exclui_fun);
        if(exc[exclui_fun] == exclui_fun){
            strcpy(nome_dep2[exclui_fun], "");
            dependente2[exclui_fun] = 0;
            bonus2[exclui_fun] = 0;
            sal_dep2[exclui_fun] = 0;
            sal_total2[exclui_fun] = 0;
            admissao--;
            cont2--;
            printf("\nFuncionario demitido com sucesso!!\n");
        } else {
            printf("\nMatrícula Não Cadastrada!\n");
        }
    } else {
        printf("\nNão há funcionários para demitir!\n");
    }
}

void demitir3() {
    vazio_exc=0;
    for (l = 0; l < cont3; l++) {
        if (strlen(nome_dep3[l]) != 0) {
            printf("%d- Nome: %s, Dependentes: %d, Salario: %.2f\n", l, nome_dep3[l], dependente3[l], sal_total3[l]);
            exc[l]=l;
        } else {
            vazio_exc++;
            exc[l]=-1;
        }
    }
    printf("\n");
    if(vazio_exc!=cont3){
        printf("Digite o numero do funcionario: ");
        scanf("%d", &exclui_fun);
        if(exc[exclui_fun] == exclui_fun){
            strcpy(nome_dep3[exclui_fun], "");
            dependente3[exclui_fun] = 0;
            bonus3[exclui_fun] = 0;
            sal_dep3[exclui_fun] = 0;
            sal_total3[exclui_fun] = 0;
            admissao--;
            cont3--;
            printf("\nFuncionario demitido com sucesso!!\n");
        } else {
            printf("\nMatrícula Não Cadastrada!");
        }
    } else {
        printf("Não há funcionários para demitir!\n");
    }
}

void demitir4() {
    vazio_exc=0;
    for (l = 0; l < cont4; l++) {
        if (strlen(nome_dep4[l]) != 0) {
            printf("%d- Nome: %s, Dependentes: %d, Salario: %.2f\n", l, nome_dep4[l], dependente4[l], sal_total4[l]);
            exc[l]=l;
        } else {
            vazio_exc++;
            exc[l]=-1;
        }
    }
    printf("\n");
    if (vazio_exc!=cont4){
        printf("Digite o numero do funcionario: ");
        scanf("%d", &exclui_fun);
        if(exc[exclui_fun] == exclui_fun){
            strcpy(nome_dep4[exclui_fun], "");
            dependente4[exclui_fun] = 0;
            bonus4[exclui_fun] = 0;
            sal_dep4[exclui_fun] = 0;
            sal_total4[exclui_fun] = 0;
            admissao--;
            cont4--;
            printf("\nFuncionario demitido com sucesso!!\n");
        } else {
            printf("\nMatrícula Não Cadastrada!\n");
        }
    } else {
        printf("\nNão há funcionários para demitir!\n");
    }
}

void demitir5() {
    vazio_exc=0;
    for (l = 0; l < cont5; l++) {
        if (strlen(nome_dep5[l]) != 0) {
            printf("%d- Nome: %s, Dependentes: %d, Salario: %.2f\n", l, nome_dep5[l], dependente5[l], sal_total5[l]);
            exc[l]=l;
        } else {
            vazio_exc++;
            exc[l]=-1;
        }
    }
    printf("\n");
    if(vazio_exc!=cont5){
        printf("Digite o numero do funcionario:");
        scanf("%d", &exclui_fun);
        if(exc[exclui_fun] == exclui_fun){
            strcpy(nome_dep1[exclui_fun], "");
            dependente5[exclui_fun] = 0;
            bonus5[exclui_fun] = 0;
            sal_dep5[exclui_fun] = 0;
            sal_total5[exclui_fun] = 0;
            admissao--;
            cont5--;
            printf("\nFuncionario demitido com sucesso!!\n");
        } else {
            printf("\nMatrícula Não Cadastrada!");
        }
    } else {
        printf("\nNão há funcionários para demitir!\n");
    }
}

//Edição de Salario/Dependentes
void edita1(){
    printf("\nO que deseja alterar? [1]Salario [2]Número Dependentes\n");
    scanf("%d", &op);
    switch (op){
        case 1:{
            for (l = 0; l < cont1; l++) {
                if (strlen(nome_dep1[l]) != 0) {
                    printf("%d- Nome: %s, Salario Base: %.2f\n", l, nome_dep1[l], sal_dep1[l]);
                }
            }
            printf("\n");
            printf("Digite o numero do funcionario: ");
            scanf("%d", &edic_fun);
            printf("\nQual o salario: ");
            scanf("%f", &sal_dep1[edic_fun]);
            sal_total1[edic_fun] = sal_dep1[edic_fun] + bonus1[edic_fun];
            printf("\nEdicao concluida com sucesso!\n\n");            
        break;}
        case 2:{
            for (l = 0; l < cont1; l++) {
                if (strlen(nome_dep1[l]) != 0) {
                    printf("%d- Nome: %s, Dependentes: %d, Salario Total: %.2f\n", l, nome_dep1[l], dependente1[l], sal_total1[l]);
                }
            }
            printf("\n");
            printf("Digite o numero do funcionario: ");
            scanf("%d", &edic_fun);
            printf("\nInforme Novo Número de Dependentes: ");
            scanf("%d", &dependente1[edic_fun]);
            bonus1[edic_fun] = DEP * dependente1[edic_fun];
            sal_total1[edic_fun] = sal_dep1[edic_fun] + bonus1[edic_fun];
            printf("\nEdicao concluida com sucesso\n\n");            
        break;}
        default: printf("\nOpção Inválida!\n");
    }
}

void edita2(){
    printf("\nO que deseja alterar? [1]Salario [2]Número Dependentes\n");
    scanf("%d", &op);
    switch (op){
        case 1:{
            for (l = 0; l < cont2; l++) {
                if (strlen(nome_dep2[l]) != 0) {
                    printf("%d- Nome: %s, Salario Base: %.2f\n", l, nome_dep2[l], sal_dep2[l]);
                }
            }
            printf("\n");
            printf("Digite o numero do funcionario: ");
            scanf("%d", &edic_fun);
            printf("\nQual o salario: ");
            scanf("%f", &sal_dep2[edic_fun]);
            sal_total2[edic_fun] = sal_dep2[edic_fun] + bonus2[edic_fun];
            printf("\nEdicao concluida com sucesso!\n\n");            
        break;}
        case 2:{
            for (l = 0; l < cont2; l++) {
                if (strlen(nome_dep2[l]) != 0) {
                    printf("%d- Nome: %s, Dependentes: %d, Salario Total: %.2f\n", l, nome_dep2[l], dependente2[l], sal_total2[l]);
                }
            }
            printf("\n");
            printf("Digite o numero do funcionario: ");
            scanf("%d", &edic_fun);
            printf("\nInforme Novo Número de Dependentes: ");
            scanf("%d", &dependente2[edic_fun]);
            bonus1[edic_fun] = DEP * dependente1[edic_fun];
            sal_total2[edic_fun] = sal_dep2[edic_fun] + bonus2[edic_fun];
            printf("\nEdicao concluida com sucesso\n\n");            
        break;}
        default: printf("\nOpção Inválida!\n");
    }    
}

void edita3(){
    printf("\nO que deseja alterar? [1]Salario [2]Número Dependentes\n");
    scanf("%d", &op);
    switch (op){
        case 1:{
            for (l = 0; l < cont3; l++) {
                if (strlen(nome_dep3[l]) != 0) {
                    printf("%d- Nome: %s, Salario Base: %.2f\n", l, nome_dep3[l], sal_dep3[l]);
                }
            }
            printf("\n");
            printf("Digite o numero do funcionario: ");
            scanf("%d", &edic_fun);
            printf("\nQual o salario: ");
            scanf("%f", &sal_dep3[edic_fun]);
            sal_total3[edic_fun] = sal_dep3[edic_fun] + bonus3[edic_fun];
            printf("\nEdicao concluida com sucesso!\n\n");            
        break;}
        case 2:{
            for (l = 0; l < cont3; l++) {
                if (strlen(nome_dep3[l]) != 0) {
                    printf("%d- Nome: %s, Dependentes: %d, Salario Total: %.2f\n", l, nome_dep3[l], dependente3[l], sal_total3[l]);
                }
            }
            printf("\n");

            printf("Digite o numero do funcionario: ");
            scanf("%d", &edic_fun);
            printf("\nInforme Novo Número de Dependentes: ");
            scanf("%d", &dependente3[edic_fun]);
            bonus3[edic_fun] = DEP * dependente3[edic_fun];
            sal_total3[edic_fun] = sal_dep3[edic_fun] + bonus3[edic_fun];
            printf("\nEdicao concluida com sucesso\n\n");            
        break;}
        default: printf("\nOpção Inválida!\n");
    }    
}

void edita4(){
    printf("\nO que deseja alterar? [1]Salario [2]Número Dependentes\n");
    scanf("%d", &op);
    switch (op){
        case 1:{
            for (l = 0; l < cont4; l++) {
                if (strlen(nome_dep4[l]) != 0) {
                    printf("%d- Nome: %s, Salario Base: %.2f\n", l, nome_dep4[l], sal_dep4[l]);
                }
            }
            printf("\n");
            printf("Digite o numero do funcionario: ");
            scanf("%d", &edic_fun);
            printf("\nQual o salario: ");
            scanf("%f", &sal_dep4[edic_fun]);
            sal_total4[edic_fun] = sal_dep4[edic_fun] + bonus4[edic_fun];
            printf("\nEdicao concluida com sucesso!\n\n");            
        break;}
        case 2:{
            for (l = 0; l < cont4; l++) {
                if (strlen(nome_dep4[l]) != 0) {
                    printf("%d- Nome: %s, Dependentes: %d, Salario Total: %.2f\n", l, nome_dep4[l], dependente4[l], sal_total4[l]);
                }
            }
            printf("\n");
            printf("Digite o numero do funcionario: ");
            scanf("%d", &edic_fun);
            printf("\nInforme Novo Número de Dependentes: ");
            scanf("%d", &dependente4[edic_fun]);
            bonus4[edic_fun] = DEP * dependente4[edic_fun];
            sal_total4[edic_fun] = sal_dep4[edic_fun] + bonus4[edic_fun];
            printf("\nEdicao concluida com sucesso\n\n");            
        break;}
        default: printf("\nOpção Inválida!\n");
    }    
}

void edita5(){
     printf("\nO que deseja alterar? [1]Salario [2]Número Dependentes\n");
    scanf("%d", &op);
    switch (op){
        case 1:{
            for (l = 0; l < cont5; l++) {
                if (strlen(nome_dep5[l]) != 0) {
                    printf("%d- Nome: %s, Salario Base: %.2f\n", l, nome_dep5[l], sal_dep5[l]);
                }
            }
            printf("\n");
            printf("Digite o numero do funcionario: ");
            scanf("%d", &edic_fun);
            printf("\nInforme o Novo Salário: ");
            scanf("%f", &sal_dep5[edic_fun]);
            sal_total5[edic_fun] = sal_dep5[edic_fun] + bonus5[edic_fun];
            printf("\nEdicao concluida com sucesso!\n\n");            
        break;}
        case 2:{
            for (l = 0; l < cont5; l++) {
                if (strlen(nome_dep5[l]) != 0) {
                    printf("%d- Nome: %s, Dependentes: %d, Salario Total: %.2f\n", l, nome_dep5[l], dependente5[l], sal_total5[l]);
                }
            }
            printf("\n");
            printf("Digite o numero do funcionario: ");
            scanf("%d", &edic_fun);
            printf("\nInforme Novo Número de Dependentes: ");
            scanf("%d", &dependente5[edic_fun]);
            bonus5[edic_fun] = DEP * dependente5[edic_fun];
            sal_total5[edic_fun] = sal_dep5[edic_fun] + bonus5[edic_fun];
            printf("\nEdicao concluida com sucesso\n\n");            
        break;}
        default: printf("\nOpção Inválida!\n");
    }   
}

//Folha de Pagamento
int ano=0;
char mes[50];
void folha_de_pagamento_tributos() {
    int l = 0;
    float inss=0.0, fgts=0.0, descontos=0.0;
    printf("Digite qual Mês: ");
    scanf("%*c%[A-Z a-z]s", mes);
    printf("Digite Qual Ano: ");
    scanf("%d", &ano);
    printf("\nDigite a matricula do funcionário: ");
    scanf("%d", &l);
    if (sal_dep[l] < 1707.52){
        inss = sal_dep[l] * 0.08;
    } else if(sal_dep[l] < 1845.87){
        inss = sal_dep[l] * 0.09;
    } else if(sal_dep[l] < 3691.74){
        inss = sal_dep[l] * 0.11;
    }
    fgts = sal_dep[l]*0.08;
    
    printf("\n___________________________________________________________________________\n");
    printf("\t\t\tFOLHA DE PAGAMENTO COM TRIBUTOS");
    printf("\n___________________________________________________________________________\n");
    printf("Empresa: ABC");
    printf("\nFuncionario: %3d - %s\tRefer. a: %s/%d", l, nome_dep[l], mes, ano);
    printf("\n___________________________________________________________________________\n");
    printf("     Discriminação\t|\t  Valor");
    printf("\n___________________________________________________________________________\n");
    printf("Salario Base\t\t\t+%-4.2f", sal_dep[l]);
    printf("\nValor dependentes\t\t+%-4.2f", bonus[l]);
    printf("\nDesconto INSS\t\t\t-%4.2f", inss);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n___________________________________________________________________________\n");
    printf("\nSAL. LIQUIDO:\t\t\t%4.2f", sal_total[l] - inss);
    printf("\n___________________________________________________________________________\n");
    printf("\nAss. do Funcionário:\n");
    printf("___________________________________________________________________________\n");
    printf("\nBase INSS = %4.2f Base FGTS = %4.2f Valor FGTS = %4.2f\n", sal_dep[l], sal_dep[l], fgts);
    printf("___________________________________________________________________________\n\n");
}

void folha_de_pagamento() {
    int l = 0;
    
    printf("\nDigite a matricula do funcionário: ");
    scanf("%d", &l);
    printf("Digite qual Mês: ");
    scanf("%*c%[A-Z a-z]s", mes);
    printf("Digite Qual Ano: ");
    scanf("%d", &ano);    
    printf("\n___________________________________________________________________________\n");
    printf("\t\t\tFOLHA DE PAGAMENTO SIMPLES");
    printf("\n___________________________________________________________________________\n");
    printf("Empresa: ABC");
    printf("\nFuncionario: %3d - %s\tRefer. a: %s/%d", l, nome_dep[l], mes, ano);
    printf("\n___________________________________________________________________________\n");
    printf("Salário Base: %.2f", sal_dep[l]);
    printf("Número de Dependentes: %d com um bônus de %.2f ", dependentes[l], bonus[l]);
    printf("\n");
    printf("\n___________________________________________________________________________\n");
    printf("\n\t\t\t\t\tSAL. LIQUIDO:%5.2f", sal_total[l]);
    printf("\n___________________________________________________________________________\n\n");
}

//Relatorios
void maiorsalario(int dep){
    a=0.0;
    if(dep == 1){
        for(l=0; l<200; l++){
                sal_dep[l]=sal_total1[l];
                strcpy(nome_dep[l],nome_dep1[l]);
        }
        for(l=0; l<199; l++){
            for(k = l + 1; k<200; k++){
                if(sal_dep[l] > sal_dep[k]){
                    a=sal_dep[l];
                    sal_dep[l]=sal_dep[k];
                    sal_dep[k]=a;
                    strcpy(nomereceber,nome_dep[l]);
                    strcpy(nome_dep[l],nome_dep[k]);
                    strcpy(nome_dep[k],nomereceber);
                }
            }
        }
        printf("O maior salário do departamento %d é de %s no valor de %.2f ", dep, nomereceber, a);
    } else {
        if(dep == 2){
            for(l=0; l<200; l++){
                    sal_dep[l]=sal_total2[l];
                    strcpy(nome_dep[l],nome_dep2[l]);
            }
            for(l=0; l<199; l++){
                for(k = l + 1; k<200; k++){
                    if(sal_dep[l] > sal_dep[k]){
                        a=sal_dep[l];
                        sal_dep[l]=sal_dep[k];
                        sal_dep[k]=a;
                        strcpy(nomereceber,nome_dep[l]);
                        strcpy(nome_dep[l],nome_dep[k]);
                        strcpy(nome_dep[k],nomereceber);
                    }
                }
            }
            printf("O maior salário do departamento %d é de %s no valor de %.2f ", dep, nomereceber, a);             
        } else {
            if(dep == 3){
                for(l=0; l<200; l++){
                        sal_dep[l]=sal_total3[l];
                        strcpy(nome_dep[l],nome_dep3[l]);
                }
                for(l=0; l<199; l++){
                    for(k = l + 1; k<200; k++){
                        if(sal_dep[l] > sal_dep[k]){
                            a=sal_dep[l];
                            sal_dep[l]=sal_dep[k];
                            sal_dep[k]=a;
                            strcpy(nomereceber,nome_dep[l]);
                            strcpy(nome_dep[l],nome_dep[k]);
                            strcpy(nome_dep[k],nomereceber);
                        }
                    }
                }
                printf("O maior salário do departamento %d é de %s no valor de %.2f ", dep, nomereceber, a);            
            } else {
                if(dep == 4){
                    for(l=0; l<200; l++){
                            sal_dep[l]=sal_total4[l];
                            strcpy(nome_dep[l],nome_dep4[l]);
                    }
                    for(l=0; l<199; l++){
                        for(k = l + 1; k<200; k++){
                            if(sal_dep[l] > sal_dep[k]){
                                a=sal_dep[l];
                                sal_dep[l]=sal_dep[k];
                                sal_dep[k]=a;
                                strcpy(nomereceber,nome_dep[l]);
                                strcpy(nome_dep[l],nome_dep[k]);
                                strcpy(nome_dep[k],nomereceber);
                            }
                        }
                    }
                    printf("O maior salário do departamento %d é de %s no valor de %.2f ", dep, nomereceber, a);             
                } else {
                    if(dep == 5){
                        for(l=0; l<200; l++){
                                sal_dep[l]=sal_total5[l];
                                strcpy(nome_dep[l],nome_dep5[l]);
                        }
                        for(l=0; l<199; l++){
                            for(k = l + 1; k<200; k++){
                                if(sal_dep[l] > sal_dep[k]){
                                    a=sal_dep[l];
                                    sal_dep[l]=sal_dep[k];
                                    sal_dep[k]=a;
                                    strcpy(nomereceber,nome_dep[l]);
                                    strcpy(nome_dep[l],nome_dep[k]);
                                    strcpy(nome_dep[k],nomereceber);
                                }
                            }
                        }
                        printf("O maior salário do departamento %d é de %s no valor de %.2f ", dep, nomereceber, a);
                    } else {
                        printf("Departamento Não Existe!\n");
                    }
                }
            }
        }
    }
    printf("\n\n");
}

void rankingsal(int escolhaop, int escolhadep){
    k=0;
    a=0.0;
    if(escolhaop==1){
        if(escolhadep == 1){
            for(l=0; l<200; l++){
                    sal_dep[l]=sal_total1[l];
                    strcpy(nome_dep[l],nome_dep1[l]);
            }
            for(l=0; l<199; l++){
                for(k = l + 1; k<200; k++){
                    if(sal_dep[l] > sal_dep[k]){
                        a=sal_dep[l];
                        sal_dep[l]=sal_dep[k];
                        sal_dep[k]=a;
                        strcpy(nomereceber,nome_dep[l]);
                        strcpy(nome_dep[l],nome_dep[k]);
                        strcpy(nome_dep[k],nomereceber);
                    }
                }
            }

            printf("Nome\t\t\t\t\t\t     Salário\n");
            for(l=0, k=1; l<200; l++){
                if(sal_dep[l] > 0.0){
                    printf("%d- %-50s %4.2f\n", k, nome_dep[l], sal_dep[l]);
                    k++;
                }
            }
        } else {
            if(escolhadep == 2){
                for(l=0; l<200; l++){
                        sal_dep[l]=sal_total2[l];
                        strcpy(nome_dep[l],nome_dep2[l]);
                }
                for(l=0; l<199; l++){
                    for(k = l + 1; k<200; k++){
                        if(sal_dep[l] > sal_dep[k]){
                            a=sal_dep[l];
                            sal_dep[l]=sal_dep[k];
                            sal_dep[k]=a;
                            strcpy(nomereceber,nome_dep[l]);
                            strcpy(nome_dep[l],nome_dep[k]);
                            strcpy(nome_dep[k],nomereceber);
                        }
                    }
                }
                printf("Nome\t\t\t\t\t\t     Salário\n");
                for(l=0, k=1; l<200; l++){
                    if(sal_dep[l] > 0.0){
                        printf("%d- %-50s %4.2f\n", k, nome_dep[l], sal_dep[l]);
                        k++;
                    }
                }                
            } else {
                if(escolhadep == 3){
                    for(l=0; l<200; l++){
                            sal_dep[l]=sal_total3[l];
                            strcpy(nome_dep[l],nome_dep3[l]);
                    }
                    for(l=0; l<199; l++){
                        for(k = l + 1; k<200; k++){
                            if(sal_dep[l] > sal_dep[k]){
                                a=sal_dep[l];
                                sal_dep[l]=sal_dep[k];
                                sal_dep[k]=a;
                                strcpy(nomereceber,nome_dep[l]);
                                strcpy(nome_dep[l],nome_dep[k]);
                                strcpy(nome_dep[k],nomereceber);
                            }
                        }
                    }
                    printf("Nome\t\t\t\t\t\t     Salário\n");
                    for(l=0, k=1; l<200; l++){
                        if(sal_dep[l] > 0.0){
                            printf("%d- %-50s %4.2f\n", k, nome_dep[l], sal_dep[l]);
                            k++;
                        }
                    }                
                } else {
                    if(escolhadep == 4){
                        for(l=0; l<200; l++){
                                sal_dep[l]=sal_total4[l];
                                strcpy(nome_dep[l],nome_dep4[l]);
                        }
                        for(l=0; l<199; l++){
                            for(k = l + 1; k<200; k++){
                                if(sal_dep[l] > sal_dep[k]){
                                    a=sal_dep[l];
                                    sal_dep[l]=sal_dep[k];
                                    sal_dep[k]=a;
                                    strcpy(nomereceber,nome_dep[l]);
                                    strcpy(nome_dep[l],nome_dep[k]);
                                    strcpy(nome_dep[k],nomereceber);
                                }
                            }
                        }
                        printf("Nome\t\t\t\t\t\t     Salário\n");
                        for(l=0, k=1; l<200; l++){
                            if(sal_dep[l] > 0.0){
                                printf("%d- %-50s %4.2f\n", k, nome_dep[l], sal_dep[l]);
                                k++;
                            }
                        }                
                    } else {
                        if(escolhadep == 5){
                            for(l=0; l<200; l++){
                                    sal_dep[l]=sal_total5[l];
                                    strcpy(nome_dep[l],nome_dep5[l]);
                            }
                            for(l=0; l<199; l++){
                                for(k = l + 1; k<200; k++){
                                    if(sal_dep[l] > sal_dep[k]){
                                        a=sal_dep[l];
                                        sal_dep[l]=sal_dep[k];
                                        sal_dep[k]=a;
                                        strcpy(nomereceber,nome_dep[l]);
                                        strcpy(nome_dep[l],nome_dep[k]);
                                        strcpy(nome_dep[k],nomereceber);
                                    }
                                }
                            }
                            printf("Nome\t\t\t\t\t\t     Salário\n");
                            for(l=0, k=1; l<200; l++){
                                if(sal_dep[l] > 0.0){
                                    printf("%d- %-50s %4.2f\n", k, nome_dep[l], sal_dep[l]);
                                    k++;
                                }
                            }                
                        } else {
                            printf("Departamento Inválido!\n");
                        }
                    }
                }               
            }
        }
    } else {
        if(escolhaop==2){
            if(escolhadep == 1){               
                for(l=0; l<200; l++){
                        sal_dep[l]=sal_total1[l];
                        strcpy(nome_dep[l],nome_dep1[l]);
                }
                for(l=0; l<199; l++){
                    for(k = l + 1; k<200; k++){
                        if(sal_dep[l] > sal_dep[k]){
                            a=sal_dep[l];
                            sal_dep[l]=sal_dep[k];
                            sal_dep[k]=a;
                            strcpy(nomereceber,nome_dep[l]);
                            strcpy(nome_dep[l],nome_dep[k]);
                            strcpy(nome_dep[k],nomereceber);
                        }
                    }
                }
                printf("Nome\t\t\t\t\t\t     Salário\n");
                for(l=199, k=1; l>=0; l--){
                    if(sal_dep[l] > 0.0){
                        printf("%d- %-50s %4.2f\n", k, nome_dep[l], sal_dep[l]);
                        k++;
                    }
                }
            } else {
                if(escolhadep == 2){
                    for(l=0; l<200; l++){
                            sal_dep[l]=sal_total2[l];
                            strcpy(nome_dep[l],nome_dep2[l]);
                    }
                    for(l=0; l<199; l++){
                        for(k = l + 1; k<200; k++){
                            if(sal_dep[l] > sal_dep[k]){
                                a=sal_dep[l];
                                sal_dep[l]=sal_dep[k];
                                sal_dep[k]=a;
                                strcpy(nomereceber,nome_dep[l]);
                                strcpy(nome_dep[l],nome_dep[k]);
                                strcpy(nome_dep[k],nomereceber);
                            }
                        }
                    }
                    printf("Nome\t\t\t\t\t\t     Salário\n");
                    for(l=199, k=1; l>=0; l--){
                        if(sal_dep[l] > 0.0){
                            printf("%d- %-50s %4.2f\n", k, nome_dep[l], sal_dep[l]);
                            k++;
                        }
                    }                
                } else {
                    if(escolhadep == 3){
                        for(l=0; l<200; l++){
                                sal_dep[l]=sal_total3[l];
                                strcpy(nome_dep[l],nome_dep3[l]);
                        }
                        for(l=0; l<199; l++){
                            for(k = l + 1; k<200; k++){
                                if(sal_dep[l] > sal_dep[k]){
                                    a=sal_dep[l];
                                    sal_dep[l]=sal_dep[k];
                                    sal_dep[k]=a;
                                    strcpy(nomereceber,nome_dep[l]);
                                    strcpy(nome_dep[l],nome_dep[k]);
                                    strcpy(nome_dep[k],nomereceber);
                                }
                            }
                        }
                        printf("Nome\t\t\t\t\t\t     Salário\n");
                        for(l=199, k=1; l>=0; l--){
                            if(sal_dep[l] > 0.0){
                                printf("%d- %-50s %4.2f\n", k, nome_dep[l], sal_dep[l]);
                                k++;
                            }
                        }                
                    } else {
                        if(escolhadep == 4){
                            for(l=0; l<200; l++){
                                    sal_dep[l]=sal_total4[l];
                                    strcpy(nome_dep[l],nome_dep4[l]);
                            }
                            for(l=0; l<199; l++){
                                for(k = l + 1; k<200; k++){
                                    if(sal_dep[l] > sal_dep[k]){
                                        a=sal_dep[l];
                                        sal_dep[l]=sal_dep[k];
                                        sal_dep[k]=a;
                                        strcpy(nomereceber,nome_dep[l]);
                                        strcpy(nome_dep[l],nome_dep[k]);
                                        strcpy(nome_dep[k],nomereceber);
                                    }
                                }
                            }
                            printf("Nome\t\t\t\t\t\t     Salário\n");
                            for(l=199, k=1; l>=0; l--){
                                if(sal_dep[l] > 0.0){
                                    printf("%d- %-50s %4.2f\n", k, nome_dep[l], sal_dep[l]);
                                    k++;
                                }
                            }                
                        } else {
                            if(escolhadep == 5){
                                for(l=0; l<200; l++){
                                        sal_dep[l]=sal_total5[l];
                                        strcpy(nome_dep[l],nome_dep5[l]);
                                }
                                for(l=0; l<199; l++){
                                    for(k = l + 1; k<200; k++){
                                        if(sal_dep[l] > sal_dep[k]){
                                            a=sal_dep[l];
                                            sal_dep[l]=sal_dep[k];
                                            sal_dep[k]=a;
                                            strcpy(nomereceber,nome_dep[l]);
                                            strcpy(nome_dep[l],nome_dep[k]);
                                            strcpy(nome_dep[k],nomereceber);
                                        }
                                    }
                                }
                                printf("Nome\t\t\t\t\t\t     Salário\n");
                                for(l=199, k=1; l>=0; l--){
                                    if(sal_dep[l] > 0.0){
                                        printf("%d- %-50s %4.2f\n", k, nome_dep[l], sal_dep[l]);
                                        k++;
                                    }
                                }                
                            } else {
                                printf("Departamento Inválido!\n");
                            }
                        }
                    }               
                }
            }            
        } else {
            printf("Opção Inválida!\n");
        } 
    }
    printf("\n\n");
}

float gasto(int depart, int escolha) {
    if (escolha == 2) {
        if (depart == 1) {
            total = 0.0;
            for (l = 0; l < 200; l++) {
                total = total + sal_total1[l];
            }
            return total;
        } else {
            if (depart == 2) {
                total = 0.0;
                for (l = 0; l < 200; l++) {
                    total = total + sal_total2[l];
                }
                return total;
            } else {
                if (depart == 3) {
                    total = 0.0;
                    for (l = 0; l < 200; l++) {
                        total = total + sal_total3[l];
                    }
                    return total;
                } else {
                    if (depart == 4) {
                        total = 0.0;
                        for (l = 0; l < 200; l++) {
                            total = total + sal_total4[l];
                        }
                        return total;
                    } else {
                        if (depart == 5) {
                            total = 0.0;
                            for (l = 0; l < 200; l++) {
                                total = total + sal_total5[l];
                            }
                            return total;
                        } else {
                            if (depart == 6) {
                                total = gasto(1, 2) + gasto(2, 2) + gasto(3, 2) + gasto(4, 2) + gasto(5, 2);
                                return total;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (escolha == 1) {
            if (depart == 1) {
                total = 0.0;
                for (l = 0; l < 200; l++) {
                    total = total + sal_total1[l];
                }
                total2 = (total / cont1);
                return total2;
            } else {
                if (depart == 2) {
                    total = 0.0;
                    for (l = 0; l < 200; l++) {
                        total = total + sal_total2[l];
                    }
                    total2 = total / cont2;
                    return total2;
                } else {
                    if (depart == 3) {
                        total = 0.0;
                        for (l = 0; l < 200; l++) {
                            total = total + sal_total3[l];
                        }
                        total2 = total / cont3;
                        return total2;
                    } else {
                        if (depart == 4) {
                            total = 0.0;
                            for (l = 0; l < 200; l++) {
                                total = total + sal_total4[l];
                            }
                            total2 = total / cont4;
                            return total2;
                        } else {
                            if (depart == 5) {
                                total = 0.0;
                                for (l = 0; l < 200; l++) {
                                    total = total + sal_total5[l];
                                }
                                total2 = total / cont5;
                                return total2;
                            }
                        }
                    }
                }
            }
        }
    }
}

int main() {
    int saida = 1, resp = 0, oppp = 0;
    do{
        system("clear");
        op=0;
        printf("====================================================\n");
        printf("[1]Cadastros [2]Relatorios [0]SAIR\n");
        printf("====================================================\n");
        scanf("%d", &op);
        system("clear");
        switch (op) {
            case 1:{
                do{
                    printf("\nEscolha o Departamento [1] [2] [3] [4] [5] ou [0]Menu Principal\n");
                    scanf("%d", &departamento);
                    system("clear");
                    if(departamento>0 && departamento<6){
                        printf("======================================================================\n");
                        printf("[1]ADMISSAO [2]PESQUISA SALÁRIO [3]DEMISSAO [4]EDIÇÃO [0]MENU ANTERIOR\n");
                        printf("======================================================================\n");
                        scanf("%d", &resp);
                        if (resp == 1) {
                            if (departamento == 1) {
                                admitir1();
                            } else if (departamento == 2) {
                                admitir2();
                            } else if (departamento == 3) {
                                admitir3();
                            } else if (departamento == 4) {
                                admitir4();
                            } else if (departamento == 5) {
                                admitir5();
                            }
                        } else if (resp == 2) {
                            k=0;
                            if (departamento == 1) {
                                printf("\nDigite a matrícula do funcionário: ");
                                scanf("%d", &oppp);
                                for(l=0; l<cont1; l++){
                                    if(oppp == l){
                                        printf("\nO salário de %s com a Matrícula %d é igual a: %.2f\n", nome_dep1[l], l, sal_total1[l]);
                                        k=1;
                                    }
                                }
                                if(k==0){
                                    printf("\nMatrícula Não Cadastrada!");
                                }
                            } else if (departamento == 2) {
                                printf("\nDigite a matrícula do funcionário: ");
                                scanf("%d", &oppp);
                                for(l=0; l<cont2; l++){
                                    if(oppp == l){
                                        printf("\nO salário de %s com a Matrícula %d é igual a: %.2f\n", nome_dep2[l], l, sal_total2[l]);
                                        k=1;
                                    }
                                }
                                if(k==0){
                                    printf("\nMatrícula Não Cadastrada!");
                                }
                            } else if (departamento == 3) {
                                printf("\nDigite a matrícula do funcionário: ");
                                scanf("%d", &oppp);
                                for(l=0; l<cont3; l++){
                                    if(oppp == l){
                                        printf("\nO salário de %s com a Matrícula %d é igual a: %.2f\n", nome_dep3[l], l, sal_total3[l]);
                                        k=1;
                                    }
                                }
                                if(k==0){
                                    printf("\nMatrícula Não Cadastrada!");
                                }
                            } else if (departamento == 4) {
                                printf("\nDigite a matrícula do funcionário: ");
                                scanf("%d", &oppp);
                                for(l=0; l<cont4; l++){
                                    if(oppp == l){
                                        printf("\nO salário de %s com a Matrícula %d é igual a: %.2f\n", nome_dep4[l], l, sal_total4[l]);
                                        k=1;
                                    }
                                }
                                if(k==0){
                                    printf("\nMatrícula Não Cadastrada!");
                                }
                            } else if (departamento == 5) {
                                printf("\nDigite a matrícula do funcionário: ");
                                scanf("%d", &oppp);
                                for(l=0; l<cont5; l++){
                                    if(oppp == l){
                                        printf("\nO salário de %s com a Matrícula %d é igual a: %.2f\n", nome_dep4[l], l, sal_total5[l]);
                                        k=1;
                                    }
                                }
                                if(k==0){
                                    printf("\nMatrícula Não Cadastrada!");
                                }
                            }
                        } else if (resp == 3) {
                            exclui_fun=0;
                            if (departamento == 1) {
                                demitir1();
                            } else if (departamento == 2) {
                                demitir2();
                            } else if (departamento == 3) {
                                demitir3();
                            } else if (departamento == 4) {
                                demitir4();
                            } else if (departamento == 5) {
                                demitir5();
                            }
                        } else if (resp == 4){
                            if (departamento == 1) {
                                edita1();
                            } else if (departamento == 2) {
                                edita2();
                            } else if (departamento == 3) {
                                edita3();
                            } else if (departamento == 4) {
                                edita4();
                            } else if (departamento == 5) {
                                edita5();
                            }                      
                        } else {
                            printf("Opção Inválida!\n\n");
                        }
                    } else if(departamento==0){
                        resp=0;
                    } else {
                        printf("\nDepartamento Inválido!");
                    }
                    departamento=0;
                }while (resp>0);
            break;}
            case 2:{
                do {
                    printf("Escolha o que deseja:\n[1]Media de Gastos\n[2]Total de Gastos\n[3]Rankings\n[4]Maior Salário\n[5]Folha de Pagamento\n[0]Menu Principal\n");
                    scanf("%d", &op);
                    system("clear");
                    switch (op) {
                        case 1:{
                            printf("Escolha o departamento [1] [2] [3] [4] [5]: ");
                            scanf("%d", &oppp);
                            if (oppp > 0 && oppp < 6) {
                                printf("Media do gasto do departamento %d: %.2f\n\n\n", oppp, gasto(oppp, op));
                            } else {
                                printf("\n\nOpção Inválida\n\n");
                            }
                        break;}
                        case 2:{
                            printf("Escolha o departamento [1] [2] [3] [4] [5] [6]Todos: ");
                            scanf("%d", &oppp);
                            if (oppp > 0 && oppp < 6) {
                                printf("Gasto Total do departamento %d: %.2f\n\n\n\n\n\n", oppp, gasto(oppp, op));
                            } else {
                                if (oppp == 6) {
                                    printf("Gasto Total da Empresa: %.2f\n\n\n\n", gasto(oppp, op));
                                } else {
                                    printf("Opção Inválida");
                                }
                            }
                        break;}
                        case 3:{
                            do{
                                printf("\nRanking Crescente ou Decrescente? [1]Crescente [2]Decrescente\n");
                                scanf("%d", &op);
                                switch (op){
                                    case 1:{
                                        printf("Digite o departamento: ");
                                        scanf("%d", &oppp);
                                        system("clear");
                                        switch (oppp){
                                            case 1:{
                                                printf("Ranking em ordem crescente do departamento 1:\n\n\n");
                                                rankingsal(op, oppp);
                                            break;}
                                            case 2:{
                                                printf("Ranking em ordem crescente do departamento 2:\n\n\n");
                                                rankingsal(op, oppp);
                                            break;}
                                            case 3:{
                                                printf("Ranking em ordem crescente do departamento 3:\n\n\n");
                                                rankingsal(op, oppp);
                                            break;}
                                            case 4:{
                                                printf("Ranking em ordem crescente do departamento 4:\n\n\n");
                                                rankingsal(op, oppp);
                                            break;}
                                            case 5:{
                                                printf("Ranking em ordem crescente do departamento 5:\n\n\n");
                                                rankingsal(op, oppp);
                                            break;}
                                            default: printf("Opção Inválida");
                                        }
                                    break;}
                                    case 2:{
                                        switch (oppp){
                                            case 1:{
                                                printf("Ranking em ordem decrescente do departamento 1:\n\n\n");
                                                rankingsal(op, oppp);
                                            break;}
                                            case 2:{
                                                printf("Ranking em ordem decrescente do departamento 2:\n\n\n");
                                                rankingsal(op, oppp);
                                            break;}
                                            case 3:{
                                                printf("Ranking em ordem decrescente do departamento 3:\n\n\n");
                                                rankingsal(op, oppp);
                                            break;}
                                            case 4:{
                                                printf("Ranking em ordem decrescente do departamento 4:\n\n\n");
                                                rankingsal(op, oppp);
                                            break;}
                                            case 5:{
                                                printf("Ranking em ordem decrescente do departamento 5:\n\n\n");
                                                rankingsal(op, oppp);
                                            break;}
                                            default: printf("\nOpção Inválida");
                                        }
                                    break;}
                                    default: printf("Opção Inválida!\n\n");
                                }
                            }while(op>0);
                        break;}
                        case 4:{
                            do{
                                printf("Escolha o Departamento: [1] [2] [3] [4] [5] [0]Sair\n");
                                scanf("%d", &oppp);
                                if(oppp>0 && oppp<6){
                                        maiorsalario(oppp);
                                } else if (oppp==0){
                                } else printf("\nOpção Inválida!\n");
                            }while(oppp>0);
                        break;}
                        case 5:{
                            printf("[1]Folha de Pagamento Simples [2]Folha de Pagamento com Descontos\n");
                            scanf("%d", &op);
                            switch (op){
                                case 1:{
                                    printf("\nDigite o Departamento: ");
                                    scanf("%d", &oppp);
                                    switch (oppp){
                                        case 1:{
                                            recebervalores(oppp);
                                            folha_de_pagamento();
                                        break;}
                                        case 2:{
                                            recebervalores(oppp);
                                            folha_de_pagamento();
                                        break;}
                                        case 3:{
                                            recebervalores(oppp);
                                            folha_de_pagamento();
                                        break;}
                                        case 4:{
                                            recebervalores(oppp);
                                            folha_de_pagamento();
                                        break;}
                                        case 5:{
                                            recebervalores(oppp);
                                            folha_de_pagamento();
                                        break;}
                                        default: printf("\nDepartamento Inválido!");
                                    }
                                break;}
                                case 2:{
                                    printf("\nDigite o Departamento: ");
                                    scanf("%d", &oppp);
                                    switch(oppp){
                                        case 1:{
                                            recebervalores(oppp);
                                            folha_de_pagamento_tributos();
                                        break;}
                                        case 2:{
                                            recebervalores(oppp);
                                            folha_de_pagamento_tributos();
                                        break;}
                                        case 3:{
                                            recebervalores(oppp);
                                            folha_de_pagamento_tributos();
                                        break;}
                                        case 4:{
                                            recebervalores(oppp);
                                            folha_de_pagamento_tributos();
                                        break;}
                                        case 5:{
                                            recebervalores(oppp);
                                            folha_de_pagamento_tributos();
                                        break;}
                                        default: printf("\nDepartamento Inválido!");
                                    }
                                break;}                                    
                            }
                        break;}
                        case 0:{
                            op=0;
                        }
                        default:printf("\nOpção Inválida\n");
                    }
                    if(op>0){
                        printf("Deseja novamente?\n");
                        scanf("%d", &op);
                    }
                } while (op > 0);
                total = 0.0;
            break;}
            case 0:{
                saida = 0;
            break;}
            default: printf("Opção Inválida");
        }
    } while (saida>0);


    return (EXIT_SUCCESS);
}


