/* 
 * File:   estruc1.c
 * Author: Geral
 *
 * Created on 7 de Agosto de 2014, 21:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int a=0, b=0, c=0, soma=0;
    printf("Digite primeiro número: ");
    scanf("%d", &a);
    if (a>1){
        printf("Digite segundo número: ");
        scanf("%d", &b);
        printf("Digite terceiro número: ");
        scanf("%d", &c);
        if (c>b){
            while (c>b){
                b++;
                if (b%a==0 && b!=c){
                    soma=soma+b;
                }
            }
        } else {
            while (b>c){
                c++;
                if (c%a==0 && c!=b){
                    soma=soma+c;
                }
            }
        }
        printf("Soma = %d", soma);
    } else {
        printf("Primeiro número tem que ser >1, tente novamente");
    }
    return (EXIT_SUCCESS);
}

