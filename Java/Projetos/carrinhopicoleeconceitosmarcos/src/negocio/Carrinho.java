/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package negocio;

import java.util.ArrayList;
import java.util.HashMap;

/**
 *
 * @author ThomasJefferson
 */
public class Carrinho {
    private ArrayList<Venda> vendas = new ArrayList<Venda>();
    private HashMap<Picole, Integer> picoles = new HashMap<Picole, Integer>();

    public ArrayList<Venda> getVendas() {
        return vendas;
    }

    public void setVendas(ArrayList<Venda> vendas) {
        this.vendas = vendas;
    }

    public HashMap<Picole, Integer> getPicoles() {
        return picoles;
    }

    public void setPicoles(HashMap<Picole, Integer> picoles) {
        this.picoles = picoles;
    }
}
