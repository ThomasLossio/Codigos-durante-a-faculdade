/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package heranca1;

/**
 *
 * @author ThomasJefferson
 */
public class H extends D{
 
    public String metodoDeH(String nome){
        super.atributo = "Valor";
        return "";
    }
    
    @Override
    public String toString(){
        return "Este eh meu";
    }
}
