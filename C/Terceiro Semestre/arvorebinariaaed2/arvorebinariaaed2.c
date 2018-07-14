#include <stdio.h>
#include <stdlib.h>

//fazer grau de saida de um elemento escolhido
//grau de saída da árvore
//encontrar o pai, tio, irmão e avô de um número
//dizer se a árvore está ordenada
//altura
//altura AVL

struct Arvore{
	int num;
	struct Arvore *esq;
	struct Arvore *dir;
};

typedef struct Arvore arvore;

int menu(void);
void opcao(arvore *arv, int op);

int isVazia(arvore *arvore);
int isFolha(arvore *arv);
int isCheia(arvore *arvore);
arvore *existe(int num, arvore *arvore);
int altura(arvore *arv, int h);
int alturaExclusiva(arvore *arv, int h);
int Balancear(arvore *arv);
void exibePreOrdem(arvore *arvore,int nivel);
void exibeInOrdem(arvore *arvore,int nivel);
void exibePosOrdem(arvore *arvore,int nivel);
void liberaArvore(arvore *arvore);
void exibeFilhos(arvore *arv);
//arvore *exibePai(arvore *arv, int num);
arvore *exibeAvo(arvore *arv, int num);

arvore *criaArvore();
arvore *criaArvoreNum(int num);
arvore *criaExemplo1();
arvore *criaExemplo2();

int main(void){
    arvore *arv = criaExemplo1();
    arv - criaExemplo1();
    int opt;
        do{
            opt = menu();
            opcao(arv,opt);
        }while(opt);

    free(arv);

    return (0);
}

int menu(void)
{
	int opt, h;

	printf("\nEscolha a opcao\n");
	printf("0. Sair\n");
	printf("1. Procura Elemento\n");
	printf("2. Exibe Pre-Ordem\n");
	printf("3. Exibe In-Ordem\n");
	printf("4. Exibe Pos-Ordem\n");
        printf("5. Exibir Filho\n");
        printf("6. Exibir Pai\n");
        printf("7. Fator Balanceamento\n");
        
	printf("Opcao: ");
	scanf("%d", &opt);

	return opt;
}

void opcao(arvore *arv, int op)
{

	switch(op){
        int num;
        arvore *tmp;
        case 0:
            
            break;
		case 1:
            printf("Digite o valor que procura: ");
            scanf("%d",&num);
            tmp = existe(num,arv);
            if(tmp != NULL){
                printf("O valor %d existe na arvore\n",num);
            }else{
                printf("O valor %d nao existe na arvore\n",num);
            }
			break;

		case 2:
		    printf("Pre-Ordem: \n");
		    exibePreOrdem(arv,0);
			break;
		case 3:
		    printf("In-Ordem: \n");
		    exibeInOrdem(arv,0);
			break;
		case 4:
		    printf("Pos-Ordem: \n");
		    exibePosOrdem(arv,0);
			break;
                 
		case 5:
		    printf("Digite um valor para exibir os filhos: \n");
		    scanf("%d", &num);
                    tmp = existe(num, arv);
                    if(tmp!=NULL){
                        exibeFilhos(tmp);
                    } else {
                        printf("Elemento %d não existe \n", num);
                    }
                    
			break;
	/*	case 6:
		    printf("Digite um valor para exibir o pai: \n");
                    scanf("%d", &num);
                    tmp = existe(num, arv);
                    if(tmp!=NULL){
                        exibePai(arv, num);
                    } else {
                        printf("Elemento %d não existe \n", num);
                    }
			break;*/
		case 7:
		    printf("Fator Balanceamento = %d\n", Balancear(arv));
			break;
                 
		default:
			printf("Comando invalido\n\n");
	}
}
int isVazia(arvore *arv){
	if(arv==NULL)
		return 1;
	else
		return 0;
}


int isFolha(arvore *arv){
    if(!isVazia(arv)){
        if(arv->dir == NULL && arv->esq == NULL){
            return 1;
        }
    }
    return 0;

}

int altura(arvore *arv, int h){
    if(!isVazia(arv)){
        if(isFolha(arv)){
            return h;
        } else {
            h++;
            arvore *tmpEsq = arv->esq;
            arvore *tmpDir = arv->dir;
            int he = altura(tmpEsq, h);
            int hd = altura(tmpDir, h);
            if(he>hd){
                return he;
            } else {
                return hd;
            }
        }
    } else {
        return h;
    }
}

int alturaExclusiva(arvore *arv, int h){
    if(isVazia(arv)){
       return 0;
    }else{
        return (altura(arv,h+1));
    }    
}

int Balancear(arvore* arv){
    int altEsq = alturaExclusiva(arv->esq, 0);
    int altDir = alturaExclusiva(arv->dir, 0);
    int FatBal = altDir - altEsq;
    return FatBal;
}

arvore *existe(int num, arvore *arv){
    if(!isVazia(arv)){
        if(arv->num == num){
            return arv;
        }else{
            arvore *tmp = existe(num,arv->esq);
            if(!isVazia(tmp)){
                return tmp;
            }
            tmp=existe(num,arv->dir);
            if(!isVazia(tmp)){
                return tmp;
            }
            return NULL;
        }
    }else{
        return NULL;
    }

}

void exibePreOrdem(arvore *arvore, int nivel){
    if(!isVazia(arvore)){
        printf("nivel = %d, num = %d\n",nivel, arvore->num);
        nivel++;
        exibePreOrdem(arvore->esq,nivel);
        exibePreOrdem(arvore->dir,nivel);
    }
}

void exibeInOrdem(arvore *arvore, int nivel){
    if(!isVazia(arvore)){
        nivel++;
        exibeInOrdem(arvore->esq,nivel);
        nivel--;
        printf("nivel = %d, num = %d\n",nivel, arvore->num);
        nivel++;
        exibeInOrdem(arvore->dir,nivel);
    }
}

void exibePosOrdem(arvore *arvore, int nivel){
    if(!isVazia(arvore)){
        nivel++;
        exibePosOrdem(arvore->esq,nivel);
        exibePosOrdem(arvore->dir,nivel);
        nivel--;
        printf("nivel = %d, num = %d\n",nivel, arvore->num);

    }
}


void liberaArvore(arvore *arv){

	if(arv != NULL){
        liberaArvore(arv->dir);
        liberaArvore(arv->esq);
    }
    free(arv);
}

void exibeFilhos(arvore* arv){

    if(!isVazia(arv->dir)){
        printf("Fd- %d\n", arv->dir->num);
    }
    if(!isVazia(arv->esq)){
        printf("Fe- %d\n", arv->esq->num);
    }
}

/*void exibePai(arvore *arv, int num){
    if(!isVazia(arv)){
        if(!isVazia(arv->dir)){
            if(arv->dir->num == num){
                printf("O pai de %d é %d", num, arv->num);
            }
        }
        if(!isVazia(arv->esq)){
            if(arv->esq->num == num){
                printf("O pai de %d é %d", num, arv->num);
            }
            exibePai(arv->esq, num);
            exibePai(arv->dir, num);
        }
    }
}*/

/*arvore *existePai(arvore *arv,int num){
    if(!isVazia(arv)){
        if(!isVazia(arv->dir)){
            if(arv->dir->num == num){
                return arv;
            }
        }
        if(!isVazia(arv->esq)){
            if(arv->esq->num == num){
                return arv;
             }
        }
        arvore *esq = existePai(arv->esq,num);
        arvore *dir = existePai(arv->dir,num);
        if (esq!=NULL){
            return esq;
        }else if(dir!=NULL){
            return dir;
        }
        return NULL;
    }
}

arvore *exibeAvo(arvore *arv, int num){
    arvore *pai = existePai(arv, num);
    arvore *avo = NULL;
    if(!isVazia(pai)){
        avo = exibePai(arv, pai->num);
    }
    return avo;
}*/

arvore *criaArvore(){
    arvore *nova = (arvore *) malloc(sizeof(arvore));
    nova->esq = NULL;
    nova->dir = NULL;
    if(!nova){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}else{
		printf("Novo elemento: ");
		scanf("%d", &nova->num);
		return nova;
	}

    return NULL;
}
arvore *criaArvoreNum(int num){
    arvore *nova = (arvore *) malloc(sizeof(arvore));
    nova->esq = NULL;
    nova->dir = NULL;
    if(!nova){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}else{
		nova->num =num;
		return nova;
	}

    return NULL;
}

arvore *criaExemplo1(){
    arvore *arv = criaArvoreNum(1);
    arv->esq = criaArvoreNum(2);
    arv->dir = criaArvoreNum(3);
//    arv->esq->esq = criaArvoreNum(13);
    arv->esq->dir = criaArvoreNum(4);
    arv->dir->esq = criaArvoreNum(5);
    arv->dir->dir = criaArvoreNum(6);
   
//    arv->esq->esq->dir = criaArvoreNum(15);

    return arv;
}

arvore *criaExemplo2(){
    arvore *arv = criaArvoreNum(10);
    arv->esq = criaArvoreNum(11);
    arv->esq->esq = criaArvoreNum(12);
    arv->esq->esq->dir = criaArvoreNum(13);

    return arv;
}



