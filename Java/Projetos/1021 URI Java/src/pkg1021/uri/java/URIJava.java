/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg1021.uri.java;

import java.util.Scanner;

/**
 *
 * @author NOTEBOOKTJ
 */
public class URIJava {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        float N;
        int n, resto, centavos;
        Scanner sc = new Scanner(System.in);
        N = sc.nextFloat();
        n = ((int) N);
        centavos = Math.round((N - (int) N) * 100);
        
        System.out.println("NOTAS:");
        System.out.println(n/100 + " nota(s) de R$ 100.00");
        resto = n%100;
        System.out.println(resto/50 + " nota(s) de R$ 50.00");
        resto = resto%50;
        System.out.println(resto/20 + " nota(s) de R$ 20.00");
        resto = resto%20;
        System.out.println(resto/10 + " nota(s) de R$ 10.00");
        resto = resto%10;
        System.out.println(resto/5 + " nota(s) de R$ 5.00");
        resto = resto%5;
        System.out.println(resto/2 + " nota(s) de R$ 2.00");
        resto = resto%2;
        System.out.println("MOEDAS:");
        System.out.println(resto/1 + " moeda(s) de R$ 1.00");
        resto = centavos;
        System.out.println(resto/50 + " moeda(s) de R$ 0.50");
        resto = resto%50;
        System.out.println(resto/25 + " moeda(s) de R$ 0.25");
        resto = resto%25;
        System.out.println(resto/10 + " moeda(s) de R$ 0.10");
        resto = resto%10;
        System.out.println(resto/5 + " moeda(s) de R$ 0.05");
        resto = resto%5;
        System.out.println(resto/1 + " moeda(s) de R$ 0.01");
        
       
//        System.out.println(Math.round((N - (int) N) * 100));
//        
    }
    
}
