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
public class Jornal extends Produto {
    String area;
    
    public Jornal(String nome, String area, int qntd) {
        super(nome, qntd);
        this.area = area;
    }

   
}
