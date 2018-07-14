/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package exemplo_banco;

import banco.Conta;

/**
 *
 * @author Geral
 */
public class extrato {
        public static void main(String[] args) {
        // TODO code application logic here
            Conta c = new Conta(1000, "marcos");
            Conta c2 = new Conta(10000, "maria");
            double antes = c.getSaldo();
            boolean retorno = c.sacar(2000);
            if(retorno){
                c.sacar(400);
                c.sacar(300);
                c.depositar(12000);
                double depois = c.getSaldo();
                System.out.println("\n\n\n"+c.criarExtrato().retornaExtratoCompleto());
            } else {
                    System.err.println("Error!");
            }
        }
}
