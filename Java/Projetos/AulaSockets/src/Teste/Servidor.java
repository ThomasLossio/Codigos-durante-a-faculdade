package Teste;

import java.io.IOException;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;

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
        
        try {
            socketServidor = new ServerSocket(8888);
            //aqui seria o while
            // aguardar conexão do cliente
            System.out.println("Aguardando conexão");
            Socket cliente = socketServidor.accept();
            PrintStream ps = new PrintStream(cliente.getOutputStream());
            ps.println("Mensagem...");
            System.out.println("IP: " + cliente.getInetAddress() + ":" + cliente.getPort());
            System.out.println(cliente.getInetAddress().getHostName());
            
            System.out.println("Cliente conectou-se...");
            //aqui termina o while
        } catch (IOException ex) {
            System.err.println(ex.getMessage());
        }
        
    }
}
