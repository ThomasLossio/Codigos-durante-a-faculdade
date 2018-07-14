/* 
 * File:   main.c
 * Author: NOTEBOOKTJ
 *
 * Created on 13 de Maio de 2017, 20:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float v1 = 100.00, v2= 50.00, v3 = 20.00, v4 = 10.00, v5 = 5.00, v6 = 2.00;
    float v7 = 1.00, v8 = 0.50, v9 = 0.25, v10 = 0.10, v11 = 0.05, v12 = 0.01, v;
    scanf("%f", &v);
    printf("NOTAS:\n");
    printf("%0.0f\n", floor(v/100));
    printf("%0.0f\n", floor(fmod(v,v1) / 50));
    printf("%.0f\n", floor(fmod(fmod(v,v1),v2)/20));
    printf("%.0f\n", floor(fmod(fmod(fmod(v,v1),v2),v3)/10));
    printf("%.0f\n", floor(fmod(fmod(fmod(fmod(v,v1),v2),v3),v4)/5));
    printf("%.0f\n", floor(fmod(fmod(fmod(fmod(fmod(v,v1),v2),v3),v4),v5)/2));
    printf("MOEDAS:\n");
    v = v - floor(v);
   // v = v + 0.001;
    v = v*100;
    printf("%f", v);
    printf("%0.0f\n", floor(v/100.00));
    printf("%0.0f\n", floor(fmod(v,v1) / 50.00));
    printf("%.0f\n", floor(fmod(fmod(v,v1),v2)/20.00));
    printf("%.0f\n", floor(fmod(fmod(fmod(v,v1),v2),v3)/10.00));
    printf("%.0f\n", floor(fmod(fmod(fmod(fmod(v,v1),v2),v3),v4)/5.00));
    printf("%.0f\n", floor(fmod(fmod(fmod(fmod(fmod(v,v1),v2),v3),v4),v5)/2.00));
    printf("%.0f\n", floor(fmod(fmod(fmod(fmod(fmod(fmod(v,v1),v2),v3),v4),v5),v6)/1.00));
    
    return (EXIT_SUCCESS);
}

