/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package questaoseletiva;

import java.util.Scanner;

/**
 *
 * @author NOTEBOOKTJ
 */
public class Solution {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int T, a, b, x, prox = 0, i;
        double temp, temp2;
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();
        for (i = 0; i<T; i++){
            a = sc.nextInt();
            b = sc.nextInt();
            x = sc.nextInt();
            prox = 0;
            double result = Math.pow(a, b);    
            
            System.out.println(result);
            temp = result - (result%x);
            temp2 = result + (x-(result%x));
            if((x - temp) < (x - temp2)){
                System.out.println(temp);
            } else {
                System.out.println(temp2);
            }
        }
    }
    
}
