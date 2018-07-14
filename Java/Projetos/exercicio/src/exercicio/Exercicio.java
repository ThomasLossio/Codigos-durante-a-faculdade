/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio;

import cartas.Baralho;
import cartas.Carta;
import java.util.HashMap;
import util.Teclado;

/**
 *
 * @author ThomasJefferson
 */
/*
Faça um programa JAVA que crie um baralho. O jogador ao puxar uma carta do monte deve olhar se há uma carta com
mesmo valor em sua mão. Se houver as duas cartas deve ser descartadas. O jogador que ficar sem cartas primeiro
vence.
Antes da primeira puxada do monte jogue uma carta fora.

*/

public class Exercicio {
    public static void main(String[] args) {
        Baralho monte = new Baralho();
        HashMap<Integer, Integer> j1 = new HashMap<>();
        HashMap<Integer, Integer> j2 = new HashMap<>();
        int vez1 = 0, vez2 = 0, op = 0, valor1 = 0, valor2 = 0, cartas = 0;
        monte.baralhar();
        monte.pegaCarta();
        Carta escolha = null;
        cartas++;
        do{
            System.out.println("\n\nVez do jogador 1: ");
            //op = Teclado.lerInteiro("\nDigite 1 para puxar a carta: ");
            if(vez1==0){
                escolha = monte.pegaCarta();
                cartas++;
                System.out.println("Carta número: " + cartas);
                valor1 = escolha.getValor();
                j1.put(valor1, valor1);
                vez1++;
            } else {
                escolha = monte.pegaCarta();
                if(escolha != null){
                    cartas++;
                    System.out.println("Carta número: " + cartas);
                    valor1 = escolha.getValor();
                    if(j1.containsKey(valor1)){
                        j1.remove(valor1);
                    } else {
                        j1.put(valor1, valor1);
                    }
                } 
            }
            if(j1.isEmpty()){
                System.out.println("\n\nJogador 1 não possui mais cartas e é o vencedor!");
                break;
            }
            System.out.println("\n\nVez do jogador 2: ");
            //op = Teclado.lerInteiro("\nDigite 1 para puxar a carta: ");
            if(vez2==0){
                escolha = monte.pegaCarta();
                cartas++;
                System.out.println("Carta número: " + cartas);
                valor2 = escolha.getValor();
                j2.put(valor2, valor2);
                vez2++;
            } else {
                escolha = monte.pegaCarta();
                if(escolha != null){
                    cartas++;
                    System.out.println("Carta número: " + cartas);
                    valor2 = escolha.getValor();
                    if(j2.containsKey(valor2)){
                        j2.remove(valor2);
                    } else {
                        j2.put(valor2, valor2);
                    }
                } else {
                    System.out.println("Não possui mais cartas no monte... Jogo Encerrado!\n\n\n");
                }
            }
            if(j2.isEmpty()){
                System.out.println("\n\nJogador 2 não possui mais cartas e é o vencedor!");
                break;
            }
        }while(monte.numeroDeCartas() > 0);
        if(monte.numeroDeCartas() == 0){
            if(j1.size()<j2.size()){
                System.out.println("\n\nJogador 1 foi o vencedor com menor número de pontos!");
            } else {
                if(j2.size() < j1.size()){
                    System.out.println("\n\nJogador 2 foi o vencedor com menor número de pontos!");
                } else {
                    System.out.println("\n\nJogo empatado!");
                }
            }
        }
        System.out.println("\n\nPlacar Final: \n");
        System.out.println("Jogador 1: " + j1.size() + "\nJogador 2: " + j2.size());
    }
    
}
