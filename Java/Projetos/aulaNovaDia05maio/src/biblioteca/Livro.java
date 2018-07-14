/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package biblioteca;

/**
 *
 * @author ThomasJefferson
 */
public class Livro {
    String autores;
    String nome;
    String genero;
    
    public Livro(String nome, String genero){
        this.nome = nome;
        this.genero = genero;
    }
    
    public Livro(String[] autores, String genero, String titulo){
        
        for(String string : autores){
            this.autores.add(new Autor(string));
        }
    }
}
