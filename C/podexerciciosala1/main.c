/* 
 * File:   main.c
 * Author: ThomasJefferson
 *
 * Created on 19 de Fevereiro de 2016, 20:40
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */


float Tinicio = 0.0, Tfinal = 0.0;
long int maior = 0, menor = 0, tamanho2 = 0, tamanhoaux2, modificado = 0, verificado = 0;
int *vetor2, *auxVetor2;

void exibirVetor2(int op){
    int i=0;
    switch(op){
        case 1:{
            printf("Vetor Inicial:\n\n");
            while(i<tamanho2){
                printf("[%i] - ", vetor2[i]);
                i++;
            }
        break;}
        case 2:{
            printf("Vetor Final:\n\n");
            while(i<tamanhoaux2){
                printf("[%i] - ", auxVetor2[i]);
                i++;
            }            
        break;}
        case 3:{
            printf("Vetor Inicial\t\t\t\tVetorFinal\n\n");
            while(i<tamanho2){
                printf("[%6i]\t\t\t\t[%6i]\n", vetor2[i], auxVetor2[i]);
                i++;
            }
//            i=0;
//            printf("\n\nVetor Final:\n\n");
//            while(i<tamanhoaux2){
//                printf("[%i] - ", auxVetor2[i]);
//                i++;
//            }                        
        break;}
    }
    printf("\n");
}

int getMaiorElemento(int vetor[], int n){
    int i;
    maior = vetor[0];
    for(i = 1; i < n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

void preencheVetorComNum(int vetor[], int n, int numero){
    int i;
    for(i = 0; i < n; i++){
        vetor[i] = numero;
    }
}

void preencheComContagem(int vetor1[], int vetor3[], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(vetor1[i] == j){
                vetor3[j]++;
            }
        }
    }
}

int mesmosElementos(int vetor1[], int vetor3[], int n){
    int tamanhoVetor1 = getMaiorElemento(vetor1, n)+1;
    int vetor1Contagem[tamanhoVetor1];
    preencheVetorComNum(vetor1Contagem, tamanhoVetor1, 0);
    preencheComContagem(vetor1, vetor1Contagem, n);

    int tamanhoVetor3 = getMaiorElemento(vetor3, n)+1;
    int vetor3Contagem[tamanhoVetor3];
    preencheVetorComNum(vetor3Contagem, tamanhoVetor3, 0);
    preencheComContagem(vetor3, vetor3Contagem, n);
    
    int i;
    for(i = 0; i < tamanhoVetor1; i++){
        if(vetor1Contagem[i] != vetor3Contagem[i]){
            return 0;
        }
    }
    
    for(i = 0; i < tamanhoVetor3; i++){
        if(vetor1Contagem[i] != vetor3Contagem[i]){
            return 0;
        }
    }
    
    return 1;
}

int isOrdenado(int n){
    if(mesmosElementos(vetor2, auxVetor2, tamanho2)){
        int i;
        for(i=0; i<n-1; i++){
            if(auxVetor2[i] > auxVetor2[i+1]){
                return 0;
            }
        }
        return 1;        
    }
    return 0;
}

int isInversamenteOrdenado(int n){
    if(mesmosElementos(vetor2, auxVetor2, tamanho2)){
        int i;
        for(i=0; i<n-1; i++){
            if(auxVetor2[i] < auxVetor2[i+1]){
                return 0;
            }
        }
        return 1;        
    }
    return 0;    
}

void selectionsort(){
    int i, j, aux, continua;
    for (i=0; i < tamanhoaux2-1; i++){
        menor = i;
        continua = 0;

        
        for(j = i + 1; j < tamanhoaux2; j++){
            if(auxVetor2[menor] > auxVetor2[j]){
                menor = j;

            }
            verificado++;
            if(auxVetor2[j] < auxVetor2[j-1] && continua == 0){
                continua = 1;
            }
//            } else continua = 0;
            verificado++;
//            if(auxVetor2[i] < auxVetor2[j]){
//                continua = 1;
//
//            }            
//            verificado++;
        }
//        if(!continua){
//            verificado++;
//            break;
//        }
        if(!continua){
            
            break;
        }

            if(menor != i){
                aux = auxVetor2[i];
                auxVetor2[i] = auxVetor2[menor];
                auxVetor2[menor] = aux;
                modificado++;
    //            exibirVetor2();
            }
            verificado++;
        
        verificado++;
    }
//        for(i=0; i<tamanho; i++){
//            printf("%d, ", vetor2[i]);
//        }
    
}

void selectionsortinverso(){
    int i, j, aux, k;
    for (i=0; i < tamanhoaux2-1; i++){
        maior = i;
        for(j = i + 1; j < tamanhoaux2; j++){
            if(auxVetor2[maior] < auxVetor2[j]){
                maior = j;
            }
            verificado++;
        }
        if(maior != i){
            aux = auxVetor2[i];
            auxVetor2[i] = auxVetor2[maior];
            auxVetor2[maior] = aux;
//            exibirVetor2();
            modificado++;
        }
        verificado++;
    }
//        for(i=0; i<tamanho; i++){
//            printf("%d, ", vetor2[i]);
//        }
    
}

void insertionsort(){
    int key, i, j, mudou = 0;
    for(j = 1; j<tamanhoaux2; j++){
        key = auxVetor2[j];
        i = j - 1;
        verificado++;
        while(i >= 0 && auxVetor2[i] > key){
//            indice = i;
            auxVetor2[i+1] = auxVetor2[i];
            auxVetor2[i] = key;
//            if(vetor[i] != vetor[i+1]){
//                exibirVetor2();
//            }
            i=i-1;
            mudou=1;
            modificado++;
            verificado++;
        }
        auxVetor2[i+1] = key;
//        if(mudou){
//            mudou = 0;
//            exibirVetor2(vetor, tamanho);
//        }
    }
}

void shellSort(){
    //0+h
    //Tamanho aqui equivale ao h do algoritmo....
    int i=0, aux, n=tamanhoaux2, cont = 0, flag = 0;
    n=n/2;
//    printf("%d", h);
    while(n>1){
//        printf("H = %d\n", h);
        for(i = 0; i + n < tamanhoaux2; i++){
//            printf("i = %d\n", i);
            if((tamanhoaux2%2 != 0) && (cont==0)){
//                    printf("%d\n", &i);
                if(auxVetor2[i+n] > auxVetor2[tamanhoaux2-1]){
                    aux = auxVetor2[i+n];
                    auxVetor2[i+n] = auxVetor2[tamanhoaux2-1];
                    auxVetor2[tamanhoaux2-1] = aux;
                    cont++;
                    modificado++;
//                    verificado++;
//                    exibirVetor2(vetor2, n);
                } 
                verificado++;
                
            }
            verificado++;
            
            if(auxVetor2[i] > auxVetor2[i+n]){
                aux = auxVetor2[i];
                auxVetor2[i] = auxVetor2[i+n];
                auxVetor2[i+n] = aux;
//                verificado++;
                modificado++;
//                    exibirVetor2(vetor, n);
            } else {
                
                
            }
            verificado++;
            
            //}
//            }
//            exibirVetor2(vetor2, n);
            
        }
        cont=0;
        n = n/2;
        
    }
    selectionsort();
}

void shellSortHIdeal() {  

    int i , j , valor;

    int h = 1;
    do {
        h = 3*h+1;
    } while(h < tamanhoaux2);
    do {
        h /= 3;
        for(i = h; i < tamanhoaux2; i++) {

            valor = auxVetor2[i];

            j = i - h;

            verificado++;
            while (j >= 0 && valor < auxVetor2[j]) {
                auxVetor2[j + h] = auxVetor2[j]; 
                j -= h; 
                verificado++;
                modificado++;
            }

            modificado++;
            auxVetor2[j + h] = valor;
        }

    } while( h > 1);
}

void bubbleSort(){
    int i = 0, aux = 0, j = 0, k = 0, trocas = 0, continua = 0;
    for(i = 0; i<tamanhoaux2-1; i++){
//        aux = vetor[i];
        continua = 0;
        for(j=i+1; j<tamanhoaux2; j++){
            if(auxVetor2[i] > auxVetor2[j]){
                continua = 1;
                aux = auxVetor2[i];
                auxVetor2[i] = auxVetor2[j];
                auxVetor2[j] = aux;
//                exibirVetor2(vetor2, tamanho);
                modificado++;
//                verificado++;
            }
            verificado++;
            
            if(auxVetor2[j-1] > auxVetor2[j]){
                continua = 1;
            }
            verificado++;
        }
        if(!continua){
            break;
        }
        verificado++;
    }
}

void criaVetorOrdenado(int n){
    vetor2 = (int *) malloc(sizeof(int) * n);
    auxVetor2 = (int *) malloc(sizeof(int) * n);
    int i;
    for(i = 0; i<n; i++){
        vetor2[i] = i+1;
        auxVetor2[i] = vetor2[i];
    }
//    auxVetor2 = vetor2;
    tamanho2 = n;
    tamanhoaux2= n;    
}

void criaVetorInversamentoOrdenado(int n){
    vetor2 = (int *) malloc(sizeof(int) * n);
    auxVetor2 = (int *) malloc(sizeof(int) * n);
    int i;
    for(i = 0; i<n; i++){
        vetor2[i] = n-i;
        auxVetor2[i] = vetor2[i];
    }
//    auxVetor2 = vetor2;
    tamanho2 = n;
    tamanhoaux2= n;    
}

void criaVetorDesordenado(int n){
    vetor2 = (int *) malloc(sizeof(int) * n);
    auxVetor2 = (int *) malloc(sizeof(int) * n);
    srand( (unsigned)time(NULL) );
    int i;
    for(i = 0; i<n; i++){
        vetor2[i] = 1 + (rand() % n);
        auxVetor2[i] = vetor2[i];
    }
//    auxVetor2 = vetor2;
    tamanho2 = n;
    tamanhoaux2= n;
}

void removerVetor(){
    free(vetor2);
    free(auxVetor2);
    tamanho2 = 0;
    tamanhoaux2 = 0;
}

int testarOrdenacao(int n){
    //---------------------Insertion-Sort---------------------------------------------------
    printf("\nTestando o Insertion-Sort... por favor, aguarde...\n");
    
    criaVetorOrdenado(n);
    modificado = 0, verificado = 0;
    insertionsort();
    if(isOrdenado(n)){
        printf("Insertion-Sort com Vetor Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Insertion-Sort com Vetor Ordenado!\n");
    }
    removerVetor();
    
    criaVetorInversamentoOrdenado(n);
    modificado = 0, verificado = 0;
    insertionsort();
    if(isOrdenado(n)){
        printf("Insertion-Sort com Vetor Inversamente Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Insertion-Sort com Vetor Inversamente Ordenado!\n");
    }
    removerVetor();

    criaVetorDesordenado(n);
    modificado = 0, verificado = 0;
    insertionsort();
    if(isOrdenado(n)){
        printf("Insertion-Sort com Vetor Desordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Insertion-Sort com Vetor Desordenado!\n");
    }
    removerVetor();    
    //---------------------Selection-Sort---------------------------------------
    printf("\nTestando o Selection-Sort... por favor, aguarde...\n");
    
    criaVetorOrdenado(n);
    modificado = 0, verificado = 0;
    selectionsort();
    if(isOrdenado(n)){
        printf("Selection-Sort com Vetor Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Selection-Sort com Vetor Ordenado!\n");
    }
    removerVetor();
    
    criaVetorInversamentoOrdenado(n);
    modificado = 0, verificado = 0;
    selectionsort();
    if(isOrdenado(n)){
        printf("Selection-Sort com Vetor Inversamente Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Selection-Sort com Vetor Inversamente Ordenado!\n");
    }
    removerVetor();

    criaVetorDesordenado(n);
    modificado = 0, verificado = 0;
    selectionsort();
    if(isOrdenado(n)){
        printf("Selection-Sort com Vetor Desordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Selection-Sort com Vetor Desordenado!\n");
    }
    removerVetor();    
    //---------------------Selection-Sort Inverso-------------------------------
    printf("\nTestando o Selection-Sort Inverso... por favor, aguarde...\n");
    
    criaVetorOrdenado(n);
    modificado = 0, verificado = 0;
    selectionsortinverso();
    if(isInversamenteOrdenado(n)){
        printf("Selection-Sort Inverso com Vetor Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Selection-Sort Inverso com Vetor Ordenado!\n");
    }
    removerVetor();
    
    criaVetorInversamentoOrdenado(n);
    modificado = 0, verificado = 0;
    selectionsortinverso();
    if(isInversamenteOrdenado(n)){
        printf("Selection-Sort Inverso com Vetor Inversamente Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Selection-Sort Inverso com Vetor Inversamente Ordenado!\n");
    }
    removerVetor();

    criaVetorDesordenado(n);
    modificado = 0, verificado = 0;
    selectionsortinverso();
    if(isInversamenteOrdenado(n)){
        printf("Selection-Sort Inverso com Vetor Desordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Selection-Sort Inverso com Vetor Desordenado!\n");
    }
    removerVetor();    
    //------------------------Shell-Sort----------------------------------------
    printf("\nTestando o Shell-Sort... por favor, aguarde...\n");
    
    criaVetorOrdenado(n);
    modificado = 0, verificado = 0;
    shellSort();
    if(isOrdenado(n)){
        printf("Shell-Sort com Vetor Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Shell-Sort com Vetor Ordenado!\n");
    }
    removerVetor();
    
    criaVetorInversamentoOrdenado(n);
    modificado = 0, verificado = 0;
    shellSort();
    if(isOrdenado(n)){
        printf("Shell-Sort com Vetor Inversamente Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Shell-Sort com Vetor Inversamente Ordenado!\n");
    }
    removerVetor();

    criaVetorDesordenado(n);
    modificado = 0, verificado = 0;
    shellSort();
    if(isOrdenado(n)){
        printf("Shell-Sort com Vetor Desordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Shell-Sort com Vetor Desordenado!\n");
    }
    removerVetor();    
    //------------------------Shell-Sort H Ideal--------------------------------
    printf("\nTestando o Shell-Sort com H Ideal... por favor, aguarde...\n");
    
    criaVetorOrdenado(n);
    modificado = 0, verificado = 0;
    shellSortHIdeal();
    if(isOrdenado(n)){
        printf("Shell-Sort com H Ideal com Vetor Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Shell-Sort com H Ideal com Vetor Ordenado!\n");
    }
    removerVetor();
    
    criaVetorInversamentoOrdenado(n);
    modificado = 0, verificado = 0;
    shellSortHIdeal();
    if(isOrdenado(n)){
        printf("Shell-Sort com H Ideal com Vetor Inversamente Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Shell-Sort com H Ideal com Vetor Inversamente Ordenado!\n");
    }
    removerVetor();

    criaVetorDesordenado(n);
    modificado = 0, verificado = 0;
    shellSortHIdeal();
    if(isOrdenado(n)){
        printf("Shell-Sort com H Ideal com Vetor Desordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Shell-Sort com H Ideal com Vetor Desordenado!\n");
    }
    removerVetor();    
    //-----------------------Bubble-Sort----------------------------------------
    printf("\nTestando o Bubble-Sort... por favor, aguarde...\n");
    
    criaVetorOrdenado(n);
    modificado = 0, verificado = 0;
    bubbleSort();
    if(isOrdenado(n)){
        printf("Bubble-Sort com Vetor Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Bubble-Sort com Vetor Ordenado!\n");
    }
    removerVetor();
    
    criaVetorInversamentoOrdenado(n);
    modificado = 0, verificado = 0;
    bubbleSort();
    if(isOrdenado(n)){
        printf("Bubble-Sort com Vetor Inversamente Ordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Bubble-Sort com Vetor Inversamente Ordenado!\n");
    }
    removerVetor();

    criaVetorDesordenado(n);
    modificado = 0, verificado = 0;
    bubbleSort();
    if(isOrdenado(n)){
        printf("Bubble-Sort com Vetor Desordenado funcionando!\n");
    } else {
        printf("Há algo de Errado no Bubble-Sort com Vetor Desordenado!\n");
    }
//    removerVetor();        
    
    
    printf("\n\nTestes finalizados...\n\n");
}

int main(int argc, char** argv) {
//    int vetor[6] = {10, 8, 3, 6, 5, 1};
    int op=0, op2=0;
    do{
        printf("[ 1 ] - Insertion-sort\n"
                "[ 2 ] - Selection-sort\n"
                "[ 3 ] - Selection-sort Inverso\n"
                "[ 4 ] - Bubble-sort\n"
                "[ 5 ] - Shell-sort\n"
                "[ 6 ] - Shell-sort com a escolha ideal de h\n"
                "[ 7 ] - Criar Vetor\n"
                "[ 8 ] - Excluir Vetores\n"
                "[ 9 ] - Testar Ordenação\n"
                "[10 ] - Exibir Vetor\n"
                "[11 ] - Conferir Ordenação\n"
                "[ 0 ] - Sair\n");
        scanf("%d", &op);
        modificado = 0, verificado = 0;
        switch(op){
            case 1:{
                Tinicio = clock();
                insertionsort();
                Tfinal = clock();
                printf("\nModificado: %ld, Verificado: %ld\n", modificado, verificado);
                printf("Tempo em ms: %f\n\n", (Tfinal - Tinicio));
                printf("Tempo em Minutos: %f\n\n", (Tfinal - Tinicio)/60000);
            break;}
            case 2:{
                Tinicio = clock();
                selectionsort();
                Tfinal = clock();
                printf("\nModificado: %ld, Verificado: %ld\n", modificado, verificado);
                printf("Tempo em ms: %f\n\n", (Tfinal - Tinicio));
                printf("Tempo em Minutos: %f\n\n", (Tfinal - Tinicio)/60000);
            break;}
            case 3:{
                Tinicio = clock();
                selectionsortinverso();
                Tfinal = clock();
                printf("\nModificado: %ld, Verificado: %ld\n", modificado, verificado);
                printf("Tempo em ms: %f\n\n", (Tfinal - Tinicio));
                printf("Tempo em Minutos: %f\n\n", (Tfinal - Tinicio)/60000);
            break;}
            case 4:{
                Tinicio = clock();
                bubbleSort();
                Tfinal = clock();
                printf("\nModificado: %ld, Verificado: %ld\n", modificado, verificado);
                printf("Tempo em ms: %f\n\n", (Tfinal - Tinicio));
                printf("Tempo em Minutos: %f\n\n", (Tfinal - Tinicio)/60000);
            break;}
            case 5:{
                Tinicio = clock();
                shellSort();
                Tfinal = clock();
                printf("\nModificado: %ld, Verificado: %ld\n", modificado, verificado);
                printf("Tempo em ms: %f\n\n", (Tfinal - Tinicio));
                printf("Tempo em Minutos: %f\n\n", (Tfinal - Tinicio)/60000);
            break;}
            case 6:{
//                printf("\nDesculpe-nos pelo transtorno... Estamos trabalhando para organizar...\nPor favor, volte depois!\n\n");
                Tinicio = clock();
                shellSortHIdeal();
                Tfinal = clock();
                printf("\nModificado: %d, Verificado: %d\n", modificado, verificado);
                printf("Tempo em ms: %f\n\n", (Tfinal - Tinicio));
                printf("Tempo em Minutos: %f\n\n", (Tfinal - Tinicio)/60000);                
            break;}
            case 7:{
                do{
                    printf("\n\n[1] Ordenado\t[2] Inversamente Ordenado\t[3] Desordenado\t[0] Voltar\n\n");
                    scanf("%d", &op2);
                    switch(op2){
                        case 1:{
                            printf("\nInforme o tamanho do vetor: ");
                            scanf("%d", &tamanho2);  
                            criaVetorOrdenado(tamanho2);
                            printf("\n\nVetor Ordenado Criado com Sucesso!");
                            
                            
                        break;}
                        case 2:{
                            printf("\nInforme o tamanho do vetor: ");
                            scanf("%d", &tamanho2);                            
                            criaVetorInversamentoOrdenado(tamanho2);
                            printf("\n\nVetor Inversamente Ordenado Criado com Sucesso!");                            
                            
                        break;}
                        case 3:{
                            printf("\nInforme o tamanho do vetor: ");
                            scanf("%d", &tamanho2);
                            criaVetorDesordenado(tamanho2);
                            printf("\n\nVetor Desordenado Criado com Sucesso!");                            
                            
                        break;}
                        case 0:break;
                        default: printf("\n\nOpção errada! Escolha uma opção correta!\n\n");
                    }
                }while(op2!=0);
            break;}
            case 8:{
                printf("\nLimpando memória...\n");
                removerVetor();
                printf("Memória livre...\n\n");
            break;}
            case 9:{
                printf("Inicializando testes... por favor aguarde....");
                testarOrdenacao(10000);
            break;}
            case 10:{
                do{
                    printf("\n\n[1] Inicial\t[2] Final\t[3] Inicial e Final \t[0] Voltar\n\nOBS: Usar a opção 3 com valores pequenos...\n\n");
                    scanf("%d", &op2);
                    Tinicio = clock();
                    switch(op2){
                        case 1:{
                            Tinicio = clock();
                            exibirVetor2(op2);
                            Tfinal = clock();
                            printf("Tempo em ms: %f\n\n", (Tfinal - Tinicio));
                            printf("Tempo em Minutos: %f\n\n", (Tfinal - Tinicio)/60000);
                        break;}
                        case 2:{
                            Tinicio = clock();
                            exibirVetor2(op2);
                            Tfinal = clock();
                            printf("Tempo em ms: %f\n\n", (Tfinal - Tinicio));
                            printf("Tempo em Minutos: %f\n\n", (Tfinal - Tinicio)/60000);
                        break;}
                        case 3:{
                            Tinicio = clock();
                            exibirVetor2(op2);
                            Tfinal = clock();
                            printf("Tempo em ms: %f\n\n", (Tfinal - Tinicio));
                            printf("Tempo em Minutos: %f\n\n", (Tfinal - Tinicio)/60000);                            
                        break;}
                        case 0: break;
                        default: printf("\n\nOpção errada! Escolha uma opção correta!\n\n");
                    }
                    
                }while(op2!=0);
            break;}
            case 11:{
                do{
                    printf("\n\n[1] Ordenado\t[2] Inversamente Ordenado\t[0] Voltar\n\n");
                    scanf("%d", &op2);
                    switch(op2){
                        case 1:{
                            printf("\n\nConferindo se está ordenado... por favor, aguarde...");
                            if(isOrdenado(tamanhoaux2)){
                                printf("\nEstá ordenado!\n\n");
                            } else {
                                printf("\nNão está ordenado!\n\n");
                            }                           
                        break;}
                        case 2:{
                            printf("\n\nConferindo se está inversamente ordenado... por favor, aguarde...");
                            if(isInversamenteOrdenado(tamanhoaux2)){
                                printf("\nEstá inversamente ordenado!\n\n");
                            } else {
                                printf("\nNão está inversamente ordenado!\n\n");
                            }     
                        break;}
                        case 0:break;
                        default: printf("\n\nOpção errada! Escolha uma opção correta!\n\n");
                    }                    
                }while(op2!=0);

            break;}
            case 0:{
                printf("\nLimpando memória...\n");
                removerVetor();
                printf("Memória livre...\n");
                printf("Encerrando programa...\n");
                printf("Programa encerrado...\n");
            break;}
        }
    }while(op!=0);

//    int vetor[9] = {10, 8, 2, 5, 15, 3, 4, 7, 1};
//    int vetor[9] = {1, 2, 4, 5, 8, 9, 11, 12, 15};
//    int i, n = 9;
//    for(i=0; i<n; i++){
//        printf("%d, ", vetor[i]);
//    }
//    printf("\n");
//    selectionsortinverso(vetor, n);
//    insertionsort(vetor, n);
//    shellSort(vetor, n);
//    bubbleSort(vetor, n);
    
    
    return (EXIT_SUCCESS);
}

