/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package negocio;

/**
 *
 * @author ThomasJefferson
 */
public class LinhaVenda {
    private int quantidade;
    private Picole picole;

    public LinhaVenda(int quantidade, Picole picole) {
        this.quantidade = quantidade;
        this.picole = picole;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    public Picole getPicole() {
        return picole;
    }

    public void setPicole(Picole picole) {
        this.picole = picole;
    }
    
    
    public double getPrecoUnitario(){
        return picole.getPreco();
    }

    public double getPrecoTotal(){
        return quantidade * picole.getPreco();
    }
}
