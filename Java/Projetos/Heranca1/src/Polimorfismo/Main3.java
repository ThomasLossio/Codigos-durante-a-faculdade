/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Polimorfismo;

/**
 *
 * @author ThomasJefferson
 */
public class Main3 {
    public static void polimorfismo(Andador a){
        a.anda();
    }
    
    public static void main(String[] args) {
        Carro C1 = new Carro("fusca");
        Carro C2 = new Carro("ferrari");
        
        System.out.println(C1.compareTo(C2));
        
    }
}
