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
public class Livros extends Produto {
    
    Autor autor;
    String genero;

    public Livros(Autor autor, String genero, String titulo, int qntd) {
        super(titulo, qntd);
        this.genero = genero;
        this.autor = autor;
    }   
        
}
