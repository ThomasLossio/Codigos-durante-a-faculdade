/* 
 * File:   BuscaBinaria.c
 * Author: ThomasJefferson
 *
 * Created on 21 de Maio de 2015, 20:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void BuscaBinaria(int valor, int vetor[], int tam){
    int i;
    
    if((tam%2)==0){
    tam = tam / 2;
    }else tam = (tam+1)/2;
    
    int vetor_aux[tam];
    
    if(valor == vetor[tam]){
        printf("Encontrei");
    }else{
        if(vetor[tam] > valor){
            for(i = 0; i < tam; i++){
                vetor_aux[i] = vetor[i];
            }
        
        }else{
            for(i = 0; i <= tam; i++){
                vetor_aux[i] = vetor[tam+i];
            }      
        }
        system("cls");
        BuscaBinaria(valor, vetor_aux, tam);
    }
}

int main(int argc, char** argv) {
    int valor, i, tam, num, op=1;

    
    do{
        printf("DIGITE O TAMANHO DO VETOR: ");
        scanf("%d",&tam);
        int vetor[tam];
        for(i = 0; i < tam; i++){
            vetor[i] = i;
            printf("%d\n", vetor[i]);
        }

        printf("DIGITE O NUM QUE DESEJA BUSCAR: ");
        scanf("%d", &num);

        BuscaBinaria(num, vetor, tam);
        
        printf("\nDeseja continuar? [1]Sim/[2]Não\n");
        scanf("%d", &op);
    }while(op!=2);
    
    return (EXIT_SUCCESS);
}




