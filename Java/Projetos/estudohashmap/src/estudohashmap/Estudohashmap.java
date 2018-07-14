/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package estudohashmap;

/**
 *
 * @author ThomasJefferson
 */
import java.util.Scanner;
import java.util.HashMap;
import cartas.Baralho;
import cartas.Carta;



public class Estudohashmap {

    public static void main(String[] args) {
        int op = 0, puxar;
        Scanner ler = new Scanner(System.in);
        HashMap<Integer, Integer> j1 = new HashMap<>();
        HashMap<Integer, Integer> j2 = new HashMap<>();
        Baralho monte = new Baralho();
        monte.baralhar();
        Carta escolha = null;
        
        do{
            
        }while(monte.numeroDeCartas() > 0);
        
        
    }
    
}
