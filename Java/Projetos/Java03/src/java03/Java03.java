/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package java03;

/**
 *
 * @author Geral
 */

import banco.Conta;
import util.Teclado;

public class Java03 {


    
    public static void main(String[] args) {
        // TODO code application logic here
        int op=1, flag=0, cont=0;
        Conta[] array = new Conta[10];
        while (op==1){
            if (flag==0){
                System.out.println("===========================================");        
                System.out.println("||||||||  Bem Vindo Ao Banco Tal  |||||||||");
                System.out.println("===========================================");
                flag++;
            }
            int op2 = Teclado.lerInteiro("[1]Adicionar Conta\n[2]Saque\n[3]Deposito\n[4]Transferência\n[5]Extrato");
            switch(op2){
                case 1:{
                    String nome = Teclado.lerString("\nNome da conta: ");
                    float saldo = Teclado.lerFloat("\nValor para conta: ");
                    array[cont] = new Conta(saldo, nome);
                    cont++;
                break;}
                case 2:{
                    int csaq = Teclado.lerInteiro("\nInforme o número da conta: ");
                    float saque = Teclado.lerFloat("\nInforme o valor do saque: ");
                    array[csaq].sacar(saque);
                    System.out.println("\nSaque efetuado!");
                break;}
                case 3:{
                    int cdep = Teclado.lerInteiro("\nInforme o número da conta: ");
                    float dep = Teclado.lerFloat("\nInforme o valor de depósito: ");
                    array[cdep].depositar(dep);
                    System.out.println("\nDepósito efetuado!");
                break;}
                case 4:{
                    int cenv = Teclado.lerInteiro("\nDe qual conta você pretende retirar o dinheiro?");
                    int crec = Teclado.lerInteiro("\nPara qual conta você quer transferir o dinheiro?");
                    if(array[cenv] != null && array[crec] != null){
                        float transf = Teclado.lerFloat("Digite o valor de transferência: ");
                        array[cenv].transferir(array[crec], transf);
                    } else {
                        System.err.println("\nConta não existente!");
                    }
                break;}
                case 5:{
                    int ext = Teclado.lerInteiro("Informe o nome do proprietário: ");
                    System.out.println("\n\n" + array[ext].criarExtrato().retornaExtratoCompleto());
                break;}
                case 0:{
                    op=0;
                    System.out.println("Saida efetuada!");
                break;}
                default: System.err.println("\nOpção Inválida!!!");
            }
        }
    }
    
}
