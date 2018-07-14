/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package main;

/**
 *
 * @author ThomasJefferson
 */
public class SomaLinhas implements Runnable{
    private int[][] m;
    private int linha;
    private int coluna;
    private int total;
    
    public SomaLinhas(int[][] m, int linha, int coluna){
        this.m = m;
        this.linha = linha;
        this.coluna = coluna;
        this.total = 0;
    }
    
    @Override
    public void run() {
        for(int i=0; i<linha; i++){
            for(int j = 0; j<coluna; j++){
                if(!(m[i][j] == 0) && (i+1==linha)){
                    total += m[i][j];
                }
            }
        }
        System.out.println("Linha " + linha + ": " + total);
    };
    
}
