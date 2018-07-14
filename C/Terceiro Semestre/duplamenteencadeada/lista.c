#include <stdio.h>
#include <stdlib.h>

struct Node{
	int num;
	struct Node *prox;
	struct Node *ant;

};
typedef struct Node node;

int tam;

int isVazia(node *lista);
int menu(void);

void opcao(node *lista, int op);
void inicia(node *lista);
void insere(node *lista);
void removeDoInicio(node *lista);
void removeDoFim(node *lista);
void removeN(node *lista);
node *encontraElemento(node *lista, int n);
void exibe(node *lista);
void exibeInversamente(node *lista);
void liberaLista(node *lista);
void edita(node *lista);

node *criaNode();
node *getUltimoElemento(node *lista);

int main(void){
    node *lista = (node *) malloc(sizeof(node));
        int opt;

        do{
            opt=menu();
            opcao(lista,opt);
        }while(opt!=0);



    return (0);
}

int isVazia(node *lista){
	if(lista->prox == NULL)
		return 1;
	else
		return 0;
}

int menu(void)
{
	int opt;

	printf("\nEscolha a opcao\n");
	printf("0. Sair\n");
	printf("1. Zerar fila\n");
	printf("2. Exibir fila\n");
	printf("3. Adicionar Elemento na Fila\n");
	printf("4. Retirar Elemento do inicio da Fila\n");
	printf("5. Exibir fila inversamente\n");
        printf("6. Retirar Elemento do fim da Fila\n");
        printf("7. Retirar N da Fila\n");
	printf("Opcao: ");
	scanf("%d", &opt);

	return opt;
}

void opcao(node *lista, int op)
{
	node *tmp;
	switch(op){
		case 0:
			liberaLista(lista);
                        free(lista);
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
                    removeDoFim(lista);
                break;
                case 7:
                    removeN(lista);
                break;
		default:
			printf("Comando invalido\n\n");
	}
}

void inicia(node *lista){
	lista->prox = NULL;
	lista->ant = NULL;

	tam = 0;
}

void insere(node *lista){
	node *novo = criaNode();

	if(isVazia(lista)){
		lista->prox=novo;
        novo->ant=lista;
    }else{
		node *tmp = lista->prox;

		while(tmp->prox != NULL){
			tmp = tmp->prox;
		}
		tmp->prox = novo;
        novo->ant = tmp;
	}
	tam++;
}

void removeDoInicio(node *lista){

    if(isVazia(lista)){
        printf("Lista vazia, nao podemos remover nenhum elemento\n\n");
		return ;
    }else{
        node *proxNode = lista->prox;
        if(tam>1){
            lista->prox = proxNode->prox;
            lista->prox->ant = lista;
        }else{
            lista->prox=NULL;
        }
        tam--;
        printf("Retirado: %3d\n\n", proxNode->num);
        free(proxNode);
    }
}

void removeDoFim(node *lista){
    if(isVazia(lista)){
        printf("Lista vazia, não podemos remover nenhum elemento\n\n");
    } else {
        node *ultNode = getUltimoElemento(lista);
        node *penultimoNode = ultNode->ant;
        penultimoNode->prox = NULL;
        tam--;
        printf("Retirado: %3d\n\n", ultNode->num);
        free(ultNode);
    }
}

node *encontraElemento(node *lista, int n){
        if(isVazia(lista)){
            return lista;
        }
        else{
            node *tmp;
            tmp = lista->prox;

            while( tmp != NULL){
                if(tmp->num == n){
                    return tmp;
                }
                tmp = tmp->prox;
            }
        }    
}

void removeN(node *lista){
    if(isVazia(lista)){
        printf("Lista vazia, não podemos remover nenhum elemento\n\n");
        return;
    } else {
        int elem;
        printf("Qual elemento você deseja excluir? \n");
        scanf("%d", &elem);
        node *elemento = encontraElemento(lista, elem);
        node *ultNode = getUltimoElemento(lista);
        node *aux;
        node *tmp;
        if(elemento == lista){
            printf("Elemento não encontrado!\n\n");
        } else {
            if(elemento == ultNode){
                removeDoFim(lista);
            } else {
                for(aux = lista; aux->prox->num < elem; aux=aux->prox){
                    
                }
                tmp = aux->prox;
                aux->prox = tmp->prox;
                printf("Retirado: %3d\n\n", tmp->num);                
                free(tmp);
                tam--;
            }
        }
    }    
}

void exibe(node *lista){
	if(isVazia(lista)){
		printf("Lista vazia!\n\n");
		return ;
	}else{
        node *tmp;
        tmp = lista->prox;
        printf("lista :");
        while( tmp != NULL){
            printf("%5d", tmp->num);
            tmp = tmp->prox;
        }
        printf("\n        ");

        int count;
        for(count=0 ; count < tam ; count++){
            printf("  ^  ");
        }

        printf("\nOrdem:");
        for(count=0 ; count < tam ; count++){
            printf("%5d", count+1);
        }
    }
	printf("\n\n");
}

void exibeInversamente(node *lista){
	if(isVazia(lista)){
		printf("Lista vazia!\n\n");
		return ;
	}else{

        node *tmp;
        tmp = getUltimoElemento(lista);
        printf("Lista inversa:");
        while( tmp != NULL){
            if(tmp->ant!=NULL){
                printf("%5d", tmp->num);
                tmp = tmp->ant;
            }else{
                break;
            }
        }
        printf("\n \t\t");
        int count;
        for(count=tam ; count > 0; count--){
            printf("  ^  ");
        }

        printf("\nOrdem inversa:");
        for(count=tam ; count > 0; count--){
            printf("%5d", count);
        }
    }
	printf("\n\n");
}



void liberaLista(node *lista){
    if(!isVazia(lista)){
		node *proxNode,
			  *atual;

		atual = lista->prox;
		while(atual != NULL){
			proxNode = atual->prox;
			free(atual);
			atual = proxNode;
		}
	}

	tam=0;
}

node *criaNode(){
	node *novo=(node *) malloc(sizeof(node));
	novo->prox = NULL;
	if(!novo){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}else{
		printf("Novo elemento: "); scanf("%d", &novo->num);
		return novo;
	}
}

//void edita(node* lista){
//    if(isVazia(lista)){
//        printf("Lista vazia, não podemos remover nenhum elemento\n\n");
//        return;
//    } else {
//        int pos;
//        printf("Qual pos você deseja editar? \n");
//        scanf("%d", &pos);
//        node *elemento = encontraElemento(lista, pos);
//        node *aux;
//        node *tmp;
//        if(elemento == lista){
//            printf("Elemento não encontrado!\n\n");
//        } else {
//            if(elemento == ultNode){
//                removeDoFim(lista);
//            } else {
//                for(aux = lista; aux->prox->num < elem; aux=aux->prox){
//                    
//                }
//                tmp = aux->prox;
//                aux->prox = tmp->prox;
//                printf("Retirado: %3d\n\n", tmp->num);                
//                free(tmp);
//                tam--;
//            }
//        }
//    }    
//}

node *getUltimoElemento(node *lista){
        if(isVazia(lista)){
            return lista;
        }
        else{
            node *tmp;
            tmp = lista->prox;

            while( tmp != NULL){
                if(tmp->prox==NULL){
                    break;
                }
                tmp = tmp->prox;
            }
            return tmp;
        }
}
