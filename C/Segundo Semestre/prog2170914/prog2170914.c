/* 
 * File:   prog2170914.c
 * Author: Geral
 *
 * Created on 17 de Setembro de 2014, 18:35
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */

char nome[25]="paralelepipedo";
char letra;


void imprime(int ultimonum,int array[30]){
    if(ultimonum >= 0){
        imprime(ultimonum - 1, array);
        printf("\nPOSIÇÃO %2d TEM VALOR %2d \n", ultimonum, array[ultimonum]); 
        
    }
    
}

int checkNome(char letra, int i) {

    if (nome[i] == letra) {

        return 1;

    } else {

        if(nome[i]=='\0'){
            return 0;
        }else{
            return checkNome(letra, i+1);
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

int primo(int n, int numcorrente, int cont){
    if (numcorrente == n){
        return 1;
    } else {
        if (cont > 2){
            return 0;
        } else {
               cont += n % numcorrente == 0? 1:0;
               return primo(n, numcorrente+1, cont);
        }
    }

}

int analisar(char palavra[50], int maior, int menor) {
    if (maior <= menor) {
        if (palavra[maior] == palavra[menor]) {
            analisar(palavra, maior + 1, menor - 1);
        } else {
            printf("NÃO É PALÍNDROMO!!!\n");
            return 0;
        }

    } else {
        printf("É PALINDROMO!!!");
        return 1;
    }


}

int main() {
    //int array[30], i;
    
    //for(i = 0; i < 30; i++){
    //    array[i] = i+1;
    //}
    //imprime(29,array);
    
    //printf("\n\n\n");
    //nome[0]='\0';
    //printf("Digite uma palavra: ");
    //scanf("%*c%[A-Z a-z 0-9]s", &nome);
   // printf("Que letra deseja testar: ");
   // scanf("%c", &letra);
   // printf("\n");

   // if (checkNome(letra, 0) == 1) {
   //     printf("Há letra(s) corresponde(s).\n");
   // } else {
   //     printf("Não há letra(s) correspondente(s).\n ");
   // }
    
    
    char palavra[50];
    printf("digite uma palavra: ");
    scanf("%s", &palavra);

    analisar(palavra, 0, strlen(palavra) - 1);
    
    //int x=0;
    //printf("Qual numero você quer saber se é primo?\n");
    //scanf("%d", &x);
    //printf("%d", primo(x, 1, 0));
    
    //int x=0;
    //printf("Digite um numero: ");
    //scanf("%d", &x);
    //printf("%d ", perfeito(x, 1, 1));
    
    return (EXIT_SUCCESS);
}

