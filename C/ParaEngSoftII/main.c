/* 
 * File:   main.c
 * Author: ThomasJefferson
 *
 * Created on 1 de Junho de 2016, 23:02
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */

int checkNome(char nome[50], char letra[2], int i) {

    if (nome[i] == letra[0]) {

        return 1;

    } else {

        if(nome[i]=='\0'){
            return 0;
        }else{
            return checkNome(nome, letra, i+1);
        }

    }
}

int perfeito(int n, int soma, int prximpar){
    if(soma==n){
        return 1;
    } else {
        if(soma>n){
            return 0;
        } else {
            prximpar +=2;
            return perfeito(n, soma+prximpar, prximpar);
        }
    }
}

int primo(int x, int numcorrente, int cont){
    while (numcorrente <= x){
        cont += x % numcorrente == 0? 1:0;
        numcorrente++;
    }
    if (cont <= 2){
//        printf("Numero eh primo\n");
        return 1;
    } else{
//        printf("Numero não eh primo\n");
        return 0;
    }    
}

int analisar(char palavra[50], int maior, int menor) {
    if (maior <= menor) {
        if (palavra[maior] == palavra[menor]) {
            analisar(palavra, maior + 1, menor - 1);
        } else {
//            printf("NÃO É PALÍNDROMO!!!\n");
            return 0;
        }

    } else {
//        printf("É PALINDROMO!!!");
        return 1;
    }


}

int maiorNumero(int vetor[6], int maiorEsperado){
    int maior = maiorEsperado, i;
    for(i = 0; i<6; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int fat(int x){
    if(x==1){
        return 1;
    } else{
        return x*fat(x-1);
    }
}

int main(int argc, char** argv) {
    int op=0, resultado, vetor[6], i, op2 = 0;
    char nome[50], letra[2];
    do{
        printf("[1] - CheckNome\n[2] - N Num Perfeito\n[3] - N Primo\n[4] - Palindromo\n[5] - Maior Número\n[6] - Fatorial\n\n");
        scanf("%d", &op);
        switch(op){
            case 1: {
                printf("\nDigite uma palavra: ");
                scanf("%s", nome);
                
                printf("\nDigite uma letra a procurar: ");
                scanf("%s", letra);
                
                if(checkNome(nome, letra, 0) == 1){
                    printf("\nLetra encontrada!\n");
                } else {
                    printf("\nLetra não encontrada!\n");
                }
            break;}
            case 2: {
                printf("\nDigite qual número deseja saber se é perfeito: ");
                scanf("%d", &op2);
                if(perfeito(op2, 1, 1) == 1){
                    printf("\nÉ perfeito!\n");
                } else {
                    printf("\nNão é perfeito!\n");
                }
                
            break;}
            case 3: {
                printf("\nDigite qual n-ésimo número primo que deseja achar: ");
                scanf("%d", &op2);
                if(primo(op2, 1, 0) == 1){
                    printf("\nÉ primo!\n");
                } else {
                    printf("\nNão é primo!\n");
                }
            break;}
            case 4: {
                printf("\nDigite uma palavra: ");
                scanf("%s", nome);
                if(analisar(nome, 0, strlen(nome) - 1) == 1){
                    printf("\nÉ palíndromo!\n");
                } else {
                    printf("\nNão é palíndromo!\n");
                }
            break;}
            case 5: {
                printf("\nDigite 6 números aleatórios...\n\n");
                for(i = 0; i < 6; i++){
                    printf("\nDigite o %dº número: ", i);
                    scanf("%d", &vetor[i]);
                }
                
                printf("\nDigite qual número esperado como maior no vetor: ");
                int maiorEsperado;
                scanf("%d", &maiorEsperado);
                resultado = maiorNumero(vetor, maiorEsperado);
                if(resultado > maiorEsperado){
                    printf("\nFoi encontrado que %d é maior do que o maior digitado!\n\n", resultado);
                } else {
                    printf("\nNenhum número é maior do que o digitado!\n\n");
                }
            break;}
            case 6: {
                printf("\nDigite qual número você quer saber o fatorial: ");
                scanf("%d", &op2);
                printf("\nFatorial(%d) = %d\n\n", op2, fat(op2));
            break;}
            default: printf("\nOpção Inválida!\n\n");
            
        }
        
        printf("\nVoltar ao menu? [1]Sim/[0]Não\n");
        scanf("%d", &op);
        
    }while(op!=0);
    printf("\n\nSaindo...\n\n");
    return (EXIT_SUCCESS);
}

