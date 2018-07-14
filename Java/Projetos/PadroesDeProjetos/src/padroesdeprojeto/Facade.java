/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package padroesdeprojeto;

/**
 *
 * @author ThomasJefferson
 */
public class Facade {
    public void transferir(String algo, Double valor){
        
    }
    
    public void sacar(Double valor){
        
    }

    public void investirCDB(Double valor){
        
    }
    
    public static void main(String[] args) {
        Facade f = new Facade();
        f.sacar(100.00);
        f.transferir("21323", 200.00);
    }
}
