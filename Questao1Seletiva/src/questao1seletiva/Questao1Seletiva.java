/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package questao1seletiva;

import java.util.Scanner;


public class Questao1Seletiva {

    public static void main(String[] args) {
        int T, i, j;
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();
        Integer[] N = new Integer[T];
        for(i = 0; i < T; i++){
            N[i] = sc.nextInt();
        }
        int total = 0, aux;
        for(i = 0; i < T; i++){
            aux = 2;
            total = N[i];
            for(j = 0; j < total; total--){
                    if(total <= 1){
                        break;
                    } else {
                        aux = aux * 2;
                        aux = aux % 100000;
                    }         
            }
            System.out.println((aux - 1)); 
        }                
    }
}

