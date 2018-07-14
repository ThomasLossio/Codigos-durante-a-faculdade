/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teste;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author ThomasJefferson
 */
public class Main {
    public static void main(String[] args) {
        int[] dist = new int[5];
        dist[0] = 0;
        dist[1] = 0;
        dist[2] = 0;
        dist[3] = 0;
        dist[4] = 0;
        int dist1 = 0, dist2 = 0, dist3 = 0, dist4 = 0, dist5 = 0 ;
        Cavalo c1 = new Cavalo("Teste 1");
        Cavalo c2 = new Cavalo("Teste 2");
        Cavalo c3 = new Cavalo("Teste 3");
        Cavalo c4 = new Cavalo("Teste 4");
        Cavalo c5 = new Cavalo("Teste 5");
        Thread t1 = new Thread(c1);        
        Thread t2 = new Thread(c2);        
        Thread t3 = new Thread(c3);        
        Thread t4 = new Thread(c4);        
        Thread t5 = new Thread(c5);
        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();

        
        try {
            Thread.sleep(61000);
            
        } catch (InterruptedException ex) {
            System.err.println("Erro!!!!");
        }
                dist[0] = c1.Distancia();
                dist[1] = c2.Distancia();
                dist[2] = c3.Distancia();
                dist[3] = c4.Distancia();
                dist[4] = c5.Distancia();
                int maior = 0;
                String ganhou = "";
                    for(int i = 0; i < 5 ; i++){
                        if(dist[i] > maior){
                            maior = dist[i];
                            
                        }
                    }
        
        
    }
}
