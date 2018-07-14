/* 
 * File:   testesssss.c
 * Author: ThomasJefferson
 *
 * Created on 11 de Agosto de 2015, 08:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

struct bairro{
    char rua[50];
    int numero;
};

int main(int argc, char** argv) {
    int i;
//    struct bairro b1;
//    printf("Digite a rua: ");
//    scanf("%s", b1.rua);
//    printf("Digite o número: ");
//    scanf("%i", &b1.numero);
//    printf("Rua: %s, %i", b1.rua, b1.numero);
        for(i = 0 ; i<10000000 ; i++){
            printf("%d\n", i);
        }    
    return (EXIT_SUCCESS);
}

