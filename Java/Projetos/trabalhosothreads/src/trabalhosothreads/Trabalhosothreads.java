/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabalhosothreads;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author ThomasJefferson
 */


public class Trabalhosothreads {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Jogo j1;
        Jogo j2;
        int cont1 = 0, cont2 = 0;
        
        while(true){
            System.out.println("\n\nJogador 1: ");
            j1 = new Jogo();
            j1.iniciar();
            try {
                Thread.sleep(200);
            } catch (InterruptedException ex) {
                Logger.getLogger(Trabalhosothreads.class.getName()).log(Level.SEVERE, null, ex);
            }            
            cont1 += Jogo.cont;
            System.out.println("Pontos Jogador 1: " + cont1);
            if(cont1==51){
                System.out.println("\nJogador 1 foi o vencedor!");
                break;
            }
            try {
                Thread.sleep(5000);
            } catch (InterruptedException ex) {
                Logger.getLogger(Trabalhosothreads.class.getName()).log(Level.SEVERE, null, ex);
            }
            
            System.out.println("\n\nJogador 2: ");            
            j2 = new Jogo();
            j2.iniciar();
            try {
                Thread.sleep(200);
            } catch (InterruptedException ex) {
                Logger.getLogger(Trabalhosothreads.class.getName()).log(Level.SEVERE, null, ex);
            }            
            cont2 += Jogo.cont;
            System.out.println("Pontos Jogador 2: " + cont2);
            if(cont2==51){
                System.out.println("\nJogador 2 foi o vencedor!");
                break;
            }
            try {
                Thread.sleep(5000);
            } catch (InterruptedException ex) {
                Logger.getLogger(Trabalhosothreads.class.getName()).log(Level.SEVERE, null, ex);
            }            
        }
        System.out.println("Placar Final: ");
        System.out.println("Jogador 1 " + cont1 + "x" + cont2 + " Jogador 2 ");
    }
    
}
