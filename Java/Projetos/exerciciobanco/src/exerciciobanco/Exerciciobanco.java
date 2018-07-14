/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package exerciciobanco;

import banco.Conta;
import util.Teclado;

/**
 *
 * @author Geral
 */
public class Exerciciobanco {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String nome1 = Teclado.lerString("Digite o nome da conta 1: ");
        float valor1 = Teclado.lerFloat("Digite o valor de depósito da conta 1: ");
        String nome2 = Teclado.lerString("Digite o nome da conta 2: ");
        float valor2 = Teclado.lerFloat("Digite o valor de depósito da conta 2: ");
        Conta c = new Conta(valor1, nome1);
        Conta c2 = new Conta(valor2, nome2);
        valor1 = Teclado.lerFloat("Quanto para depositar? ");
        c.depositar(valor1);
        valor1 = Teclado.lerFloat("Quanto para transferência?");
        c2.transferir(c, valor1);
        System.out.println("\n\n\n"+c.criarExtrato().retornaExtratoCompleto());
            
    }
    
}
