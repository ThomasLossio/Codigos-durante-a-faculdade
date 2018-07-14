/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uri.pkg1120;

import java.util.Scanner;

/**
 *
 * @author thoma
 */
public class URI1120 {

    /**
     * @param args the command line arguments
     */
public static void main(String[] args) {
        int tam;
        String recebe, troca, nova;
        String teste, teste2;
        
        Scanner sc = new Scanner(System.in);
        do{
            troca = sc.next();
            recebe = sc.next();
            if (!troca.equals("0") && !recebe.equals("0")){
                recebe = recebe.replace(troca, "");
                nova = recebe;
                tam = recebe.length();
                for(int i = 0; i < tam - 1; i++){
                    if (i != tam - 1){ 
                        teste = String.valueOf(recebe.charAt(i));
                        teste2 = String.valueOf(recebe.charAt(i + 1));
                    } else {
                        teste = "";
                        teste2 = "";
                    }
                    if ((teste.equals("0")) && (!teste2.isEmpty())) {
                        nova = recebe.substring(i + 1);
                    } else break;
                }
                if (nova.equals("")) System.out.println("0");
                else System.out.println(nova);
            } else break;
        } while (1 == 1);
    }
    
}
