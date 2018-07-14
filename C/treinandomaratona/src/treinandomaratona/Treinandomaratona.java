/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package treinandomaratona;

import java.util.Scanner;

/**
 *
 * @author ThomasJefferson
 */
public class Treinandomaratona {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        String palavra;
        int cont = 0, contp = 0;
        Scanner sc = new Scanner(System.in);
        palavra = sc.next();
        palavra = palavra.toUpperCase();
//        System.out.println(palavra.length());
        for (int i = 0; i < palavra.length(); i++, cont++){
            if(cont == 3){
                cont = 0;
            }
            if(cont == 0){
                if(palavra.charAt(i) != 'P'){
//                    cont++;
                    contp++;
                }
            } else if(cont == 1){
                if(palavra.charAt(i) != 'E'){
//                    cont++;
                    contp++;
                }                
            } else if(cont == 2){
                if(palavra.charAt(i) != 'R'){
//                    cont++;
                    contp++;
//                    cont = 0;
                }                
            }
            
        }
        
        System.out.println(contp);
    }
    
}
