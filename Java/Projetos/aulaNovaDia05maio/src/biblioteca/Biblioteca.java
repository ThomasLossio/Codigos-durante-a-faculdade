/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package biblioteca;

import java.util.ArrayList;

/**
 *
 * @author ThomasJefferson
 */
public class Biblioteca {
    private ArrayList<Livro> livros = new ArrayList<Livro>();
    
    public void addLivro(String[] autores, String genero, String Titulo){
        Livro livro = new Livro(autores, genero, titulo);
        livros.add(livro);
    }
    
    public boolean buscaLivro(String nome){
        for(Livro livro : livros){
            if(livro.getNome().contains(nome)){
            return true;
            }
        }
        return false;
    }
 
    
}
