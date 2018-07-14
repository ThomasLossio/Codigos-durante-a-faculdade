/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 24 de Agosto de 2016, 14:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, m, i;
    scanf("%d", &n);
    scanf("%d", &m);
    int x[m], y[m], tag = 0;
    for(i=0; i<m; i++){
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    for(i=0; i<m; i++){
        if(x[i] == y[i] || y[i] > n || x[i]<1){
            printf("Impossible ");
            tag = 0;
        } else {
            if(tag == 0){
                printf("pub ");
                tag = 1;
            } else {
                printf("house ");
                tag = 0;
            }
        }
    }
    return (EXIT_SUCCESS);
}

