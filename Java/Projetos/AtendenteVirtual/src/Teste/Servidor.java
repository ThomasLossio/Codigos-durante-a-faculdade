package Teste;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ThomasJefferson
 */
public class Servidor {
    public static void main(String[] args) {
        ServerSocket socketServidor;
        int i = 1;
        try {
            socketServidor = new ServerSocket(8888);
            System.out.println("antes do while");
            while(i == 1){
                Socket clientev = socketServidor.accept();
                System.out.println("Conectou");
                
            BufferedReader entrada = new BufferedReader(new InputStreamReader(clientev.getInputStream()));
            Calendar c = Calendar.getInstance();
                System.out.println("Antes do se");
                String p = entrada.readLine();
            PrintStream ps = new PrintStream(clientev.getOutputStream());
            if(p.equals("Ola")){
                
                int hr = c.get(Calendar.HOUR_OF_DAY);
                if(hr>6 && hr<12){
                    ps.println("Bom Dia!");
                } else if (hr>12 && hr<18){
                    ps.println("Boa Tarde!");
                } else {
                    ps.println("Boa Noite");
                }
            } else if(p.equals("Que horas sao?")){
                Date data = new Date();
                String hrs = "";
                System.out.println("oi");
                SimpleDateFormat sdf1= new SimpleDateFormat("HH:mm");
                System.out.println("oi");
//                    try {
                System.out.println("oi");
                        ps.println(sdf1.format(data) + "hrs");
//                    } catch (ParseException ex) {
                System.out.println("oifalhaá");
//                        Logger.getLogger(Servidor.class.getName()).log(Level.SEVERE, null, ex);
//                    }
            } else if (p.equals("Que dia da semana e hoje?")){
                int diasemana = c.get(Calendar.DAY_OF_WEEK);
                if(diasemana == 1){
                    ps.println("Domingo");                   
                } else if (diasemana == 2){
                    ps.println("Segunda");
                } else if (diasemana == 3){
                    ps.println("Terça");
                } else if (diasemana == 4){
                    ps.println("Quarta");
                } else if (diasemana == 5){
                    ps.println("Quinta");
                } else if (diasemana == 6){
                    ps.println("Sexta");
                } else {
                    ps.println("Sábado");
                }
            } else if (p.equals("Me informe meu ip e porta")){
                ps.println("IP: " + clientev.getInetAddress() + "\nPorta: " + clientev.getPort());
            } else if(p.equals("Quais os numeros da megasena?")){
                ps.println("Nao sei.");
            } else if(p.equals("Oi")){
                ps.println("Oi");
            } else {
                ps.println("Nada!");
            }

                System.out.println("Cabou o se");
                
                
            }


//            //aqui seria o while
//            // aguardar conexão do cliente
//            System.out.println("Aguardando conexão");
//            Socket cliente = socketServidor.accept();
//            System.out.println("IP: " + cliente.getInetAddress() + ":" + cliente.getPort());
//            System.out.println(cliente.getInetAddress().getHostName());
//            
//            System.out.println("Cliente conectou-se...");
//            PrintStream ps = new PrintStream(cliente.getOutputStream());
//            ps.println("Mensagem...");
//            //aqui termina o while
        } catch (IOException ex) {
            System.err.println(ex.getMessage());
        }
        
    }
}
