/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg1049.uri;

import java.util.Scanner;

/**
 *
 * @author thoma
 */
public class URI {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        String c1, c2, c3;
        Scanner sc = new Scanner(System.in);
        c1 = sc.next();
        c2 = sc.next();
        c3 = sc.next();
        
        if (c1.equals("vertebrado")){
            if (c2.equals("ave")){
                if (c3.equals("carnivoro")) System.out.println("aguia");
                else System.out.println("pomba");
            } else {
                if (c3.equals("onivoro")) System.out.println("homem");
                else System.out.println("vaca");
            }
        } else {
            if (c2.equals("inseto")){
                if (c3.equals("hematofago")) System.out.println("pulga");
                else System.out.println("lagarta");
            } else {
                if (c3.equals("hematofago")) System.out.println("sanguessuga");
                else System.out.println("minhoca");
            }
        }
    }
    
}
