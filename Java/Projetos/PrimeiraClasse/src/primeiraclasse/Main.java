/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package primeiraclasse;

/**
 *
 * @author ThomasJefferson
 */
public class Main {
    public static void main(String[] args) {
        PrimeiraClasse p = new PrimeiraClasse();
        PrimeiraClasse p2 = new PrimeiraClasse(10);
        System.out.println("saldo P: " + p.getSaldo());
        p.setSaldo(111);
        p.add1();
        System.out.println("Novo saldo P: " + p.getSaldo());        
        System.out.println("saldo P2: " + p2.getSaldo());
        
    }
}
