/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teste;

import java.util.Random;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author ThomasJefferson
 */
public class Cavalo implements Runnable{
    private String nome;
    private int metros;
    
    public Cavalo(String nome){
        this.nome = nome;
        this.metros = 0;
    }
    
    public int Distancia(){
        return this.metros;
    }
    
    @Override
    public void run() {
        Random r = new Random();
        for(int i = 0; i < 60; i++){
            metros += r.nextInt(4) + 1;
            try {
                Thread.sleep(1000);
                System.out.println("No segundo " + (i+1) + " " + nome + " " + "correu até agora: " + metros + " metros!");
            } catch (InterruptedException ex) {
                System.err.println("Erro!");
            }
            System.out.println("");
        }
        System.out.println(nome + " correu " + metros + " metros");
    }
    
}
