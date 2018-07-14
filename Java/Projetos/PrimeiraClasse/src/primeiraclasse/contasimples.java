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
public class contasimples {
    private String titular;
    private double saldo;

    public contasimples(String titular, double saldo) {
        this.titular = titular;
        this.saldo = saldo;
    }
    
    public void depositar(double valor){
        this.saldo += valor;
    }

    public void sacar(double valor){
        this.saldo -= valor;
    }
    public double getSaldo(){
        return this.saldo;
    }
    
    public static void main(String[] args) {
        contasimples c = new contasimples("Thomas", 788.0);
        c.sacar(100);
        c.depositar(300);
        System.out.println("Saldo conta: " + c.getSaldo());
    }
    
}
