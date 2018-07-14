/* 
 * File:   prog2aula13082014.c
 * Author: Geral
 *
 * Created on 13 de Agosto de 2014, 18:47
 */

#include <stdio.h>
#include <stdlib.h>

int primo(int n, int numcorrente, int num){
 
    
}

int main (){
    int numero, n, numcorrente, cont;
    printf("Digite qual numero primo você quer: ");
    scanf("%d", &n);
    numero=1;
    while (n>0){
        numcorrente=1;
        cont = 0;
        while(numcorrente <= numero){
            cont += numero % numcorrente == 0? 1:0;
            numcorrente++;
        }
        if(cont <= 2){
            if (n==1){
                printf("%d \n", numero);
            }
                n--;
            
        }
        numero++;
    }
    return (EXIT_SUCCESS);
}


/*int main (){
    int numero, n, numcorrente, cont;
    printf("Digite qual numero primo você quer: ");
    scanf("%d", &n);
    numero=1;
    while (n>0){
        numcorrente=1;
        cont = 0;
        while(numcorrente <= numero){
            cont += numero % numcorrente == 0? 1:0;
            numcorrente++;
        }
        if(cont <= 2){
            printf("%d ", numero);
            n--;
        }
        numero++;
    }
    return (EXIT_SUCCESS);
}
*/


/*int main (){
    int n=0, numcorrente=1, cont=0;
    printf("Informe o numero: ");
    scanf("%d", &n);
    while (numcorrente <= n){
        cont += n % numcorrente == 0? 1:0;
        numcorrente++;
    }
    if (cont <= 2){
        printf("Numero eh primo\n");
    } else{
        printf("Numero não eh primo\n");
    }
   return (0);
}
*/

/*int main(int argc, char** argv) {
    int numero, soma=0, incremento = 1;
    printf ("Informe o numero x: ");
    scanf("%d", &numero);
    while (soma<numero){
        soma=soma+incremento;
        incremento=incremento+2;
    }
    if (soma==numero){
        printf("\nNumero eh perfeito");
    } else{
        printf("\nNumero Nao eh Perfeito");
    }

    return (EXIT_SUCCESS);
}
*/

