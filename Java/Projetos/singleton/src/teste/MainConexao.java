/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teste;

/**
 *
 * @author ThomasJefferson
 */
public class MainConexao {
    public static void main(String[] args) {
        Conexao c = Conexao.getInstance();
        System.out.println(c.toString());
        c = Conexao.getInstance();
        System.out.println(c.toString());
        c = Conexao.getInstance();
        System.out.println(c.toString());
        c = Conexao.getInstance();
        System.out.println(c.toString());
        c = Conexao.getInstance();
        System.out.println(c.toString());
        c = Conexao.getInstance();
        System.out.println(c.toString());
        Conexao c2 = Conexao.getInstance();
        System.out.println(c2.toString());
    }
    
    
}
