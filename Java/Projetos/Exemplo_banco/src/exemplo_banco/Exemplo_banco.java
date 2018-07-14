/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package exemplo_banco;


import banco.Conta;
import util.Teclado;
/**
 *
 * @author Geral
 */
public class Exemplo_banco {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Conta c = new Conta(1000, "marcos");
        Conta c2 = new Conta(10000, "maria");
        double antes = c.getSaldo();
        boolean retorno = c.sacar(800);
        double depois = c.getSaldo();      
        if(retorno){
           System.out.println("Antes = R$" + antes + " depois = R$" + depois);    
        } else {
            System.out.println("Não foi possível cara =/");
        }
    }
    
}
