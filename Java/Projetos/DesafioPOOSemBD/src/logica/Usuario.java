/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package logica;

/**
 *
 * @author ThomasJefferson
 */
public class Usuario{
    private int ID;
    private String Nome;
    private String Senha;
    private String tipo;
    
    public static void main(String[] args){ //Testes com a variável Date
     
    }    

    public int getID() {
        return ID;
    }

    public String getNome() {
        return Nome;
    }

    public String getSenha() {
        return Senha;
    }
    
    public String getTipo(){
        return tipo;
    }

    public void setNome(String Nome) {
        this.Nome = Nome;
    }

    public void setSenha(String Senha) {
        this.Senha = Senha;
    }

    public void setID(int ID) {
        this.ID = ID;
    }
    
    public void setTipo(String tipo){
        this.tipo = tipo;
    }
    
}
