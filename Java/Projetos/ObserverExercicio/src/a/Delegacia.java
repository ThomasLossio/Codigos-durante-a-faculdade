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
public class Delegacia implements Observadores{

    private SireneConcreta objetoObservado;

    public Delegacia(SireneConcreta o) {
        this.objetoObservado = o;
        objetoObservado.adicionarObservador(this);
    }
    
    
    @Override
    public void atualizar(Sirene sirene) {
        if(sirene == objetoObservado){
            if(objetoObservado.getAlerta()){
                System.out.println("[INFO] A delagacia escutou o alarme!");
            } else {
                System.out.println("[INFO] Tudo tranquilo na delegacia!");
            }
    }
    
    
    
}
