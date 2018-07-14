/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package java04baralho;

import cartas.Baralho;
import util.Teclado;

/**
 *
 * @author Geral
 */
public class Java04baralho {


    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Baralho cartas = new Baralho();
        cartas.baralhar();
        // TODO code application logic here
        while(cartas.numeroDeCartas() != 0){
            System.out.println("Carta: " + cartas.pegaCarta());
        }
    }
    
}
