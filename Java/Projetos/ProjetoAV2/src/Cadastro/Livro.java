package Cadastro;

import java.util.ArrayList;



public class Livro implements Biblioteca{ //Contém Informações Necessárias para Livro
    
    private String Titulo;
    private String autor;
    private String genero;
    private int idLivro;
    private int qntdEstoque;
    private int qntdReservada;
    private int qntdAlugada;
    
    

    public Livro(int ID, String Titulo, String Genero, String Autor, int qntd) {
        this.idLivro = ID;
        this.Titulo = Titulo;
        this.genero = Genero;
        this.autor = Autor;
        this.qntdEstoque = qntd;
    }   
//Busca
    @Override
    public int getID() {
        return idLivro;
    }

    @Override
    public String getNome() {
        return Titulo;
    }
    
    public String getGenero() {
        return genero;
    }

    public String getAutor() {
        return autor;
    }
    
    public int getAlugada(){
        return qntdAlugada;
    }

    public int getReserva(){
        return qntdReservada;
    }
    
    public int getEstoque(){
        return qntdEstoque;
    }
    
//Cadastro            
    @Override
    public void setNome(String Nome) {
        this.Titulo = Nome;
    }

    public void setGenero(String Genero) {
        this.genero = Genero;
    }

    @Override
    public void setID(int id) {
        this.idLivro = id;
    }

    public void setAlugada(int Alugada){
        this.qntdAlugada += Alugada;
    }

    public void setReserva(int Reservada){
        this.qntdReservada += Reservada;
    }
    
    public void setEstoque(int Estoque){
        this.qntdEstoque += Estoque;
    }
    
//Busca    
    @Override
    public ArrayList getConteudo() {
        ArrayList Conteudo = new ArrayList();
        Conteudo.add(getID());
        Conteudo.add(getNome());
        Conteudo.add(getGenero());
        Conteudo.add(getAutor());
        Conteudo.add(this.qntdEstoque);
        Conteudo.add(this.qntdAlugada);
        Conteudo.add(this.qntdReservada);
        Conteudo.add(this.qntdAlugada+this.qntdReservada+this.qntdEstoque);
        return Conteudo;
    }
}
