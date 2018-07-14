/* 
 * File:   main.c
 * Author: Geral
 *
 * Created on 20 de Fevereiro de 2015, 18:43
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Celula {
    int conteudo;
    struct Celula *dir;
    struct Celula *esq;
} celula;

int cont = 0;

void Insere(int x, celula **raiz) {
    if (*raiz == NULL) {
        *raiz = (celula*) malloc(sizeof (celula));
        (*raiz)->conteudo = x;
        (*raiz)->dir = (*raiz)->esq = NULL;
    } else {
        if (x > (*raiz)->conteudo) {
            Insere(x, &(*raiz)->dir);
        } else {
            Insere(x, &(*raiz)->esq);
        }
    }
}

int contarNos(celula **raiz) {
    if (*raiz == NULL) {
        return 0;
    } else {
        cont++;
        contarNos(&(*raiz)->dir);
        contarNos(&(*raiz)->esq);
    }
}

int altura(celula *raiz) {
    if (raiz == NULL) {
        return 0;
    }
    if (raiz->dir == NULL && raiz->esq == NULL) {
        return 0;
    } else {
        if (altura(raiz->esq) > altura(raiz->dir)) {
            return 1 + altura(raiz->esq);
        } else return 1 + altura(raiz->dir);
    }
}

int menor(celula *raiz) {
    if (raiz == NULL) {
        return 0;
    }
    if (raiz->esq == NULL) {
        return raiz->conteudo;
    }
    menor(raiz->esq);
}

int maior(celula *raiz) {
    if (raiz == NULL) {
        return 0;
    }
    if (raiz->dir == NULL) {
        return raiz->conteudo;
    }
    maior(raiz->dir);
}

int contarFolhas(celula *raiz) {
    if (raiz == NULL) {
        return 0;
    } else if (raiz->dir == NULL && raiz->esq == NULL) {
        return 1;
    } else {
        return contarFolhas(raiz->esq) + contarFolhas(raiz->dir);
    }
}

int remover(celula **raiz, int x) {
    if (*raiz == NULL) {
        return 0;
    }
    if (x > (*raiz)->conteudo) {

        remover(&(*raiz)->dir, x);
    } else if (x < (*raiz)->conteudo) {
        remover(&(*raiz)->esq, x);
    } else {
        celula *aux;
        aux = (*raiz);
        if ((*raiz)->dir == NULL && (*raiz)->esq == NULL) {//se eh folha
            free(aux);
            *raiz = NULL;
            return 1;
        } else {
            if ((*raiz)->dir == NULL) {
                (*raiz) = aux->esq;
                free(aux);
                return 1;
            } else if ((*raiz)->esq == NULL) {
                (*raiz) = aux->dir;
                free(aux);
                return 1;
            }
        }

    }
}

void imprime(celula *raiz) {
    if (raiz != NULL) {
        printf("%d\n", raiz->conteudo);
        imprime(raiz->dir);
        imprime(raiz->esq);
    }
}

int main(int argc, char** argv) {

    celula *raiz;
    raiz = NULL;
    int op=1, inserir=0, remove=0;
    do{
        printf("[1]Inserir\n[2]Altura\n[3]Conta Nós\n[4]Conta Folhas\n[5]Maior\n[6]Menor\n[7]Remover\n[8]Imprimir\n[0]Sair\n\n");
        scanf("%d", &op);
        switch(op){
            case 1:{
                printf("Número a inserir: ");
                scanf("%d", &inserir);
                Insere(inserir, &raiz);
                printf("Foi inserido!\n");
            break;}
            case 2:{
                printf("Altura: %d\n", altura(raiz));
            break;}
            case 3:{
                cont=0;
                contarNos(&raiz);
                printf("Números de Nós: %d\n", cont);
            break;}
            case 4:{
                printf("Número de folhas: %d\n", contarFolhas(raiz));
            break;}
            case 5:{
                printf("O Maior é: %d\n", maior(raiz));
            break;}
            case 6:{
                printf("O Maior é: %d\n", menor(raiz));                
            break;}
            case 7:{
                printf("Número a remover: ");
                scanf("%d", &remove);
                remover(&raiz, remove);
                printf("Foi Removido!\n");
            break;}
            case 8:{
                printf("Conteúdo da raiz: \n");
                imprime(raiz);
            break;}
            case 0:{
                printf("Saida Efetuada com Sucesso!\nVlw! Flw!\n\n\n");
            break;}
            default: printf("Opção Inválida!");
        }
    }while(op!=0);
    return (EXIT_SUCCESS);
}
