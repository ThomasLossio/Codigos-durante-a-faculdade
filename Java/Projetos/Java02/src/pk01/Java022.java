/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package pk01;

import util.Teclado;

/**
 *
 * @author Geral
 */
public class Java022 {
    public static void main(String[] args){
        int n, cont=0, numcorrente;
        System.out.println("Digite um número: ");
        n = Teclado.lerInteiro("");
        for(numcorrente = 1; numcorrente <= n; numcorrente++){
            cont += n % numcorrente == 0? 1:0;
        }
        if (cont <=2 ){
            System.out.println("Numero eh primo");
        } else{
            System.out.println("Numero não eh primo");
        }
    }
    
}
