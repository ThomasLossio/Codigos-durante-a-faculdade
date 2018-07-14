/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gui;

/**
 *
 * @author ThomasJefferson
 */
public class GerenciadorSirene {
//    SireneConcreta observado;
//    OperarioConcreto observador;
    public static void main(String[] args) {
        SireneConcreta sirene = new SireneConcreta();
        OperarioConcreto obs1 = new OperarioConcreto(sirene); 
        OperarioConcreto obs2 = new OperarioConcreto(sirene);
        sirene.alterarAlerta();
        sirene.alterarAlerta();
        
    }
}
