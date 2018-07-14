/* 
 * File:   Lista_encadeada.c
 * Author: Geral
 * Created on 4 de Dezembro de 2014, 18:43
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Celula {
    int conteudo;
    struct Celula *prox;
}celula;

void inserir (int x, celula *p){
    celula *nova;
    nova = (celula *) malloc (sizeof (celula));
    nova->conteudo = x;
    nova->prox = p->prox;
    p->prox = nova;
}
void Inserir_Final (int x, celula *p){
    celula *nova;
    nova = (celula *) malloc (sizeof (celula));
    nova->conteudo=x;
    nova->prox=NULL;
    if (p->prox==NULL){
        p->prox=nova;
    }else{
        celula *aux;
        for (aux = p->prox; aux->prox != NULL; aux= aux->prox){
        }
        aux->prox=nova;
    }
}
void Iserir_Ordenado(int x, celula *p){
    celula *nova;
    nova = (celula *) malloc (sizeof (celula));
    nova->conteudo=x;
    nova->prox=NULL;
    if(p->prox==NULL){
        p->prox=nova;
        printf("Oi\n\n");        
    } else {
        celula *aux;
        for (aux = p; (aux->prox->conteudo) < (nova->conteudo); aux=aux->prox){
            
        }
        nova->prox = aux->prox;
        aux->prox = nova;
    }
}

void imprime(celula *ini){
    celula *p;
    for (p= ini->prox; p != NULL; p= p->prox){
        printf("%d\n", p->conteudo);
    }
}
int *busca(int x, celula *ini){
    celula *p;
    for (p=ini->prox; p != NULL; p=p->prox){
        if (p->prox->conteudo == x){
            return p->prox;
        }
    }
    return NULL;
}

int *remover( celula *ini){
   celula *aux;
   celula *p;
   
   if (p==NULL){
        return 0;
   } else {
        aux = p->prox;
        p->prox=aux->prox;

        free(aux);
        return 1;
   }
}

int *removerordenado(int x, celula *p){
    celula *aux;
    for(aux = p; aux->prox!=NULL; aux = aux->prox){
        if(aux->prox->conteudo==x){
            celula *temp = aux->prox;
            aux->prox = temp->prox;
            free(temp);
            return 1;
            
        }
    }
    return 0;
}

int main(int argc, char** argv) {
    celula *p;
    //inserir(10, p);
    //inserir(19, p);
    Iserir_Ordenado(30, p);
    Iserir_Ordenado(20, p);
    Iserir_Ordenado(10, p);
    imprime(p);
    printf("\n\n");
    //busca (10, p);
    //Inserir_Final(9, p);
    //Inserir_Final(12, p);
    //inserir(5, p);
    //imprime(p);
   // remover (busca (10, p));
   // imprime(p);
    return (EXIT_SUCCESS);
}

