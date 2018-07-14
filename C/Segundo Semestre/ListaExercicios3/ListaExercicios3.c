/* 
 * File:   ListaExercicios3.c
 * Author: Geral
 *
 * Created on 16 de Novembro de 2014, 17:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
/*int *array, i, n, min, max;
int mm(int valor[n], int tam){
    min = *(valor+0);
    for (i=1; i<tam;i++){
        if (*(valor+i)<min){
            min = *(valor+i);
        }
    }
    max = *(valor+0);
    for (i=1; i<tam;i++){
        if (*(valor+i)>max){
            max = *(valor+i);
        }
    }
}
int main(int argc, char** argv) {
    printf("Digite o tamanho do Vetor: ");
    scanf("%d", &n);
    array = (int *) malloc(sizeof(int) * n);
    for(i=0; i<n; i++){
        printf("Digite um valor: ");
        scanf("%d", (array+i));
    }
    for(i=0; i<n; i++){
        printf("\nConferindo valor na posição %d: %d", i, *(array+i));
    }
    printf("\n");
    mm(array, n);
    printf("\nValor Mínimo: %d", min);
    printf("\nValor Máximo: %d", max);
    printf("\n");
    return (EXIT_SUCCESS);
}

char *strcopy(char *str) { 
 int n, i; 
 char *copia; 
 for (n = 0; str[n] != '\0'; n++) {} 
 copia = malloc(sizeof(char) * n); 
 for (i = 0; i <= n; i++) { 
 copia[i] = str[i]; 
 } 
 return copia; 
} 

int *acha_caractere(char *str, char c, int *pn) {
 int i = 0, n = 0, *indices = 0;
 for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == c) {
        n++;
    }
 }
 indices = (int *) malloc(n* sizeof(int));
 for (i = 0, n = 0; str[i] != '\0'; i++) {
     if (str[i] == c) {
         indices[n] = i;
         n++;
     }
 }
 *pn = n;
 return indices;
}

int main() {
 int *indices = 0, n = 0, i;
 char *frase = "algoritmo e estrutura de dados";
 indices = acha_caractere(frase, 'a', &n);
 printf("A letra escolhida aparece nas seguintes posições do vetor: ");
 for (i = 0; i < n; i++) {
        printf("%d ", indices[i]);
 }
 printf("\n");
 return 0;
}
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
    float percentual_faltas = faltas*100/(float)aulas;
    float med = (p1+p2+p3)/3;
    *media = med;
    if (percentual_faltas > 25){
        return 'F';
    }else{
        if (med >= 6.0){
            return 'A';
        }else{
            return 'R';
        }
    }
}

int main(){
    float p1, p2, p3;
    int aulas, faltas;
    char sit;
    float media;
    printf("Digite primeira nota: ");
    scanf("%f", &p1);
    printf("Digite segunda nota: ");
    scanf("%f", &p2);
    printf("Digite terceira nota: ");
    scanf("%f", &p3);
    printf("Digite número de faltas: ");
    scanf("%d", &faltas);
    printf("Total de aulas da disciplina: ");
    scanf("%f", &aulas);
    sit = situacao(p1, p2, p3, faltas, aulas, &media);
    if (sit == 'A'){
        printf("\n%.1f APROVADO\n\n", media);
    }else if (sit == 'R'){
        printf("\n%.1f REPROVADO\n\n", media);
    }else{
        printf("\n%.1f REPROVADO POR FALTA\n\n", media);
    }
    return 0;
}

int main(){
    int *pti;
    int i = 10;
    pti = &i;
    printf("*pti: %d\n", *pti);
    printf("pti: %d\n", pti);
    printf("i: %d\n", i);
    printf("&i: %d\n", &i);
}

int main(){
    int x, *ptx, **pp;
    float a, *pta, **pf;
    x=100; //a
    *pta = &a; 
    ptx = &a;
    *pf = &a; //d
    pp = &pta;
    **pf = 7.9; //f
    *ptx = 20; //g
    ptx = &x; //h
    pp = &x;
    pf = &pta; //j
}
int main(){
    int i, *pi, **ppi;
    float f, *pf, **ppf;
    i=f;//a
    pf=&i;
    *pf=5.9;//c
    *ppi=&pi;
    *pf=10;//e
    f=i;//f
    pi=&f;
    *pi=7.3;//h
    ppf=&pf;//i
    **ppi=100;//j
}

int *v1, *v2, n=0, i, k, max;

int inverte_vetor(int *v1, int *v2, int n){
    max = *(v1+0);
    for (i=1; i<n;i++){
        if (*(v1+i)>max){
            max = *(v1+i);
        }
    }
    for(i=0, k=n; i<n; i++, k--){
        *(v2+k-1) = *(v1+i);
    }
    return max;
}

int main(){
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    v1 = (int *) malloc(sizeof(int) * n);
    v2 = (int *) malloc(sizeof(int) * n);
    for(i=0; i<n; i++){
        printf("Digite um valor: ");
        scanf("%d", (v1+i));
    }
    //for(i=0; i<n; i++){
    //    (v2+i) = 0;
    //}
    printf("\n");
    printf("O maior valor colocado no vetor é: %d", inverte_vetor(v1, v2, n));
    printf("\nO vetor invertido fica da seguinte forma: ");
    printf("\n");
    for(i=0; i<n; i++){
        printf("%d ", *(v2+i));
    }
    printf("\n");
}
 */
int main(){
        int i, *p = &i;
        printf("%u  %d  %d  %d  %d  \n",  p,  *p+2,  **&p,  3**p, **&p+4);
}
