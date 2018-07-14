/* 
 * File:   sabado2.c
 * Author: Geral
 *
 * Created on 26 de Abril de 2014, 09:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1=0, num2=0;
    int op=0; //operação
    while (1){ //looping infinito
        printf("Digite o primeiro numero: ");
        scanf("%i", &num1);
        printf("Digite o segundo numero: ");
        scanf("%i", &num2);
        printf("Escolha a operacao +[1] -[2] *[3] /[4]");
        scanf("%i", &op);
        if (op==1){
            printf("RESULTADO DA SOMA >> %i", num1+num2);
        }
        else{
            if (op==2){
                printf("RESULTADO DA SUBTRACAO >> %i", num1-num2);
            }
            else{
                if(op==3){
                    printf("RESULTADO DA MULTIPLICACAO >> %i", num1*num2);
                }
                else{
                    if (num2>0){
                        printf("RESULTADO DA DIVISAO >> %i", num1/num2);
                    }
                    else{
                        printf("DIVISAO IMPOSSIVEL...\n");
                    }
                }
            }
        }
    }

    return (EXIT_SUCCESS);
}

