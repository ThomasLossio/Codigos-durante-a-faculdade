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
public class PrimeiraClasse {
    // atributos -> característica da classe
    private String atributo1;
    private double saldo;

    // construtores ->forma de construir um objeto
    public PrimeiraClasse() {
        this.saldo = 100;
    }    
    public PrimeiraClasse(double saldo){
        this.saldo = saldo;
    }
    public PrimeiraClasse(double saldo, String a){
        this.saldo = saldo;
        this.atributo1 = a;
    }
    
    // metodos -> Ações da classe Métodos padrões: getSSS setYYYY
    public String getAtributo1() {
        return atributo1;
    }

    public void setAtributo1(String atributo1) {
        this.atributo1 = atributo1;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }
    
    public void add1(){
        this.saldo++;
    }
}
