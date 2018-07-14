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
public class Carro implements Comparable<Carro>{
    private String nome;
    
    public Carro(String nome){
        this.nome = nome;
    }

    @Override
    public int compareTo(Carro o) {
        return this.nome.compareTo(o.nome);
    }
    
}
