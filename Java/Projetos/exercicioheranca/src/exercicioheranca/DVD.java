/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicioheranca;

/**
 *
 * @author ThomasJefferson
 */
public class DVD extends Produto {
    String genero;
    String classificacao;
    
    public DVD(String nome, String genero, String classificacao, int qntd) {
        super(nome, qntd);
        this.genero = genero;
        this.classificacao = classificacao;
    }
  
}
