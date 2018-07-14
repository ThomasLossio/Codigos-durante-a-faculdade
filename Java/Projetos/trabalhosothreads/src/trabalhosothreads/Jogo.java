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
public class Jogo {
        public static int cont;
        Correr correr = new Correr();
        Mirar mirar = new Mirar();
        Esquivar esquivar = new Esquivar();
        Atirar atirar = new Atirar();
        
        Thread corrert = new Thread(correr);
        Thread mirart = new Thread(mirar);
        Thread esquivart = new Thread(esquivar);
        Thread atirart = new Thread(atirar);    
        
        
        public void iniciar(){
            corrert.start();
            esquivart.start();           
            mirart.start();
            try {
                Thread.sleep(100);
            } catch (InterruptedException ex) {
                Logger.getLogger(Trabalhosothreads.class.getName()).log(Level.SEVERE, null, ex);
            }            
            atirart.start(); 
            try {
                Thread.sleep(100);
            } catch (InterruptedException ex) {
                Logger.getLogger(Trabalhosothreads.class.getName()).log(Level.SEVERE, null, ex);
            }            
            cont = Atirar.atirar();            
        }
}
