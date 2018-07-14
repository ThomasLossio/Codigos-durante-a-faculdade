#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void folha_de_pagamento_tributos() {
    int id = 0, n_dependentes[50];
    float salario[50], inss=0.0, fgts=0.0, descontos=0.0, salario_acres[50];
    char func[50][20];
    strcpy(func[0],"Thomas");
    salario[0]=724.00;
    n_dependentes[0]=5;
    salario_acres[0]=salario[0]+100;
    printf("\nDigite a matricula do func: ");
    scanf("%d", &id);
    
    if (salario[id] < 1707.52){
        inss = salario[id] * 0.08;
    } else if(salario[id] < 1845.87){
        inss = salario[id] * 0.09;
    } else if(salario[id] < 3691.74){
        inss = salario[id] * 0.11;
    }
    
    fgts = salario[id]+(salario[id]*0.08);
    descontos = inss + fgts;
    
    printf("\n--------------------------------------------------------------------------\n");
    printf("\t\t\tFOLHA DE PAGAMENTO");
    printf("\n--------------------------------------------------------------------------\n");
    printf("Empresa: ABC");
    printf("\nFuncionario: %.4d - %s\t\t\t\tRefer. a: Outubro/2014", id, func[id]);
    printf("\nNº Dependentes: %d", n_dependentes[id]);
    printf("\n--------------------------------------------------------------------------\n");
    printf("\tDescricao\t|\tVencimentos\t|\tDescontos");
    printf("\n--------------------------------------------------------------------------\n");
    printf("Salario\t\t\t\t\t%.2f", salario[id]);
    printf("\nValor dependentes\t\t\t%.2f",n_dependentes[id]*20);
    printf("\nDesconto FGTS\t\t\t\t\t\t\t%.2f", fgts);
    printf("\nDesconto INSS\t\t\t\t\t\t\t%.2f",inss);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n\t\t\t\t\t%.2f\t\t\t%.2f", salario_acres[id], inss + fgts);
    printf("\n\t\t\t\t\tSAL. LIQUIDO:\t\t%.2f", salario_acres[id] - (inss + fgts));
    printf("\n--------------------------------------------------------------------------\n");
}

int main(){
    folha_de_pagamento_tributos();
}