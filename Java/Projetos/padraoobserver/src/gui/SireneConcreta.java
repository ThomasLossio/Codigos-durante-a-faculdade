/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gui;

import java.util.ArrayList;
import java.util.Iterator;

/**
 *
 * @author ThomasJefferson
 */
public class SireneConcreta implements Sirene{

    private boolean alertaSonoro = false;
    private ArrayList observadores = new ArrayList();

    @Override
    public void adicionarObservador(Operario op) {
        observadores.add(op);
       
    }

    @Override
    public void removerObservador(Operario op) {
        observadores.remove(op);
       
    }
    
    public void notificarObservadores(){
        Iterator i = observadores.iterator(); 
        while(i.hasNext()){ 
            Operario op = (Operario) i.next(); op.atualizar(this); 
        }          
    }
    
    public void alterarAlerta(){
        if(alertaSonoro) alertaSonoro = false; 
        else alertaSonoro = true; 
        notificarObservadores();
        
    }
    
    public boolean getAlerta(){
        return alertaSonoro;
    }

    
    
    
}
