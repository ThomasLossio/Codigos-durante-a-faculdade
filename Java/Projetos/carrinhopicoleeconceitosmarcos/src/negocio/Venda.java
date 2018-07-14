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
public class Venda {
    private ArrayList<LinhaVenda> linhas = new ArrayList<LinhaVenda>();

    public ArrayList<LinhaVenda> getLinhas() {
        return linhas;
    }

    public void setLinhas(ArrayList<LinhaVenda> linhas) {
        this.linhas = linhas;
    }
    
}
