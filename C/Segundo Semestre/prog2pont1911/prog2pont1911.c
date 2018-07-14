/* 
 * File:   prog2pont1911.c
 * Author: Geral
 *
 * Created on 19 de Novembro de 2014, 19:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
char *nome;
int *inicio;
int *fim;
char **matriz;
int conta (char *nome){
    if(*nome == '\0'){
        return 0;
    } else {
        nome++;
        return 1+conta(nome);
    }
}

int palindromo(char *nome, int *inicio, int *fim){
    if(*inicio<*fim){
        if(*(nome + *inicio) != *(nome + *fim)){
            return 0;
        }
        (*inicio)++;
        (*fim)--;
        return palindromo(nome, inicio, fim);
    }
    return 1;
}
int main(int argc, char** argv) {
    //nome = (char *) malloc(sizeof(char) * 25);
    //printf("Digite um nome: ");
    //scanf("%s", nome);
    //printf("\nNúmero de caracteres é igual a: %d\n\n", conta(nome));
    /*nome = (char *) malloc(sizeof(char) * 25);
    inicio = (int *) malloc(sizeof(int));
    fim = (int *) malloc(sizeof(int));
    printf("Digite um nome: ");
    scanf("%s", nome);
    *inicio=0;
    char *tempo = nome;
    *fim = conta(tempo) - 1;
    
    printf("inicio [%d], fim [%d] \n", *inicio, *fim);
    printf("resultado %s \n\n", palindromo(tempo, inicio, fim)?"Palíndromo":"Não é palíndromo");
    return (EXIT_SUCCESS);
     */
    matriz = (char **) malloc(sizeof(char *) * 3);
    matriz[0] = (char *) malloc(sizeof(char) *50);
    matriz[1] = (char *) malloc(sizeof(char) *20);
    matriz[2] = (char *) malloc(sizeof(char) *15);
    
    return 0;
}

