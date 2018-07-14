/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package a;

/**
 *
 * @author ThomasJefferson
 */
public class GerenciadorSirene {
//    SireneConcreta observado;
//    Delegacia observador;
    public static void main(String[] args) {
        SireneConcreta sirene = new SireneConcreta();
        Delegacia obs1 = new Delegacia(sirene); 
        Delegacia obs2 = new Delegacia(sirene);
        sirene.alterarAlerta();
        sirene.alterarAlerta();
        
    }
}
