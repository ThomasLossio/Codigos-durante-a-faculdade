/* 
 * File:   util.h
 * Author: Marcos
 *
 * Created on 5 de Setembro de 2014, 21:08
 */

#ifndef UTIL_H
#define	UTIL_H

#ifdef	__cplusplus
extern "C" {
#endif

    double lerDouble(char nome[25]){
        printf("%s \n", nome);
        double valor;
        scanf("%lf", &valor);
        return valor;
    }
    
    int lerInteiro(char nome[25]){
        printf("%s \n", nome);
        int valor;
        scanf("%d", &valor);
        return valor;
    }



#ifdef	__cplusplus
}
#endif

#endif	/* UTIL_H */

