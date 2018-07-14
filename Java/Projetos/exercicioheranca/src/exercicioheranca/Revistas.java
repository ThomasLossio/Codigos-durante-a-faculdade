/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicioheranca;

import java.util.ArrayList;

/**
 *
 * @author ThomasJefferson
 */
public class Revistas extends Produto {
    String editora;

    public Revistas(String nome, String editora, int qntd) {
        super(nome, qntd);
        this.editora = editora;
    }
    
}
