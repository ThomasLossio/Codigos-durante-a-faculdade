/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 24 de Agosto de 2016, 16:01
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    long int T, N, kid, i, soma = 0;
    scanf("%ld", &T);
    while(T--){
    printf("\n");
        scanf("%ld", &N);
        for(i = 0, soma = 0; i < N; i++){
            scanf("%ld", &kid);
            soma += kid;
            soma = soma % 100000;
        }
        if(soma % N == 0){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
   
    
    return (EXIT_SUCCESS);
}

