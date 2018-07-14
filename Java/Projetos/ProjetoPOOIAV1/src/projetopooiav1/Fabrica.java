/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projetopooiav1;

import java.util.HashMap;


public class Fabrica {
    CarrinhoPicole carro;
    private HashMap<Integer, CarrinhoPicole> carrinho = new HashMap<>();
    private int id = 1;
    

    
    public int adicionarCarrinho(){
        this.carro = new CarrinhoPicole();
        this.carrinho.put(id, carro);
        id++;
        return id-1;
    }
    
    public boolean removerCarrinho(int numero){
        if(carrinho.containsKey(numero)){
            carrinho.remove(numero);
            return true;
        }
        return false;
    }
    
    
    public void adicionarSabor(int numero, String Sabor, int qntd){
            this.carrinho.get(numero).addSabor(Sabor, qntd);
    }

    public void CarrinhoInform(int numero) {
        this.carrinho.get(numero).getSabor(numero);
    }

    public boolean vendaSabor(int numero, String nome, int quantidade) {
        if(this.carrinho.get(numero).decrementar(nome, quantidade) > 0){
            return true;
        } else{
            return false;
        }
    }
     
    public boolean buscaId(int numero) {
        return carrinho.containsKey(numero);
    } 
    
    public boolean buscaSabor(int numero, String Sabor){
        if(this.carrinho.get(numero).buscarSabor(Sabor)){
            return true;
        } else{
            return false;
        }
    }

     public void relatorio() {
        CarrinhoPicole.quantidadeTotal = 0;
        CarrinhoPicole.quantidadeTotalVendido = 0;
        
        for (int idAux : carrinho.keySet()) {
            carrinho.get(idAux).relatorio(idAux);
        }
        
        System.out.println("======================================================");
        System.out.println("\nQuantidade total de picolés acrescentados: " + CarrinhoPicole.quantidadeTotal);
        System.out.println("\nQuantidade Total Vendido: " + CarrinhoPicole.quantidadeTotalVendido);
        System.out.println("======================================================\n");
    }

    public void relatorioCarrinho(int id) {
        carrinho.get(id).relatorio(id);
    }
   
    
}
