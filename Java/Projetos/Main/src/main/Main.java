/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package main;

import java.util.Random;

/**
 *
 * @author ThomasJefferson
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int linha = 25;
        int coluna = 25;
        int[][] a = new int[linha][coluna];
        Random rd = new Random();
        
        for(int i = 0; i<linha; i++){
            for(int j = 0; j<coluna; j++){
                a[i][j] = rd.nextInt(11);
                System.out.print(a[i][j] + " ");
            }
            System.out.print("\n");
            SomaLinhas sm = new SomaLinhas(a, i+1, coluna);
            Thread t = new Thread(sm);
            t.start();           
        }
    }
    
}
