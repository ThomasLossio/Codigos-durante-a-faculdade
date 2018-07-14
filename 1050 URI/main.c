/* 
 * File:   main.c
 * Author: thoma
 *
 * Created on 19 de Maio de 2017, 19:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int ddd;
    scanf("%d", &ddd);
    
    if (ddd == 61) printf("Brasilia\n");
    else if (ddd == 71) printf("Salvador\n");
    else if (ddd == 11) printf("Sao Paulo\n");
    else if (ddd == 21) printf("Rio de Janeiro\n");
    else if (ddd == 32) printf("Juiz de Fora\n");
    else if (ddd == 19) printf("Campinas\n");
    else if (ddd == 27) printf("Vitoria\n");
    else if (ddd == 31) printf("Belo Horizonte\n");
    else printf("DDD nao cadastrado\n");
    return (EXIT_SUCCESS);
}

