/* 
 * File:   funcaorand.c
 * Author: Geral
 *
 * Created on 18 de Novembro de 2014, 11:01
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **participantes;
int *aux;

int Dado(){
    int num=0;
    num = (rand() % 6);
    return num;
}

int main(){
    int nov=1, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, total=0, num;
    while(nov!=2){
        num=Dado();
        printf("\nNúmero: %d", num);
        if(num == 1){
            c1++;
            total++;
        } else if(num == 2){
            c2++;
            total++;
        } else if(num == 3){
            c3++;
            total++;
        } else if(num == 4){
            c4++;
            total++;
        } else if(num == 5){
            c5++;
            total++;
        } else if(num == 6){
            c6++;
            total++;
        } 
        printf("\nDeseja jogar o Dado novamente? [1]Sim/[2]Não");
        scanf("%d", &nov);
    }
    printf("\nTotal: %d", total);
    printf("\nNúmero de vezes do número 1: %d \n", c1);
    printf("Porcentagem de aparição: %2f\n", (c1/total));
    printf("\nNúmero de vezes do número 2: %d e porcentagem de aparição: %f\n", c2, (c2/total));
    printf("\nNúmero de vezes do número 3: %d e porcentagem de aparição: %f\n", c3, (c3/total));
    printf("\nNúmero de vezes do número 4: %d e porcentagem de aparição: %f\n", c4, (c4/total));
    printf("\nNúmero de vezes do número 5: %d e porcentagem de aparição: %f\n", c5, (c5/total));
    printf("\nNúmero de vezes do número 6: %d e porcentagem de aparição: %f\n", c6, (c6/total));
    
    return 0;
//    int i, n, op=0, op2=0, aux2, k;
//    printf("Quantas Pessoas Participarão do Sorteio?\n");
//    scanf("%d", &n);
//    participantes = (char **)malloc(sizeof(char *) * n);
//    aux = (int *)malloc(sizeof(int) * n);
//    for(i=0; i<n; i++){
//        participantes[i] = (char *)malloc(sizeof(char) * 50);
//    }
//    for(i=0; i<n; i++){
//        printf("Digite o nome do participante %d: ", i+1);
//        scanf("%s", participantes[i]);
//    }
//    printf("\n\nOs participantes são:\n\n");
//    for(i=0; i<n; i++){
//        printf("%2d- %s\n", i+1, participantes[i]);
//    }    
//    printf("\n");
//    for(i=0; i<n; i++){  
//        while(op==i){
//            printf("\n\nA vez de escolha é de: %s\n", participantes[i]);
//            printf("\nDigite qualquer número para puxar um nome!\n");
//            scanf("%d", &op2);
//            srand( (unsigned)time(NULL) );    
//            aux2 = rand() % n;
//            for(k=0; k<n; k++){
//            //printf("\nO numero que %s sorteou foi: %s\n", participantes[i], participantes[aux+1]);
//                if(aux2!=i && aux2!=aux[k]){
//                    aux[k]=aux2;
//                    op++;
//                    printf("Você sorteou: %s", participantes[aux[k]]);
//                }
//            }
//        }
//    }
}
