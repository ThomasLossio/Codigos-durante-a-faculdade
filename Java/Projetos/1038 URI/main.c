/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 13 de Maio de 2017, 17:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int cod, qntd;
    scanf("%d %d", &cod, &qntd);
    
    if (cod == 1) printf("Total: R$ %.2lf", qntd * 4.00);
    else if (cod == 2) printf("Total: R$ %.2lf", qntd * 4.50);
    else if (cod == 3) printf("Total: R$ %.2lf", qntd * 5.00);
    else if (cod == 4) printf("Total: R$ %.2lf", qntd * 2.00);
    else if (cod == 5) printf("Total: R$ %.2lf", qntd * 1.50);
    printf("\n");
    
    return (EXIT_SUCCESS);
}

