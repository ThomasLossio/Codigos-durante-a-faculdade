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
public class OperarioConcreto implements Operario{

    private SireneConcreta objetoObservado;

    public OperarioConcreto(SireneConcreta o) {
        this.objetoObservado = o;
        objetoObservado.adicionarObservador(this);
    }
    
    
    @Override
    public void atualizar(Sirene sirene) {
        if(sirene == objetoObservado){
            System.out.println("[INFO] A Sirene mudou seu estado para: " + objetoObservado.getAlerta());
        }
    }
    
    
    
}
