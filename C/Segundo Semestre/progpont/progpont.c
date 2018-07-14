/* 
 * File:   progpont.c
 * Author: Geral
 *
 * Created on 31 de Outubro de 2014, 20:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void xpto(int x){
    x=1;
}

int main(){
    int x=10;
    scanf("%d", &x);
    xpto(x);
    printf("%d ", x);
    int *novoArray = (int *)malloc(sizeof(int) * 5);
    int i;
    for(i=0; i<5; i++){
        scanf("%d", (novoArray + i));
    }
    for(i=0; i<5; i++){
        printf("\n%d", *(novoArray + i));
    }    
    free(novoArray);
    return 0;
}

/*int main(int argc, char** argv) {
    int array[5] = {1,2,3,4,5};
    int *ap = array;
    int i, flag=0;
    if (flag==0){
        printf("Array 1\t\n");
        for(i=0; i<5 ; i++){
            printf("%d\t\n", *(ap+i));
            //printf("%d ", *ap);
            //ap++;
        }
        flag++;
    } 
    printf("\n\n");
    if(flag==1){
        printf("Array 2\t\n");
        for(i=0; i<5 ; i++){
            printf("%d\n", *(array+i));
            //printf("%d ", *ap);
            //ap++;
        }
    }
    
    return (EXIT_SUCCESS);
}
*/

