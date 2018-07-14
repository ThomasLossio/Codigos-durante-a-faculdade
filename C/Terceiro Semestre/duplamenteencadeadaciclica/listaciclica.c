//edimossilva@gmail.com mandar o assunto como FAP-AED2
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int num;
    struct Node *prox;
    struct Node *ant;

};
typedef struct Node node;

int tam, op;

int isVazia(node *lista);
int menu(void);

void opcao(node *lista, int op);
void inicia(node *lista);
void insere(node *lista);
void removeDoInicio(node *lista);
void exibe(node *lista);
void exibeciclamente(node* lista);
void exibeInversamente(node *lista);
void liberaLista(node *lista);

node *criaNode();
node *getUltimoElemento(node *lista);

int main(void) {
    node *lista = (node *) malloc(sizeof (node));

    int opt;

    do {
        opt = menu();
        opcao(lista, opt);
    } while (opt);
//    liberaLista(lista);
//    free(lista);

    return (EXIT_SUCCESS);
}

int isVazia(node *lista) {
    if (lista->prox == NULL && lista->ant == NULL)
        return 1;
    else
        return 0;
}

int menu(void) {
    int opt;

    printf("\nEscolha a opcao\n");
    printf("0. Sair\n");
    printf("1. Zerar fila\n");
    printf("2. Exibir fila\n");
    printf("3. Adicionar Elemento na Fila\n");
    printf("4. Retirar Elemento do inicio da Fila\n");
    printf("5. Exibir fila inversamente\n");
    printf("6. Exibir fila ciclicamente\n");

    printf("Opcao: ");
    scanf("%d", &opt);

    return opt;
}

void opcao(node *lista, int op) {
    node *tmp;
    switch (op) {
        case 0:
            liberaLista(lista);
            break;

        case 1:
            liberaLista(lista);
            inicia(lista);
            break;

        case 2:
            exibe(lista);
            break;

        case 3:
            insere(lista);
            break;

        case 4:
            removeDoInicio(lista);
            break;
        case 5:
            exibeInversamente(lista);
            break;
        case 6:
            exibeciclamente(lista);
            break;
        default:
            printf("Comando invalido\n\n");
    }
}

void inicia(node *lista) {
    lista->prox = NULL;
    lista->ant = NULL;

    tam = 0;
}

void insere(node *lista) {
    node *novo = criaNode();

    if (isVazia(lista)) {
        lista->prox = novo;
        novo->ant = lista;
        novo->prox = lista;
        lista->ant = novo;
    } else {
        node *tmp = lista->prox;

        while (tmp->prox != lista) {
            tmp = tmp->prox;
        }
        tmp->prox = novo;
        novo->ant = tmp;
        novo->prox = lista;
        lista->ant = novo;
    }
    tam++;
}

void removeDoInicio(node *lista) {

    if (isVazia(lista)) {
        printf("Lista vazia, nao podemos remover nenhum elemento\n\n");
        return;
    } else {
        node *proxNode = lista->prox;
        if (tam > 1) {
            lista->prox = proxNode->prox;
            lista->prox->ant = lista;
        } else {
            lista->prox = NULL;
        }
        tam--;
        printf("Retirado: %3d\n\n", proxNode->num);
        free(proxNode);
    }
}

void exibe(node *lista) {
    if (isVazia(lista)) {
        printf("Lista vazia!\n\n");
        return;
    } else {
        node *tmp;
        tmp = lista->prox;
        printf("lista :");
        while (tmp != lista) {
            printf("%5d", tmp->num);
            tmp = tmp->prox;
        }
        printf("\n        ");

        int count;
        for (count = 0; count < tam; count++) {
            printf("  ^  ");
        }

        printf("\nOrdem:");
        for (count = 0; count < tam; count++) {
            printf("%5d", count + 1);
        }
    }
    printf("\n\n");
}

void exibeciclamente(node *lista) {
    op = 1;
    int cont = 1;
    node *tmp = lista->prox;
    if (isVazia(lista)) {
        printf("Lista vazia!\n\n");
        return;
    } else {
        while (op == 1) {
            printf("%d\n", tmp->num);
            if (tmp->prox == lista) {
                printf("ID - %d", cont);
                cont = 1;
            } else {
                printf("ID - %d", cont);
                cont++;
            }
            tmp = tmp->prox;
            if(tmp == lista){
                tmp = tmp->prox;
            }
            printf("Deseja continuar: [1]Sim | [2]Nao");
            scanf("%d", &op);
        }
    }
}

void exibeInversamente(node *lista) {
    if (isVazia(lista)) {
        printf("Lista vazia!\n\n");
        return;
    } else {

        node *tmp;
        tmp = getUltimoElemento(lista);
        printf("Lista inversa:");
        while (tmp != lista) {
            printf("%5d", tmp->num);
            tmp = tmp->ant;
        }
        printf("\n \t\t");
        int count;
        for (count = tam; count > 0; count--) {
            printf("  ^  ");
        }

        printf("\nOrdem inversa:");
        for (count = tam; count > 0; count--) {
            printf("%5d", count);
        }
    }
    printf("\n\n");
}

void liberaLista(node *lista) {
    if (!isVazia(lista)) {
        node *proxNode,
                *atual;

        atual = lista->prox;
        while (atual != NULL) {
            proxNode = atual->prox;
            free(atual);
            atual = proxNode;
        }
    }

    tam = 0;
}

node *criaNode() {
    node *novo = (node *) malloc(sizeof (node));
    novo->prox = NULL;
    novo->ant = NULL;
    if (!novo) {
        printf("Sem memoria disponivel!\n");
        exit(1);
    } else {
        printf("Novo elemento: ");
        scanf("%d", &novo->num);
        return novo;
    }
}

node *getUltimoElemento(node *lista) {
    if (isVazia(lista)) {
        return lista;
    } else {
        node *tmp;
        tmp = lista->prox;

        while (tmp != NULL) {
            if (tmp->prox == NULL) {
                break;
            }
            tmp = tmp->prox;
        }
        return tmp;
    }
}
