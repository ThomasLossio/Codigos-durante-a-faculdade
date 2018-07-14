/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controle;


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
    
    public static boolean conecte(){
        String Driver = "org.postgresql.Driver";
        String user = "postgres";
        String senha = "adm123";
        String url = "jdbc:postgresql://localhost:5432/tentativabanco";


        try {
            Class.forName(Driver);

            con = (Connection) DriverManager.getConnection(url, user, senha);
            return true;
        } catch (ClassNotFoundException ex) {
            System.err.println("Teste" + ex.getMessage());
            return false;
        } catch (SQLException e) {
            System.err.println(e.getMessage());
            return false;
        }
    }

    public static void conecte2(){
        String Driver = "org.postgresql.Driver";
        String user = "postgres";
        String senha = "adm123";
        String url = "jdbc:postgresql://localhost:5432/tentativabanco";


        try {
            Class.forName(Driver);

            con = (Connection) DriverManager.getConnection(url, user, senha);
        } catch (ClassNotFoundException ex) {
            System.err.println(ex.getMessage());
        } catch (SQLException e) {
            System.err.println(e.getMessage());
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
        conecte2();
        try {
            PreparedStatement stmt = con.prepareCall(sql);
            Statement st = con.createStatement();
            st.execute(sql);
            st.close();
        } catch (SQLException e) {
            System.err.println(e.getMessage());
        }
    }

    public static void criaBanco(String sql) {
        sembanco();
        try {
            PreparedStatement stmt = con.prepareCall(sql);
            Statement st = con.createStatement();
            st.execute(sql);
            st.close();
        } catch (SQLException e) {
            System.err.println(e.getMessage());
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
