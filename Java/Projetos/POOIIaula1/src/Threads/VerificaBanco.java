/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Threads;

import controle.Banco;
import java.io.File;
import javax.swing.JOptionPane;

/**
 *
 * @author ThomasJefferson
 */
public class VerificaBanco implements Runnable{
    boolean existe = true;
    
    public boolean Ok(){
        return existe;
    }
    
    @Override
    public void run(){     
        
        File f = new File("C:\\Program Files\\PostgreSQL\\9.4\\bin\\pgAdmin3.exe");
        
        if(f.isFile()){
            if(!Banco.Existe()){
                try{
                    if(Banco.criaBanco("CREATE DATABASE exerciciopoo2;")){
                        Banco.execute2("CREATE TABLE ALUNO("
                                + "id bigserial primary key,"
                                + "nome varchar(50),"
                                + "cpf varchar(14),"
                                + "matricula integer,"
                                + "mensalidade numeric"
                                + ");");                
                        Banco.execute2("CREATE TABLE COMISSIONADO("
                                + "id bigserial primary key,"
                                + "nome varchar(50),"
                                + "cpf varchar(14),"
                                + "salario numeric,"
                                + "percentual numeric"
                                + ");");                
                        Banco.execute2("CREATE TABLE EMPREGADO("
                                + "id bigserial primary key,"
                                + "nome varchar(50),"
                                + "cpf varchar(14),"
                                + "salario numeric"
                                + ");");                
                        Banco.execute2("CREATE TABLE FORNECEDOR("
                                + "id bigserial primary key,"
                                + "nome varchar(50),"
                                + "cnpj varchar(18),"
                                + "contrato numeric"
                                + ");");                
                        Banco.execute2("CREATE TABLE GERENTE("
                                + "id bigserial primary key,"
                                + "nome varchar(50),"
                                + "cpf varchar(14),"
                                + "salario numeric,"
                                + "gratificacao numeric"
                                + ");");               
                        existe = true;
                    }

                } catch (Exception ex){
                    JOptionPane.showMessageDialog(null, "Não foi Possível Criar o banco, contate o administrador!", "Erro Desconhecido!", JOptionPane.ERROR_MESSAGE, null);
                    existe = false;                    
                }
            } else {
                existe = true;
            } 
        } else {
            JOptionPane.showMessageDialog(null, "Gerenciador de Banco de Dados não foi encontrado!\nContate o administrador do sistema!", "Erro ao se Conectar!",  JOptionPane.ERROR_MESSAGE, null);
            existe = false;
        }
        
        
    };
    
}
