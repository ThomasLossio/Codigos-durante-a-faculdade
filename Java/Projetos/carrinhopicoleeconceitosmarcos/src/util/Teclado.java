/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package util;

import java.util.Scanner;

/**
 *
 * @author ThomasJefferson
 */
public class Teclado {
    public static int contador = 0;
    

    
    public static int lerInteiro(){
        Scanner sc = new Scanner(System.in);
        return sc.nextInt();
    }
}
