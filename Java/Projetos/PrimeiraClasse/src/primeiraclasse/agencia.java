/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package primeiraclasse;

import java.util.HashMap;

/**
 *
 * @author ThomasJefferson
 */
public class agencia {
    private String nome;
    private HashMap<Integer, contasimples> contas;
    private int geradorNumero = 0;
    
    public agencia(String nome){
        this.nome = nome;
        this.contas = new HashMap<>();
    }
    
    public void adicionarConta(contasimples c){
        this.contas.put(geradorNumero, c);
        geradorNumero++;
    }
    
    public void removerConta(int numero){
        if(contas.containsKey(numero)){
            contas.remove(numero);
        }
    }
    
    public contasimples buscar(int numero){
            return contas.get(numero);
    }
}
