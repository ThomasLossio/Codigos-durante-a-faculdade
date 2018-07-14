/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controle;

import codigos.Aluno;
import codigos.Comissionado;
import codigos.Empregado;
import codigos.Fornecedor;
import codigos.Gerente;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;


/**
 *
 * @author ThomasJefferson
 */
public class Banco {
    public static Connection con;
    
    public static void conecte(){
        String Driver = "org.postgresql.Driver";
        String user = "postgres";
        String senha = "adm123";
        String url = "jdbc:postgresql://localhost:5432/exerciciopoo2";


        try {
            Class.forName(Driver);

            con = (Connection) DriverManager.getConnection(url, user, senha);
        } catch (ClassNotFoundException ex) {
            System.err.println(ex.getMessage());
        } catch (SQLException e) {
            System.err.println(e.getMessage());
        }
    }
    
    public static boolean Existe(){
        String Driver = "org.postgresql.Driver";
        String user = "postgres";
        String senha = "adm123";
        String url = "jdbc:postgresql://localhost:5432/exerciciopoo2";


        try {
            Class.forName(Driver);

            con = (Connection) DriverManager.getConnection(url, user, senha);
            return true;
        } catch (ClassNotFoundException ex) {
            return false;
        } catch (SQLException e) {
            return false;
        }
    }
    
    public static boolean criaBanco(String sql) {
        sembanco();
        try {
            PreparedStatement stmt = con.prepareCall(sql);
            Statement st = con.createStatement();
            st.execute(sql);
            st.close();
            return true;
        } catch (SQLException e) {
            return false;
        }
    }
    
    public static void sembanco(){
        String Driver = "org.postgresql.Driver";
        String user = "postgres";
        String senha = "adm123";
        String url = "jdbc:postgresql://localhost:5432/";


        try {
            Class.forName(Driver);

            con = (Connection) DriverManager.getConnection(url, user, senha);
        } catch (ClassNotFoundException ex) {
            System.err.println(ex.getMessage());
        } catch (SQLException e) {
            System.err.println(e.getMessage());
        }
    }    

    public static void execute(String sql) {
        try {
            PreparedStatement stmt = con.prepareCall(sql);
            Statement st = con.createStatement();
            st.execute(sql);
            st.close();
        } catch (SQLException e) {
            System.err.println(e.getMessage());
        }
    }

    public static void execute2(String sql) {
        conecte();
        try {
            PreparedStatement stmt = con.prepareCall(sql);
            Statement st = con.createStatement();
            st.execute(sql);
            st.close();
        } catch (SQLException e) {
            System.err.println(e.getMessage());
        }
    }

    public static void cadastraAluno(Aluno aluno) {
        conecte();
        String INSERT = "insert into aluno (nome, cpf, mensalidade, matricula)"
                + "values (?,?,?,?)";
        try {
            PreparedStatement stmt = con.prepareStatement(INSERT);
            stmt.setString(1, aluno.getNome());
            stmt.setString(2, aluno.getCpf());
            stmt.setDouble(3, aluno.getMensalidade());
            stmt.setInt(4, aluno.getMatricula());
            stmt.execute();
            stmt.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }
    
    public static void cadastraEmpregado(Empregado empregado) {
        conecte();
        String INSERT = "insert into empregado (nome, cpf, salario)"
                + "values (?,?,?)";
        try {
            PreparedStatement stmt = con.prepareStatement(INSERT);
            stmt.setString(1, empregado.getNome());
            stmt.setString(2, empregado.getCpf());
            stmt.setDouble(3, empregado.getSalario());
            stmt.execute();
            stmt.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }
    
    public static void cadastraComissionado(Comissionado comissionado) {
        conecte();
        String INSERT = "insert into comissionado (nome, cpf, salario, percentual)"
                + "values (?,?,?,?)";
        try {
            PreparedStatement stmt = con.prepareStatement(INSERT);
            stmt.setString(1, comissionado.getNome());
            stmt.setString(2, comissionado.getCpf());
            stmt.setDouble(3, comissionado.getSalario());
            stmt.setDouble(4, comissionado.getPercentual());
            stmt.execute();
            stmt.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }
    
    public static void cadastraGerente(Gerente gerente) {
        conecte();
        String INSERT = "insert into gerente (nome, cpf, salario, gratificacao)"
                + "values (?,?,?,?)";
        try {
            PreparedStatement stmt = con.prepareStatement(INSERT);
            stmt.setString(1, gerente.getNome());
            stmt.setString(2, gerente.getCpf());
            stmt.setDouble(3, gerente.getSalario());
            stmt.setDouble(4, gerente.getGratificacao());
            stmt.execute();
            stmt.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }
    
    public static void cadastraFornecedor(Fornecedor fornecedor) {
        conecte();
        String INSERT = "insert into fornecedor (nome, cnpj, contrato)"
                + "values (?,?,?)";
        try {
            PreparedStatement stmt = con.prepareStatement(INSERT);
            stmt.setString(1, fornecedor.getNome());
            stmt.setString(2, fornecedor.getCnpj());
            stmt.setDouble(3, fornecedor.getValorContrato());
            stmt.execute();
            stmt.close();
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }
    
    public static ResultSet executeQuery(String sql) {
        try {
            Statement st = con.createStatement();
            return st.executeQuery(sql);
        } catch (SQLException e) {
            System.err.println(e.getMessage());
        }
        return null;
    }
    

    
}
