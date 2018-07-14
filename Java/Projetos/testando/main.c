#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define menu "\t\t\tMENU\n\n\t\t01-|Insertion-Sort \n\t\t02-|Selection-Sort \n\t\t03-|Selection-Sort Inverso \n\t\t04-|Bubble-Sort \n\t\t05-|Shell-Sort \n\t\t06-|Shell-Sort com a escolha ideal do h\n\t\t0-|SAIR\n\n\t\t::"

/*
Para cada algoritmo:
1) Ordenar listas desordenadas com 100, 1.000, 10.000, 100.000, 500.000 elementos.
2) Ordenar listas inversamente ordenadas com 100, 1.000, 10.000, 100.000, 500.000 elementos.
3) Ordenar listas desordenadas com 100, 1.000, 10.000, 100.000, 500.000 elementos.
 *
Para cada ordenação:
1) Contar a quantidade de comparações.
2) Contar a quantidade de trocas.
3) Contar o tempo em milissegundos. (somente quando inferior a 15 minutos)
Criar uma tabela contendo todas as informações solicitadas anteriormente.
Obs: A nota será obtida mediante perguntas sobre os algoritmos e os desempenhos obtidos.
 */

int *vetor = NULL;
int tam;
clock_t inicio, fim;
double time_quick = 0;

void criarVetor(int tam) {
    vetor = (int *) malloc(tam * sizeof (int));

//    return vetor;
}

void preencherRandomiza(int vetor[], int tam) {
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++) {
        vetor[i] = rand() % tam;
    }
}

void preencherDecrescente(int vetor[], int tam) {
    int i;
    printf("Vetor em Ordem Decrescente\n");
    for (i = tam; i > 0; i--) {
        vetor[i] = tam - i;
    }
}

void preencherOrdenado(int vet[], int tam) {
    int i;
    printf("Vetor em Ordem Crescente\n");
    for (i = 0; i < tam; i++) {
        vet[i] = 1 + i;
    }
}

int tamanho() {
    int tam;
    printf("Digite o Tamanho: ");
    scanf("%d", &tam);
    return tam;
}

void preencherRandomizaSemRepetir(int tam){
    int i, j, a, cont;
    srand(time(NULL));
    for (i = 0; i < tam; ++i) {
        do {
            vetor[i] = 1 + (rand() % tam);
            a = 1;
            for (j = 0; j < i; ++j) {
                if (vetor[i] == vetor[j])
                    a = 0;
            }
        } while (a == 0);
    }

}

int visualizarVetor(int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d-", vetor[i]);
    }
    printf("\n");
}

void insertionSort() {
    tam = tamanho();      
    criarVetor(tam);
    preencherRandomizaSemRepetir(tam);
    visualizarVetor(tam);
    printf("\n\nordenando, Aguarde...\n\n");
    inicio = clock();
    int i, j;
    int key, comp = 0, troca = 0;
    for (j = 1; j < tam; ++j) {
        key = vetor[j];
        i = j - 1;
        while (vetor[i] > key && i >= 0) {
            vetor[i + 1] = vetor[i];
            --i;
            troca++;
        }
        comp++;
        vetor[i + 1] = key;
    }
    fim = clock();
    visualizarVetor(tam);
    time_quick = (double) (((double) fim - (double) inicio) / CLOCKS_PER_SEC);
    printf("\n%3.3f Segundos para Ordenar %d numeros, %d comparações e %d trocas com o Metodo insertionSort\n\n", time_quick, tam, comp, troca);
    free(vetor);
}

void menuPrincipal() {
    int opc = 1;
    while (opc != 0) {
        printf("\n\n");
        printf(menu);
        scanf("%d", &opc);
        switch (opc) {
            case 1:// InsertSort
                printf("\t\t\n\n01 -| Insertion-Sort\n\n");
                insertionSort();
                break;
            case 2:// Selection-Sort
                printf("\t\t\n\n02-|Selection-Sort\n\n");
             
                break;
            case 3:// Selection-Sort Inverso
                printf("\t\t\n\n03-|Selection-Sort Inverso\n\n");
                break;
            case 4:// Bubble-Sort
                printf("\t\t\n\n4-|Bubble-Sort\n\n");
              
                break;
            case 5:// Shell-Sort
                printf("\t\t\n\n05-|Shell-Sort\n\n");
                
                break;
            case 6:// Shell-Sort com a escolha ideal do h
                printf("\t\t\n\n6-|Shell-Sort com a escolha ideal do h\n\n");
              
                break;
            case 0:// sair
                printf("\t\t\n\nSAIR\n\n");
                opc = 0;
                break;
            default:
                printf("\n\nopção Invalida\n\n");
        }
    }
}

int main(int argc, char** argv) {

    menuPrincipal();


    return (EXIT_SUCCESS);
}