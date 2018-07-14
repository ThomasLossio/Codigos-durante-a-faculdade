/* 
 * File:   listaexercicios4.c
 * Author: Geral
 *
 * Created on 20 de Novembro de 2014, 19:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
/*int m=0, n=0, i, j;
int **matriz;

int alocar(int l, int c){
    matriz = (int **)malloc(sizeof(int *) *l);
    for (i=0; i<l; i++){
        matriz[i] = (int *)malloc(sizeof(int) *c);
    }
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            matriz[i][j] = i+j;
        }
    }
    return **matriz;
}
void liberar(int l, int c){
    for(i=0; i<l ; i++){
        free(matriz[i]);
    }
        free(matriz);
}

int main(int argc, char** argv) {
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &n);
    alocar(m, n);
    printf("Matriz feita:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Liberando a matriz:\n");
    liberar(m, n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}
*/


/*typedef struct{
    char nome[50];
    char data[50];
    char cpf[15];
}pessoa;

pessoa preenche(pessoa *pessoa){
    printf("Digite o nome: ");
    scanf("%s", pessoa->nome);
    printf("\nDigite data de nascimento(dd/mm/aaaa): ");
    scanf("%s", pessoa->data);    
    printf("\nDigite o cpf: ");
    scanf("%s", pessoa->cpf);
}

void imprima(pessoa *pessoa){
    printf("\n\nNome: %s", (pessoa->nome));
    printf("\n\nData Nascimento: %s", (pessoa->data));
    printf("\n\nCPF: %s", (pessoa->cpf));
}

int main(){
    pessoa *p;
    p = (pessoa *)malloc(sizeof(pessoa));
    preenche(p);
    imprima(p);
    printf("\n");
    return 0;
}
 */

/*int **matrizA, **matrizB, **matrizC;
int m, n, i, j;

int main(){
    printf("Digite o número de linhas: ");
    scanf("%d", &m);
    printf("Digite o número de colunas: ");
    scanf("%d", &n);
    matrizA = (int **)malloc(sizeof(int *) * m);
    for(i=0; i<m; i++){
        matrizA[i] = (int *)malloc(sizeof(int) * n);
    }
    matrizB = (int **)malloc(sizeof(int *) * m);
    for(i=0; i<m; i++){
        matrizB[i] = (int *)malloc(sizeof(int) * n);
    }
    matrizC = (int **)malloc(sizeof(int *) * m);
    for(i=0; i<m; i++){
        matrizC[i] = (int *)malloc(sizeof(int) * n);
    }
    printf("Matriz A: \n\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            matrizA[i][j] = i+j;
            printf("%4d ", matrizA[i][j]);
        }
        printf("\n");
    }        
    printf("\n\n");
    printf("Matriz B: \n\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            matrizB[i][j] = matrizA[i][j] * 2;
            printf("%4d ", matrizB[i][j]);
        }
        printf("\n");
    }    
    printf("\n\n");
    printf("Matriz C:\n\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%4d ", matrizC[i][j]);
        }
        printf("\n");
    }    
    return 0;
}

int **matriz, *vp, *vs;
int i, j, n=11;

int main(){
    while (n<1 || n>10){
        printf("Digite o número de linhas e colunas: ");
        scanf("%d", &n);
        if(n<1 || n>11){
            printf("\n\nMínimo 1 e Máximo 10, digite novamente!\n\n");
        }
    }
    matriz = (int **)malloc(sizeof(int *) * n);
    vp = (int *)malloc(sizeof(int)*n);
    vs = (int *)malloc(sizeof(int)*n);
    for(i=0; i<n; i++){
        matriz[i] = (int *)malloc(sizeof(int) * n);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            matriz[i][j] = i+j;
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<n; i++){
        vp[i]=matriz[i][i];
    }
    
    for(i=0, j=n-1; i<n; i++, j--){
        vs[i]=matriz[i][j];
    }
    int menorp=vp[0];
    for(i=1; i<n; i++){
        if(vp[i]<menorp){
            menorp=vp[i];
        }
    }
    int maiorp=vp[0];
    for(i=1; i<n; i++){
        if(vp[i]>maiorp){
            maiorp=vp[i];
        }
    }
    int menors=vs[0];
    for(i=1; i<n; i++){
        if(vs[i]<menors){
            menors=vs[i];
        }
    }
    int maiors=vs[0];
    for(i=1; i<n; i++){
        if(vs[i]>maiors){
            maiors=vs[i];
        }
    }
    int somap=0;
    for(i=0; i<n; i++){
        somap = somap + vp[i];
    }
    int somas=0;
    for(i=0; i<n; i++){
        somas = somas + vs[i];
    }    
    int somat=0;
    if(somap>=somas){
        somat=somap-somas;
    } else {
        somat=somas-somap;
    }
    printf("\n\nMenor Valor da Diagonal Principal: %d", menorp);
    printf("\nMaior Valor da Diagonal Principal: %d", maiorp);
    printf("\n\nMenor Valor da Diagonal Secundária: %d", menors);
    printf("\nMaior Valor da Diagonal Secundária: %d", maiors);
    printf("\n\nA diferença entre as somas das diagonais é igual a: %d\n\n", somat);
    
    return 0;
}
*/
#include <string.h>
#include <string.h>
#define MAX 100
int i, k;
/*
 * 
 */

typedef struct{
    int chave;
    char info[50];
} elem;

typedef struct{
    int nelem;
    elem A[MAX];
} pilha;

void Inicializar(pilha *P){
    P->nelem=0;
}

int Lista_vazia(pilha *P){
    if(P->nelem==0){
        return 1;
    } else {
        return 0;
    }
}

int Lista_cheia(pilha *P){
    if(P->nelem==MAX){
        return 1;
    } else {
        return 0;
    }
}

int Lista_cheia2(pilha *P2){
    if(P2->nelem==MAX+1){
        return 1;
    } else {
        return 0;
    }
}

int Inserir(char nome[50], pilha *P){
    if(Lista_cheia(P)==1){
        return 0;
    } else {
        strcpy(P->A[P->nelem].info,nome);
        P->nelem++;
        return 1;
    }
}

void Remover(pilha *P){
    if(Lista_vazia(P)==0){
        strcpy(P->A[P->nelem].info,"");
        P->nelem--;
    }
}

int inserirp2(pilha *p1, pilha *p2, int pos){
    int j;
    if(Lista_cheia2(p2)==1){
        return 0;
    } else {
        if(Lista_vazia(p2)==1){
            for(i=p1->nelem-1, j=0; i>pos; i--, j++){
                strcpy(p2->A[j].info,p1->A[i].info);
                p2->nelem++;
                Remover(p1);
            }
            for(i=p2->nelem-1, j=pos; i>=0; i--, j++){
                strcpy(p1->A[j].info,p2->A[i].info);
                p1->nelem++;
            }
            return 1;
        } else {
            Remover(p2);
            inserirp2(p1, p2, pos);
        }
    }
}

int Buscar(char nome[50], pilha *P){
        for(k=0; k<P->nelem; k++){
            if(strcmp(nome,P->A[k].info)==0){
                return k;
            }
        }
        return -1;

}

int main(){
    pilha *p;
    p = (pilha *)malloc(sizeof(pilha)*2);
    Inicializar(&p[1]);
    Inicializar(&p[2]);
    char *nome;
    nome = (char *)malloc(sizeof(char)*50);
    int op=0;
    do{
        system("clear");
        printf("=====================================================================\n");
        printf("[1]Inserir\n[2]Remover\n[3]Listagem\n");
        printf("=====================================================================\n");
        scanf("%d", &op);
        switch(op){
            case 1:{              
                printf("Digite um nome: ");
                getchar();
                gets(nome);
                printf("\nNome Inserido: %s\n\n", nome);
                if(Inserir(nome, &p[1])==0){
                    printf("\nNão foi possível cadastrar!\n\n");
                } else {
                    printf("\nNome Inserido: %s\n\n", nome);
                }
            break;}
            case 2:{
                printf("Digite um nome para remover: ");
                getchar();
                gets(nome);
                if(Buscar(nome, &p[1])!=-1){
                    printf("%d", k);
                    if(inserirp2(&p[1], &p[2], k)==1){
                        Remover(&p[1]);
                        printf("\nNome removido com sucesso!\n\n");
                    }
                } else {
                    printf("\nNome não Encontrado!\n\n");
                }
            break;}
            case 3:{
                printf("\nPilha 1:\n\n");
                for(i=0; i<p[1].nelem; i++){
                    printf("%d- %s\n", i+1, p[1].A[i].info);
                }
                printf("\nPilha 2:\n\n");
                for(i=0; i<p[2].nelem; i++){
                    printf("%d- %s\n", i+1, p[2].A[i].info);
                }
                break;}
        }
        printf("\nDeseja Mais Alguma Coisa? [1]Sim/[0]Não\n");
        scanf("%d", &op);
    } while(op>0);
    return (EXIT_SUCCESS);
}
