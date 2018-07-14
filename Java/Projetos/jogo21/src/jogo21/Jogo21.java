/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package jogo21;

import cartas.Baralho;
import util.Teclado;
import cartas.Carta;

/**
 *
 * @author Geral
 */
public class Jogo21 {

    public static void main(String[] args) {
        Baralho monte = new Baralho();
        monte.baralhar();
        String situacao = "start", situacao2 = "continue", play1 = "";
        Carta escolha1 = null;
        int valor1 = 0, valor2 = 0;
        int op2 = 0;
        Carta escolha2 = null;
        do{
            situacao2 = "continue";
            valor1 = 0;
            valor2 = 0;
            System.out.println("Jogo do 21");
            System.out.println("[1]Novo Jogo [0]Sair");
            int op = Teclado.lerInteiro("Escolha a opção: ");
            switch(op){
                case 1:{                    
                    play1 = Teclado.lerString("\n\nNome do Jogador: ");
                    System.out.println("\n\nSeja bem vindo " + play1 + "!");
                    while(situacao2.equals("continue")){
                        op2 = 1;
                        while(op2 == 1){
                            op2 = Teclado.lerInteiro("\n\nDeseja puxar a carta? [1]Sim/[2]Não");
                            if (op2==1){
                                escolha1 = monte.pegaCarta();
                                valor1 = valor1 + escolha1.getValor();
                                System.out.println("\n\nSua Pontuação: " + valor1);
                                System.out.println("Pontuação CPU: " + valor2);
                                if(valor1 > 21){
                                    System.out.println("\nVocê passou dos 21 pontos!\n\nGame Over!");
                                    op2 = 0;
                                    situacao2 = "over";
                                } else {
                                    if(valor1==1){
                                        System.out.println("\nVocê atingiu os 21 pontos e você ganhou!");
                                        situacao2 = "over";
                                    }
                                }
                            }
                            op2=0;
                        }
                        System.out.println("\n\nVez do computador.");
                        if (situacao2.equals("continue")){
                            if(valor2<20){
                                escolha2 = monte.pegaCarta();
                                valor2 = valor2 + escolha2.getValor();
                                System.out.println("\n\nPontuação CPU: " + valor2);
                                System.out.println("\nSua Pontuação: " + valor1);
                            }
                            if(valor2 > 21){
                                System.out.println("\n\nO CPU ultrapassou os 21 pontos e você ganhou!");
                                situacao2 = "over";
                            } 
                        }
                    }
                break;}
                case 0: {
                    situacao = "over";
                break;}
                default: System.err.println("\n\n\nOpção não existe!\n\n\n");
            }
        }while(situacao.equals("start"));
    }
    
}
