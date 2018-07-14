/* 
 * File:   main.c
 * Author: Geral
 *
 * Created on 21 de Abril de 2014, 14:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    float tf=0, tc=0, tk=0;
    int temp1=0, temp2=0, nov=1;
    char op;
    //formulas -> C para F: tf<-(9*tc+160)/5, C para K: tk<-tc+273, F para C: tc<-(tf*5-160)/9, F para K: tk<-(tf*5+2297)/9, K para C: tc<-tk-273, K para F: tf<-(tk*9-2297)/5
    printf ("Para digitar a temperatura, escolha: [1] Celsius, [2] Fahrenheit e [3] Kelvin\n");
    while (nov==1){
        nov=0;
        printf("Diga qual temperatura você quer fazer a conversão: \n");
        scanf("%i", &temp1);
        switch (temp1){
            case 1:{
                printf("Agora diga para qual temperatura você quer converter: \n");
                scanf("%i", &temp2);
                switch (temp2){
                    case 2:{
                        printf("Digite o valor da temperatura em Graus Celsius(ºC): \n");
                        scanf("%f", &tc);
                        tf=(9*tc+160)/5;
                        printf("O valor da temperatura em Graus Fahrenheit(ºF) é igual a: %.2f\n", tf);                        
                    break;}
                    case 3:{
                        printf("Digite o valor da temperatura em Graus Celsius(ºC): \n");
                        scanf("%f", &tc);
                        tk=tc+273;
                        printf("O valor da temperatura em Graus Kelvin(K) é igual a: %.2f\n", tk);                        
                    break;}
                    default: printf("Opçao Invalida\n");
                }
            break;}
            case 2:{
                printf("Agora diga para qual temperatura você quer converter: \n");
                scanf("%i", &temp2);
                switch (temp2){
                    case 1:{
                        printf("Digite o valor da temperatura em Graus Fahrenheit(ºF): \n");
                        scanf("%f", &tf);
                        tc=(tf*5-160)/9;
                        printf("O valor da temperatura em Graus Celsius(ºC) é igual a: %.2f\n", tc);                        
                    break;}
                    case 3:{
                        printf("Digite o valor da temperatura em Graus Fahrenheit(ºF): \n");
                        scanf("%f", &tf);
                        tk=(tf*5+2297)/9;
                        printf("O valor da temperatura em Graus Kelvin(K) é igual a: %.2f\n", tk);                                                
                    break;}
                    default: printf("Opçao Invalida\n");
                }                
            break;}
            case 3:{
                printf("Agora diga para qual temperatura você quer converter: \n");
                scanf("%i", &temp2);
                switch (temp2){
                    case 1:{
                       printf("Digite o valor da temperatura em Graus Kelvin(K): \n");
                       scanf("%f", &tk);
                       tc=tk-273;
                       printf("O valor da temperatura em Graus Celsius(ºC) é igual a: %.2f\n", tc);                       
                    break;}
                    case 2:{
                        printf("Digite o valor da temperatura em Graus Kelvin(K): \n");
                        scanf("%f", &tk);
                        tf=(tk*9-2297)/5;
                        printf("O valor da temperatura em Graus Fahrenheit(ºF) é igual a: %.2f\n", tf);
                    break;}
                    default: printf("Opçao Invalida\n");
                }      
            break;}
        break;
        default: printf("Opçao Invalida\n");
        }


        printf("Deseja fazer novamente? (S[1] / N[2]) \n");
        scanf("%i", &nov);
    }
    printf("Programa terminado com sucesso!\n");
 

    return (EXIT_SUCCESS);
}

