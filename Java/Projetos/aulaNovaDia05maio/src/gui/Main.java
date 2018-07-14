/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gui;

import biblioteca.Biblioteca;

/**
 *
 * @author ThomasJefferson
 */
public class Main {
    Biblioteca b = new Bibilioteca();
    
    b.addLivro(new String[]{"Autor 1", "Autor2"}, "Gênero Livro", "Título");
    System.out.println("Busca: " + b.buscaLivro("Titulo"));
            
}
