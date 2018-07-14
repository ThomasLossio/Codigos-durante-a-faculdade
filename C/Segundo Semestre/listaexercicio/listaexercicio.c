/* 
 * File:   testes.c
 * Author: Geral
 *
 * Created on 7 de Setembro de 2014, 16:20
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
#define MAX 100
#define h 50
#define t 10

/*
 * 
 */

int i, j;
int v8[t], v82[t];
char r[5]="", alu[5]="";
int m18[7][7], op_add = 1, ML[7], MC[7];

void questao1(){
    int vetor[50], op=0;
    for (i=0; i<50; i++){
     vetor[i]=i+1;   
    }
    printf("Escolha Opção [0]Sair [1]Ordem correta [2]Ordem Inversa\n");
    scanf("%d", &op);
    switch(op){
        case 0:{
        break;}
        case 1:{
            for (i=0; i<50; i++){
                printf("%2d \n", vetor[i]);
            }
        break;}
        case 2: {
            for (i=49; i>=0; i--){
                printf("%2d \n", vetor[i]);
            }
        break;}
        default: printf("\nOpção Inválida\n");
    }   
}

void questao2(){
    int v2[10], m1, m2, m3;
    for (i=0;i<10;i++){
        printf("Digite um número: ");
        scanf("%d", &v2[i]);
    }
    m1 = v2[0];
    for (i=1; i<10;i++){
        if (v2[i]<m1){
            m1 = v2[i];
        }
    }
    for (i=0; i<10; i++ ){
        if (v2[i]!= m1){
            m2=v2[i];
        }
    }
    for (i=0; i<10; i++){
        if (v2[i]<m2 && v2[i]!=m1){ 
           m2=v2[i];
        }
    }
    for (i=0; i<10; i++){
        if (v2[i]<m3 && v2[i]!=m1 && v2[i]!=m2){
            m3=v2[i];
        }
    }
    printf("\n%d\n", m1);
    printf("%d\n" , m2);
    printf("%d ", m3);    
}

void questao3(){
    int matriz[3][3];
    float l1, l2, l3, c1, c2, c3; 
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matriz[i][j]=i+j;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    l1=(matriz[0][0]+matriz[0][1]+matriz[0][2])/3;
    printf("\nMedia Linha 1: %.2f", l1);
    l2=(matriz[1][0]+matriz[1][1]+matriz[1][2])/3;
    printf("\nMedia Linha 2: %.2f", l2);
    l3=(matriz[2][0]+matriz[2][1]+matriz[2][2])/3;
    printf("\nMedia Linha 3: %.2f", l3);
    c1=(matriz[0][0]+matriz[1][0]+matriz[2][0])/3;
    printf("\nMedia Coluna 1: %.2f", c1);
    c2=(matriz[0][1]+matriz[1][1]+matriz[2][1])/3;
    printf("\nMedia Coluna 2: %.2f", c2);
    c3=(matriz[0][2]+matriz[1][2]+matriz[2][2])/3;
    printf("\nMedia Coluna 3: %.2f", c3);
    printf("\n");
}

void questao5(){
    int m[3][3], i, j, det=0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite um número: ");
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
    det = (m[2][0] * m[0][1] * m[1][2] + m[0][0] * m[1][1] * m[2][2] + m[1][0] * m[2][1] * m[0][2]) - (m[2][2] * m[0][1] * m[1][0] + m[0][2] * m[1][1] * m[2][0] + m[1][2] * m[2][1] * m[0][0]);
    printf("\nDeterminante = %2d \n", det);
}

void questao6(){
    int matriz[5][5];
    int SL[5], SC[5]; 
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            matriz[i][j]=i+j;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
        for(i=0; i<5; i++){
            SL[i] = 0;
            SC[i] = 0;
            for(j=0; j<5; j++){
                SL[i] = SL[i] + matriz[i][j];
                SC[i] = SC[i] + matriz[j][i];
            }
        }      
        for(i=0; i<5; i++){
                printf("\nSoma Linhas %d: %3d e Soma Colunas %d: %3d\n", i+1, SL[i], i+1, SC[i]);
        }
}

void questao11(){
    int v11[20], aux;
    for(i=0; i<20; i++){
        v11[i]=i+1;
        printf("%d ", v11[i]);
    }
    for(i=0; i<10; i++){
        aux=v11[i];
        v11[i]=v11[19-i];
        v11[19-i]=aux;
    }
    printf("\n");
    for(i=0; i<20; i++){
        printf("%d ", v11[i]);
    }
}

void leMatriz (int m[][N], int linhas, int colunas) {
  int i, j;
  for (i = 0; i < linhas; i++) 
    for (j = 0; j < colunas; j++)
      scanf ("%d", &m[i][j]);
}

void imprimeMatriz (int m[][N], int linhas, int colunas) {
  int i, j;
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++)
      printf ("%d ", m[i][j]);
    printf ("\n");
  }
}

int devolveMaior (int m[][N], int n, int *lin, int *col) {
  int i, j;
  int maior = m[0][0];
  *lin = 0;
  *col = 0;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (maior < m[i][j]) {
        maior = m[i][j];
        *lin = i;
        *col = j;
      }
  return (maior);
}

void quadrado_magico(){
int l1, l2, l3, d1, d2, c1, c2, c3, mquadrado[3][3];
for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite um número: ");
            scanf("%d", &mquadrado[i][j]);
        }
    }   
for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%2d", mquadrado[i][j]);
        }
        printf("\n");
    }   
    l1=mquadrado[0][0]+mquadrado[0][1]+mquadrado[0][2];
    l2=mquadrado[1][0]+mquadrado[1][1]+mquadrado[1][2];
    l3=mquadrado[2][0]+mquadrado[2][1]+mquadrado[2][2];
    d1=mquadrado[0][0]+mquadrado[1][1]+mquadrado[2][2];
    d2=mquadrado[0][2]+mquadrado[1][1]+mquadrado[2][0];
    c1=mquadrado[0][0]+mquadrado[1][0]+mquadrado[2][0];
    c2=mquadrado[0][1]+mquadrado[1][1]+mquadrado[2][1];
    c3=mquadrado[0][2]+mquadrado[1][2]+mquadrado[2][2];
    printf("\n\n%2d %2d %2d %2d %2d %2d %2d %2d", l1, l2, l3, d1, d2, c1, c2, c3);
    if (l1==l2 && l2==l3 && l3==d1 && d1==d2 && d2==c1 && c1==c2 && c2==c3){
        printf("\n\nÉ um quadrado mágico!\n");
    } else{
        printf("\n\nNão é um quadrado mágico!\n");
    }
}

void ver() {
    printf("\nVetor 1: ");
    for (i = 0; i < t; i++) {
        printf("%d ", v8[i]);
    }
    printf("\nVetor 2: ");
    for (i = 0; i < t; i++) {
        if (v82[i] != -1) {
            printf("%d ", v82[i]);
        }
    }
    printf("\n");
}

void excluir() {
    for (i = 0; i < t; i++) {
        for (j = 0; j < t; j++) {
            if (j == i) {
            } else {
                if (v82[i] == v8[j]) {
                    v82[j] = -1;
                }
            }
        }
    }
    ver();
}

void add() {
    int cont = 1;

    for (i = 0; i < 5; i++) {
        printf("Digite a letra correta da questao %i\n", cont);
        scanf("%s", &r[i]);
        cont++;
    }
}

void comp() {
    
    int cont = 1, acerto = 0, total;
    for (i = 0; i < 5; i++) {
        printf("Qual a resposta da questao %i do aluno:\n", cont);
        scanf("%s", &alu[i]);
        cont++;
    }
    for (i = 0; i < 5; i++) {
        if (alu[i]== r[i]) {
            acerto++;
        }
    }
    total = (acerto * 2);

    if (total >= 6) {
        printf("\n\nNumero de questoes acertadas: %d",acerto);
        printf("Nota do Aluno: %d\n",total);
        printf("\nAluno Aprovado\n\n");
    } else {
        if (total < 6) {
            printf("\n\nNumero de questoes acertadas: %d\n",acerto);
            printf("Nota do Aluno: %d",total);
            printf("\nAluno Reprovado\n\n");
        }
    }
}

void questao16() {
    int matriz[5][5];
    int i, j;
    int valor = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("DIGITE O VALOR\n");
            scanf("%d", &matriz[i][j]);
        }
    }


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            valor = matriz[i][j];
            if (valor >= 0) {
                printf("%2d", valor);
            } else {
                valor = ((-1 * valor));
                printf("%2d", valor);
            }
        }
        printf("\n");
    }
}

void add18() {
    if (op_add == 1) {
        for (i = 0; i < 7; i++) {
            for (j = 0; j < 7; j++) {
                printf("Digite um numero: ");
                scanf("%d", &m18[i][j]);
            }
        }
        op_add = 0;
    }
}

void MediaL() {
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%4d ", m18[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (ML[i] < m18[i][j]) {
                ML[i] = m18[i][j];
            }
        }
    }
    for (i = 0; i < 7; i++) {
        printf("O maior da linha %2d é: %4d\n", i, ML[i]);
    }
    printf("\n");
}

void MediaC() {
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%4d ", m18[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (MC[i] < m18[j][i]) {
                MC[i] = m18[j][i];
            }
        }
    }
    for (i = 0; i < 7; i++) {
        printf("O maior da coluna %2d é: %4d\n", i, MC[i]);
    }
    printf("\n");
}

void questao14(){
    int conja[50], conjb[50], aux[50];
    int i=0,b=49, j=0;
    
    printf("Insira os numeros:\n");
    for (i = 0; i < 50; i++) {
        scanf("%d", &conja[i]);
    }
    printf("\n");
    for (b = 0; b < 50; b++) {
        scanf("%d", &conjb[b]);
    }
    printf("\nConjunto A inserido:");
    for (i=0;i<50;i++){
    printf(" %d", conja[i]);
    }
    printf("\n");
    printf("\nConjunto A novo:");
    for (i=0;i<50;i++){
        aux[j] = conja[i];
        conja[i] = conjb[b];        
        b--;
        j++;
        printf("%d ", conja[i]);
    }
    printf("\n");    
    printf("\nConjunto B inserido:");
    for (b=0;b<50;b++){
    printf(" %d", conjb[b]);
    }
    printf("\n");    
    printf("\nConjunto B novo:");
    b=0;
    for (j=49;j>=0;j--){
        conjb[b] = aux[j];        
        printf("%d ", conjb[b]);
    }
}

int main() {
    int op;
    do{
        printf("\n\nEscolha a questão com algum dos seguintes números: \n");
        printf("[1] [2] [3] [4] [5] [6] [7] [8] [9] [10] [11] [12] [13] [14] [15] [16] [17] [18] [19] [0]Sair\n");
        scanf("%d", &op);
        system("clear");
        switch (op){
            case 1:{
                questao1();    
            break;}
            case 2:{
                questao2();
            break;}
            case 3:{
                questao3();
            break;}
            case 4:{
                char palavra[h], invertida[h];
                int i, tam;
                printf("Digite uma palavra: ");
                scanf("%s", palavra);
                tam = strlen(palavra) - 1; 
                for (i = 0; palavra[i] != '\0'; i++) { 
                    invertida[tam] = palavra[i];
                    tam--;
                }
                invertida[i] = '\0';
                if (strcmp(palavra, invertida) == 0) {
                    printf("É palindromo!\n");
                } else {
                    printf("Não é palindromo\n");
                }     
            break;}
            case 5:{
                questao5();
            break;}
            case 6:{
                questao6();
            break;}
            case 7:{
                char nome[100] = "", nomemeio[100] = "", sobrenome[100] = "", aux[100] = "", aux2[100] = "";
                printf("Digite Seu Primeiro Nome: ");
                scanf("%s", nome);
                printf("Digite Seu Nome do Meio: ");
                scanf("%s", nomemeio);
                printf("Digite Seu Sobrenome: ");
                scanf("%s", sobrenome);
                strcpy(aux,nome);
                aux[1] = '\0';
                strcpy(aux2,nomemeio);
                aux2[1] = '\0';
                printf("\n\n\"%s, %s.%s.\"\n", sobrenome, aux, aux2);
            break;}
            case 8:{
                for (i = 0; i < t; i++) {
                    printf("Digite um numero: ");
                    scanf("%d", &v8[i]);
                }
                for (i = 0; i < t; i++){
                    v82[i] = v8[i];
                }
                excluir();
                printf("\n");                
            break;}
            case 9:{
                int n, i;
                int linha, coluna;
                int A[N][N];
                int maior;
                int flagprimeira=0;
                printf ("Digite a dimensao da matriz: ");
                scanf ("%d", &n);
                leMatriz (A, n, n);
                for (i = 0; i < (n*n); i++) {
                  maior = devolveMaior(A, n, &linha, &coluna);
                  if(flagprimeira==0){
                      printf("\n");
                      flagprimeira++;
                  }
                  printf ("%d em (%d, %d)\n", maior, linha, coluna);
                  A[linha][coluna] = -1;
                }
                flagprimeira=0;                
            break;}
            case 10:{
                int matriz[10][10], i, j, somap = 0, somas = 0;
                float mediap, medias;
                for (i = 0; i < 10; i++){
                    for (j = 0; j < 10; j++) {
                        printf("Informe o elemnto matriz[%d][%d]: ", i, j);
                        scanf("%d", &matriz[i][j]);
                    }
                }
                for (i = 0; i < 10; i++) {
                    somap += matriz[i][i];
                    mediap = (float) somap / 10;
                }
                for (j = 0; j < 10; j++) {
                    somas += matriz[j][j];
                    medias = (float) somas / 10;
                }
                    printf("\nMédia dos elemntos da diagonal principal: %.2f", mediap);
                    printf("\nMédia dos elemntos da diagonal secundária: %.2f", medias);
            break;}
            case 11:{
                questao11();
            break;}
            case 12:{
                int retur_menu = 1, op_add = 1, opcao_menu;
                while (retur_menu == 1) {
                    if (op_add == 1) {
                        add();
                        op_add = 0;
                    }
                    printf("\n");
                    printf("[1]Mudar respostas | [2]verificar Aluno\n[3]Sair\n");
                    scanf("%i", &opcao_menu);
                    system("clear");
                    switch (opcao_menu) {
                        case 1:
                        {
                            add();
                            break;
                        }
                        case 2:
                        {
                            comp();
                            break;
                        }
                        case 3:
                        {
                            retur_menu = 0;
                            break;
                        }
                    }
                }
            break;}
            case 13:{
                int k[15], p[15], numeroCorrente, contador, num, x;
                for (i=0; i<15; i++){
                    printf("Digite um número: ");
                    scanf("%d", &k[i]);
                }

                for (i=0;i<15;i++){
                  num=k[i];
                  contador=0;
                  numeroCorrente=1;
                  while (numeroCorrente<=num){
                  contador += num%numeroCorrente == 0? 1:0;
                  numeroCorrente++;
                 }
                    if (contador <= 2){
                        x++;
                        p[x] = k[i];
                        printf("Primo: %d\n", p[x]);
                    }
                }                
            break;}
            case 14:{
                questao14();
            break;}
            case 15:{
                int m15[6][6], a, flag=0;
                for(i=0; i<6; i++){
                    for(j=0; j<6; j++){
                        m15[i][j]=i+j;
                        printf("%4d", m15[i][j]);
                    }
                    printf("\n");
                }
                printf("Por quanto você quer multiplicar os elementos da matriz? ");
                scanf("%d", &a);
                for(i=0; i<6; i++){
                    for(j=0; j<6; j++){
                        m15[i][j]=m15[i][j] * a;
                        if(flag==0){
                            printf("Matriz multiplicada por %d: \n", a);
                            flag++;
                        }
                        printf("%4d", m15[i][j]);
                    }
                    printf("\n");
                }                   
            break;}
            case 16:{
                questao16();
            break;}
            case 17:{
                int m17[10][10], maior17, lmax, menor17;
                for(i=0; i<10; i++){
                    for(j=0; j<10; j++){
                        m17[i][j]=i+j;
                        printf("%2d ", m17[i][j]);
                    }
                    printf("\n");
                }
                maior17=m17[0][0];
                lmax=0;
                for(i=0; i<10; i++){
                    for(j=0; j<10; j++){
                        if(m17[i][j]>maior17){
                            lmax=i;
                        }
                    }
                }
                menor17=m17[lmax][0]; 
                for(j=0; j<10; j++){
                    if(m17[lmax][j]<menor17){
                        menor17=m17[lmax][j];
                    }
                }
                printf("Minimax da matriz é %d e está na linha %d", menor17, lmax+1);
            break;}
            case 18:{
                add18();
                int retur_menu = 1, opcao_menu = 0;
                while (retur_menu == 1) {
                    printf("[1]Media das Linhas | [2]Media das Colunas \n[3]Trocar matriz | [4]Sair\n");
                    scanf("%d", &opcao_menu);
                    system("clear");
                    switch (opcao_menu) {
                        case 1: MediaL();
                            break;
                        case 2: MediaC();
                            break;
                        case 3: op_add = 1, add18();
                            break;
                        case 4: retur_menu = 0;
                            break;
                        default: break;
                    }
                }                
            break;}
            case 19:{
                quadrado_magico();
            break;}
        }

    }while (op!=0);    
    return (EXIT_SUCCESS);
}

