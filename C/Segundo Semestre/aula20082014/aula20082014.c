/* 
 * File:   aula20082014.c
 * Author: Geral
 *
 * Created on 20 de Agosto de 2014, 18:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
/*    int n, m=1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    printf("\n|%2d                         %2d|", m, n);
    printf("\n|%2d %2d                   %2d %2d|", m, m+1, n-1, n);
    printf("\n|%2d %2d %2d             %2d %2d %2d|", m, m+1, m+2, n-2, n-1, n);
    printf("\n|%2d %2d %2d %2d       %2d %2d %2d %2d|", m, m+1, m+2, m+3, n-3, n-2, n-1, n);
    printf("\n|%2d %2d %2d %2d %2d %2d %2d %2d %2d %2d|", m, m+1, m+2, m+3, m+4, n-4, n-3, n-2, n-1, n);
*/
    int n, i;
    scanf("%d", &n);
    int k=1, j=n;
    while(k<=j){
        for (i=1; i<=n; i++){
            if(i<=k || i >=j){
                printf("%d ", i);
            } else{
                printf(" ");
            }
        }
        printf("\n");
        k++;
        j--;
    }

/*    int n, i;
    scanf("%d", &n);
    int k=1, j=n;
    while (k<=n){
        for (i=0; i<k; i++){
            printf("* ");
        }
        k++;
        printf("\n");
    }
*/
    return (EXIT_SUCCESS);
}

