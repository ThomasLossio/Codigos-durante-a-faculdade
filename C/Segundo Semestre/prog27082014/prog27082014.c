/* 
 * File:   teste.c
 * Author: Geral
 *
 * Created on 27 de Agosto de 2014, 18:24
 */

#include <stdio.h>
#include <stdlib.h>

/*Funções sem retorno
 * void p3(){
    printf("   Inicio p3\n");
    printf("   Final p3\n");
}
void p2(){
    printf("  Inicio p2\n");
    p3();
    printf("  Final p2\n");
}
void p1(){
    printf(" Inicio p1\n");
    p2();
    printf(" Final p1\n");
}

int main(int argc, char** argv) {
    printf("Inicio prog\n");
    p1();
    printf("Fim prog\n");
*/
int soma(int x, int y){
    return x+y;
}

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int resultado = soma(x,y);
    printf("\n resultado %d \n", resultado);
    printf("\n resultado %d \n", soma(x,y));
    return (EXIT_SUCCESS);
}

