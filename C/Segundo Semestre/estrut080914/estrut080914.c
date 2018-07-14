/* 
 * File:   estrut080914.c
 * Author: Geral
 *
 * Created on 8 de Setembro de 2014, 18:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void exemplo01(){
    int i=0, j=0;
    int matriz[10][10];
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            matriz[i][j]=i+j;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}


void soma(){
    int m1[10][10], m2[10][10], m3[10][10], i, j;
        for(i=0; i<10; i++){
            for(j=0; j<10; j++){
                m1[i][j]=i+j;
                m2[i][j]=i*j;
                m3[i][j]=m1[i][j]+m2[i][j];
                printf("%2d ", m3[i][j]);
            }
            printf("\n");
        }
}
void mult(){
    int m1[10][10], m2[10][10], m3[10][10], i, j;
        for(i=0; i<10; i++){
            for(j=0; j<10; j++){
                m1[i][j]=i+j;
                m2[i][j]=i*j;
                m3[i][j]=m1[i][j]*m2[i][j];
                printf("%4d ", m3[i][j]);
        }
        printf("\n");
    }   
}

void quadrado_magico(){
    int m[3][3], i, j, soma1, soma2, soma3;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("\nIndique um numero: ");
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("\n\nNumero: %2d", m[i][j]);
        }
    }   
    soma1=m[0][0]+m[0][1]+m[0][2];
    soma2=m[1][0]+m[1][1]+m[1][2];
    soma3=m[2][0]+m[2][1]+m[2][2];
    printf("\n\n%2d %2d %2d", soma1, soma2, soma3);
    if (soma1==soma2 && soma2==soma3){
        printf("\n\nÉ um quadrado mágico!\n");
    } else{
        printf("\n\nNão é um quadrado mágico!\n");
    }
}

int main(int argc, char** argv) {
    //exemplo01();
    //soma();
    //mult();
    quadrado_magico();
    return (EXIT_SUCCESS);
}

