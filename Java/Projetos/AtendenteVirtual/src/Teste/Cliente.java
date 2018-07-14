/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Teste;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.Socket;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author ThomasJefferson
 */
public class Cliente {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(1==1){
//while aqui
            try {
                System.out.println("Cliente vai se conectar...");
    //            Socket s = new Socket("10.11.15.11", 8888); //Professor
                Socket s = new Socket("localhost", 8888); //Local 10.11.27.70
    //            Socket s = new Socket("10.11.32.208", 8888); //Charles
    //            Socket s = new Socket("10.100.0.230", 8888); //Charles cabo
    //            Socket s = new Socket("10.11.16.81", 8888); //Vinicius
    //            Socket s = new Socket("10.11.12.26", 8888); //Hallef
    //            10.11.12.26
                System.out.println("Cliente se conectou ao servidor...");
                PrintStream ps = new PrintStream(s.getOutputStream());
                System.out.println("Cliente: ");
                String pergunta = sc.nextLine();
                System.out.println(pergunta);
                ps.println(pergunta);
                
                BufferedReader entrada = new BufferedReader(new InputStreamReader(s.getInputStream()));
                System.out.println("Servidor: " + entrada.readLine());
                System.out.println(entrada.readLine());




            } catch (IOException ex) {
                ex.printStackTrace();
            }
        }
        //fim do while
    }
    
}
