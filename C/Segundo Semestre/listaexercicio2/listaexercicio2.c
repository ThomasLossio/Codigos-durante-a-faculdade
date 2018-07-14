/* 
 * File:   listaexercicio2.c
 * Author: Geral
 *
 * Created on 25 de Setembro de 2014, 18:38
 */

#include <stdio.h>
#include <stdlib.h>

    int i, j, r, s;

/*
 * 
 */
    
void Q2(){
    int m[4][4]={0,1,0,0, 0,0,1,0, 1, 0, 0, 0, 0,0,0, 1};
    int i, j, cont0, cont1;
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<4; i++){
        cont0=0;
        cont1=0;
        for (j=0; j<4; j++){
            cont0 += m[i][j]==0? 1:0;
            cont1 += m[i][j]==1? 1:0;
        }
        if (!(cont0==3 && cont1==1)){
            printf("Não he\n");
            return ;
        } 
    }
    printf("Linhas OK\n");
    for (j=0; j<4 ; j++){
        cont0=0;
        cont1=0;
        for (i=0; i<4; i++){
            cont0 += m[i][j]==0? 1:0;
            cont1 += m[i][j]==1? 1:0;
        }
            if (!(cont0==3 && cont1==1)){
            printf("Não he\n");
            return ;
        } 
    }
    printf("HE PERMUTACAO\n");
}

void intin() {
    int n = 0, i, j, custo = 0;
    int m[4][4] = {
        {4, 1, 2, 3},
        {5, 2, 1, 400},
        {2, 1, 3, 8},
        {7, 1, 2, 5}
    };

    printf("Digite a quantidade de intinerarios\n");
    scanf("%i", &n);
    int v[n];

    for (i = 0; i < n; i++) {
        printf("Digite os intineraios\n");
        scanf("%i", &v[i]);
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
    n--;
    for (i = 0; i < n; i++) {
        custo += m[v[i]][v[i + 1]];
        if (i == 7) {
        } else {
            if (i == 0) {
                printf("\n%d", m[v[i]][v[i + 1]]);
            } else printf(" + %d", m[v[i]][v[i + 1]]);
        }
    }
    printf("= %d\n", custo);
}



int main(int argc, char** argv) {
    int op;
    do{
        printf("\n[1] [2] [3] [4] [5] [0]Sair\n");
        scanf("%d", &op);
        system("clear");
        switch (op){
            case 1:{
                int m1[3][3], m2[3][3], flag=0;
                for(i=0; i < 3; i++){
                    for(j=0; j < 3; j++){
                        printf("Digite um numero: ");
                        scanf("%d", &m1[i][j]);
                        m2[i][j]=m1[i][j];
                    }
                }
                printf("\n\n\n\n");
                for(i=0; i < 3; i++){
                    for(j=0; j < 3; j++){
                        printf("%d ", m1[i][j]);
                    }
                    printf("\n");
                }    
                printf("\n");
                 for(i=0; i < 3; i++){
                    for(j=0; j < 3; j++){
                        flag=0;
                        for(r=0; r < 3; r++){
                            for(s=0; s < 3; s++){
                                if(m1[i][j] == m2[r][s] && flag == 0){
                                    flag=1;
                                } else {
                                    if(m1[i][j] == m2[r][s] && flag == 1){
                                        printf("%d é repetido\n", m1[i][j]);
                                    }
                                }
                            }
                        }
                    }
                }
            break;}
            case 2:{
                Q2();
            break;}
            case 3:{
                int m3[4][4], vl[4], vc[4], linhas=0, colunas=0;
                for(i=0; i < 4; i++){
                    for(j=0; j < 4; j++){
                        printf("Digite um numero: ");
                        scanf("%d", &m3[i][j]);
                    }
                }
                for(i=0; i < 4; i++){
                    if (m3[i][0]==0 && m3[i][1]==0 && m3[i][2]==0 && m3[i][3]==0){
                        vl[i]=1;
                    } else {
                        vl[i]=0;
                    }
                    for(j=0; j < 4; j++){
                        if (m3[0][j] == 0 && m3[1][j] == 0 && m3[2][j] == 0 && m3[3][j] == 0){
                                   vc[j]=1;
                        } else {
                                   vc[j]=0;
                        }
                        printf("%2d ", m3[i][j]);
                    }
                    printf("\n");
                }                
                for(i=0; i<4; i++){
                    if(vl[i]==1){
                        linhas++;
                    }
                    if(vc[i]==1){
                        colunas++;
                    }                    
                }
                printf("Temos %d linha(s) nula(s) e %d coluna(s) nula(s)", linhas, colunas);                
            break;}
            case 4:{
                int retur_menu = 1, opcao_menu;
                while (retur_menu == 1) {
                    printf("\n");
                    printf("[1]Intinerarios | [0]Sair\n");
                    scanf("%i", &opcao_menu);
                    switch (opcao_menu) {
                        case 1: intin();
                            break;
                        case 0: retur_menu = 0;
                            break;
                        default: break;
                    }
                }
            }
            case 5:{
                
            }
        }
    }while(op!=0);
    
    return (EXIT_SUCCESS);
}

