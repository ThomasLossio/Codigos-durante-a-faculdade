/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package a;

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
    public void adicionarObservador(Object obj) {
        observadores.add(obj);
       
    }

    @Override
    public void removerObservador(Object obj) {
        observadores.remove(obj);
       
    }
    
    public void notificarObservadores(){
        Iterator i = observadores.iterator();
        int j = 0;
        while(i.hasNext()){ 
            
            Object op = (Object) i.next(); 
            if(op.equals(observadores.get(j))){
                (Delegacia)op.atualizar(this); 
                
            }
                j++;
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
