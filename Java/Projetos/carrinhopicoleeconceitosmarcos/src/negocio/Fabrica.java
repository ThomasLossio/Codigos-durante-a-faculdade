/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package negocio;

import java.util.ArrayList;

/**
 *
 * @author ThomasJefferson
 */
public class Fabrica {
    private ArrayList<Carrinho> carrinhos;



    public Fabrica(ArrayList<Carrinho> carrinhos) {
        this.carrinhos = carrinhos;
    }

    public ArrayList<Carrinho> getCarrinhos() {
        return carrinhos;
    }

    public void setCarrinhos(ArrayList<Carrinho> carrinhos) {
        this.carrinhos = carrinhos;
    }

    public void criarUmCarrinho(){
        this.carrinhos.add(new Carrinho());
    }
    
}
