/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Threads;

import static java.lang.Thread.sleep;
import java.util.Random;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JTextField;

/**
 *
 * @author NOTEBOOKTJ
 */
public class Randomico implements Runnable{

    private final JTextField quantia;
    private final JTextField sorteado;
    
    public Randomico(JTextField quantia, JTextField sorteado){
        this.quantia = quantia;
        this.sorteado = sorteado;
    }
    
    @Override
    public void run() {
        Random rd = new Random();
        int quantia2 = Integer.parseInt(quantia.getText());
        String testeTamanho;
        for(int i = 0; i < 100; i++){
            try {
                sleep(100);
                int sorteio = rd.nextInt(quantia2 + 1);
                testeTamanho = String.valueOf(sorteio);
                if(testeTamanho.length() == 1){
                    sorteado.setText("000" + testeTamanho);    
                } else if(testeTamanho.length() == 2){
                    sorteado.setText("00" + testeTamanho);    
                } else if(testeTamanho.length() == 3){
                    sorteado.setText("0" + testeTamanho);    
                } else if(testeTamanho.length() == 4){
                    sorteado.setText(testeTamanho);    
                } 
                
            } catch (InterruptedException ex) {
                Logger.getLogger(Randomico.class.getName()).log(Level.SEVERE, null, ex);
            }
            
        }
    }
    
}
