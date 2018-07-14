/* 
 * File:   main.c
 * Author: ThomasJefferson
 *
 * Created on 6 de Maio de 2016, 21:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int cont = 0;


// para o mergeSort

void exibeVetor(int vetor[], int inicio, int tamanho){
    int i;
    for( i = inicio; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
    
void mergeSort(int vetor[], int inicio, int tamanho){
//    printf("%d", tamanho);
        exibeVetor(vetor, inicio, tamanho);
    if((tamanho - inicio) > 1){
        int comprimento = tamanho - inicio;
        int meio = comprimento/2 + inicio;
      //  exibeVetor(vetor, inicio, tamanho);
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio, tamanho);
    }// else {
    //}
}


// Para countSort --------------------------------------------------------------

void exibeVetor2(int vetor[], int tam){
    int i;
    for(i = 0; i < tam; i++){
//        printf("pos %d = %d\n", i, vetorAux[i]);
//        tamPos = vetorAux[i];
//        for(j = 0; tamPos > 0; tamPos--){
            printf("%d ", vetor[i]);
//        }
    }
}
    
    
void countSort(int vetor[], int tam){
    int maior = vetor[0], i, j, k;
    for(i = 1; i < tam; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    
    int vetorAux[maior + 1];
    for(i = 0; i < maior + 1; i++){
        vetorAux[i] = 0;
//        printf("pos %d com numero %d\n", i, vetorAux[i]);
//        printf("pos %d com numero %d\n", i, vetor[i]);
    }
    for(i = 0; i < tam; i++){
        for(j = 0; j < maior + 1 ; j++){
            if(vetor[i] == j){
                vetorAux[j]++;
            }
        }
//        printf("pos %d do vetorAux = %d\n", i, vetorAux[i]);
    }
    int tamPos;
    for(i = 0, k = 0; i < maior+1; i++){
        tamPos = vetorAux[i];
        
        for(j = 0 ; j<tamPos; tamPos--){
            vetor[k] = i;
            k++;
        }
    }
    exibeVetor2(vetor, tam);
}


void countSortNegativo(int vetor[], int tam){
//    printf("oi1");
    int cont = 0, contAux;
    for(cont = 0, contAux = 0; cont < tam; cont++){
        if(vetor[cont] < 0){
//            aux[contAux] = vetor[cont];
            contAux++;
        }
    }
    int aux[contAux], tam2 = contAux, tam3 = tam - tam2;
    for(cont = 0, contAux = 0; cont < tam; cont++){
        if(vetor[cont] < 0){
            aux[contAux] = vetor[cont];
            contAux++;
        }
    }
    int maior = vetor[0], maiorAux = aux[0], i, j, k;
    for(i = 1; i < tam; i++){
        
        if(vetor[i] > maior){
            maior = vetor[i];
        }

    }
    for(i = 1; i < tam; i++){
//        printf("maiorAux = %d\n", maiorAux);
        if(aux[i] < maiorAux){
            maiorAux = aux[i];
        }

    }
    
    int vetorAux[maior + 1];
    int vetorNegAux[(maiorAux * -1) + 1];
    for(i = 0; i < maior + 1; i++){
        vetorAux[i] = 0;
    }
    for(i = 0; i < (maiorAux * -1) + 1; i++){
        vetorNegAux[i] = 0;
    }
    for(i = 0; i < tam; i++){
        for(j = 0; j < maior + 1 ; j++){
            if(vetor[i] == j && vetor[i] >= 0){
                vetorAux[j]++;
            }
        }
    }
    for(i = 0; i < tam2; i++){
        for(j = 0; j < (maiorAux * -1) + 1 ; j++){
//            printf("%d - ", aux[i]*-1);
            if((aux[i] * -1) == j){
                vetorNegAux[j]++;
//                printf("%d = %d\n", j, vetorNegAux[j]);
            }
        }
    }
//    exibeVetor2(vetorNegAux, maiorAux*-1 + 1);
    
    int tamPos, vetorPosAux[tam3];
    for(i = 0, k = 0; i < maior+1; i++){
        tamPos = vetorAux[i];
        
        for(j = 0 ; j<tamPos; tamPos--){
            vetorPosAux[k] = i;
            k++;
        }
    }
//    exibeVetor2(vetor, tam3);
//    printf("\n");
//    exibeVetor2(aux, tam2);
//    printf("\n\n\n%d", maiorAux);
    for(i = (maiorAux * -1) + 1, k = 0; i > 0; i--){
        tamPos = vetorNegAux[i];
        
        for(j = 0 ; j<tamPos; tamPos--){
            aux[k] = i*-1;
            k++;
        }
    }
    for(i = 0, k = 0; i < tam2; i++, k++){
        vetor[k] = aux[i];
    }
    for(i = 0; i < tam3; i++, k++){
        vetor[k] = vetorPosAux[i];
    }
    exibeVetor2(vetor, tam);
//    printf("\n");
//    exibeVetor2(aux, tam2);
}
    
    
void troca(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void heap(int vetor[], int n, int i) {

    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && vetor[l] > vetor[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && vetor[r] > vetor[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        troca(&vetor[i], &vetor[largest]);

        // Recursively heapify the affected sub-tree
        heap(vetor, n, largest);
    }
    exibeVetor(vetor, 0, 6);
}

void heapSort(int arr[], int n) {
    // Build heap (rearrange array)
    int i;
    for (i = (n / (2 - 1)); i >= 0; i--)
        heap(arr, n, i);

    // One by one extract an element from heap
    for (i = (n - 1); i >= 0; i--) {
        // Move current root to end
        troca(&arr[0], &arr[i]);

        // call max heapify on the reduced heap
        heap(arr, i, 0);
    }
}

int getmax(int vetor[], int n) {
    int mx = vetor[0];
    int i;
    for (i = 1; i < n; i++) {
        if (vetor[i] > mx) {
            mx = vetor[i];
        }
    }
    return mx;
}
// Uma função para fazer a contagem do vetor [] de acordo com o dígito representado por exp.

void construiSort(int vetor[], int n, int exp) {
    int saida[n]; // criando um cetor de saida
    int i, j, cont[10] = {0}; // criando o vetor recepiente
    for (i = 0; i < n; i++) { //aqui o ventor vai fazer a contagem da quantidade de digitos do vetor
        cont[(vetor[i] / exp) % 10]++;
    }
    for (i = 1; i < 10; i++) { // Alterar cont[i] para que cont[i] para que tenha a posucção real de saida, ou seja posiçãio (0,1,2)
        cont[i] += cont[i - 1];
    }
    for (i = n - 1; i >= 0; i--) {// constroi a matri de saida
        saida[cont[(vetor[i] / exp) % 10] - 1] = vetor[i];
        cont[(vetor[i] / exp) % 10]--;
    }
    for (i = 0; i < n; i++) { // copia do vetor saida para o vetor, aqui agora contém números ordenados de acordo com dígitos atual
        vetor[i] = saida[i];

    }
    printf("\n");
//    exibeVetor2(vetor, 0, n);
}

void radixsort(int vetor[], int n) { // funcção que classifica o vetor[] de tamanh n usaundo radizSort
    int m = getmax(vetor, n); // chama a função que procura o o numero maximo do vetor para identificar o numero de digitos
    int exp;
    //Fazer a contagem de classificação para cada dígito. Note-se que em vez 
    //de passar o número de dígitos, exp é passado. exp é 10 ^ i, onde i é o número atual dígitos
    for (exp = 1; m / exp > 0; exp *= 10) { //
        construiSort(vetor, n, exp);

    }
    exibeVetor(vetor, 0, n);
}

int main(int argc, char** argv) {
    //para merge e count
//    int vetor[7] = {6, 7, 2, 3, 6, 2, 5};
//    int matriz[2][3];
//    int i = 0, j;
//    for(i = 0; i<2; i++){
//        for(j = 0; j < 3; j++){
//            matriz[i][j] = i+j;
//            printf("%d ", matriz[i][j]);
//        }
//        printf("\n");
//    }
    //para radiqSort
    int vetor[6] = {-1, -9, -10, 15, -7, -7};
    countSortNegativo(vetor, 6);
//    radiqSort(vetor, 8);
//    radiqSort();
//    exibeVetor(vetor, 0, 7);
//    mergeSort(vetor, 0, 7);
//    countSort(vetor, 7);
    return (EXIT_SUCCESS);
}

