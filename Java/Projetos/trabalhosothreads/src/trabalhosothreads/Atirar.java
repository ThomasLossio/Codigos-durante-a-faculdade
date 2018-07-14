/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trabalhosothreads;

import java.util.Random;

/**
 *
 * @author ThomasJefferson
 */
public class Atirar implements Runnable{    

    public void run(){
        System.out.println("Atirar...");

//        Random gerador = new Random();
//        
//        if(gerador.nextBoolean()){
//            System.out.println("Acertou o Tiro");
//        } else {
//            System.out.println("Errou o Tiro");
//        }    
    }
    
    public static int atirar(){
        Random gerador = new Random();
        
        if(gerador.nextBoolean()){
            System.out.println("Acertou o Tiro");
            return 1;
        } else {
            System.out.println("Errou o Tiro");
            return 0;
        }            
    }

    

}
