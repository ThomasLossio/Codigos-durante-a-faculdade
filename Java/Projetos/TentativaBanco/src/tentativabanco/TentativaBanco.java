/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tentativabanco;

import controle.Banco;

/**
 *
 * @author ThomasJefferson
 */
public class TentativaBanco {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Oi");
        if(!Banco.conecte()){
            
            Banco.criaBanco("CREATE DATABASE TentativaBanco;");
            System.out.println("Banco criado!");
            Banco.execute("CREATE TABLE TESTE("
                    + "id bigserial primary key,"
                    + "nome varchar(50),"
                    + "cpf varchar(15),"
                    + "salario numeric,"
                    + "mensalidade numeric"
                    + ");");
            System.out.println("Table criada!");
        } 
    }
    
}
