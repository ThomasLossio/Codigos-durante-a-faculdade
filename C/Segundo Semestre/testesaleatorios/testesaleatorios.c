/* 
 * File:   testesaleatorios.c
 * Author: Geral
 *
 * Created on 22 de Setembro de 2014, 19:21
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*
 * 
 */
int divisivel (int numero);
void main (){
int numero;
printf("Digite um valor: ");
scanf ("%d%*c", &numero);
int caso = divisivel (numero);
printf ("O valor é %d",caso);
}

int divisivel (int numero){
int caso;
if ((numero % 3 == 0) && (numero % 7 == 0)){
     caso = 1;
   }else {
     caso = 0;
   }
   return caso;
}
