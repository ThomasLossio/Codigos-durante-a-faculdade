/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package salario.com.bonus.uri;

import java.text.DecimalFormat;
import java.util.Scanner;

/**
 *
 * @author NOTEBOOKTJ
 */
public class SALARIOCOMBONUSURI {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       String NOME;
       double salario, montante;
       
       Scanner sc = new Scanner(System.in);
       
       NOME = sc.next();
       salario = sc.nextDouble();
       montante = sc.nextDouble();
       DecimalFormat df = new DecimalFormat("#.00");
       
        System.out.println("TOTAL = R$ " + df.format((salario + (montante * 15) / 100)));
       
    }
    
}
