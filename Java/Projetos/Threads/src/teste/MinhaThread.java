package teste;

import javax.swing.JOptionPane;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ThomasJefferson
 */
public class MinhaThread extends Thread{
    private String letra;
    public MinhaThread(String name) {
        this.letra=name;
    }
    
    
    @Override
    public void run (){
        for(int i = 1; i<=10000; i++){
            System.out.println(letra + i);

        }
    };
}
