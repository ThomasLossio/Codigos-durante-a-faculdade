/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package testes;

import java.util.Random;

/**
 *
 * @author thoma
 */
public class Testes {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int gene[][] = new int[5][10];
        
        Random rd = new Random();
        for (int i = 0; i < gene.length; i++) {
            for(int j = 0; j < gene.length; j++){
                gene[i][j] = rd.nextInt(41) + 25;

            }
        }        
        String s = "[ ";
        for (int i = 0; i < gene.length; i++) {
            for (int j = 0; j < gene.length; j++){
                s += gene[i][j] + " ";
            }
            s += "\n";
            
        }
        s += " ]";
        System.out.println(s);
        System.out.println("Tamanho da matriz: " + gene.toString());
    }
    
}
