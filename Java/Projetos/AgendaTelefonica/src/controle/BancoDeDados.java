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
import java.util.ArrayList;
import java.util.List;

import agenda.Pessoa;
import agenda.Telefone;

/**
 *
 * @author ThomasJefferson
 */
public class BancoDeDados {

    private final String SELECT_TELEFONE = "SELECT * FROM TELEFONE WHERE NUMERO_TEL = ?";
    private final String INSERT_PESSOA = "INSERT INTO PESSOAS (ID_PESSOA, NOME_PESSOA) VALUES (?,?)";
    private final String SELECT_ALL_PESSOA = "SELECT * FROM PESSOAS PES, TELEFONES TEL WHERE PES.ID_PESSOA=TEL.ID_PESSOA";
    private final String INSERT_TELEFONE = "INSERT INTO TELEFONES (NUMERO_TEL, ID_PESSOA) values (?,?)";
    private final String DELETE_PESSOA = "DELETE FROM telefones WHERE ID_PESSOA = ?;DELETE FROM pessoas WHERE ID_PESSOA = ?;";
    private final String DELETE_TEEFONE = "DELETE FROM telefones WHERE ID_PESSOA = ?";
    private final String SELECT_PESSOA = "SELECT FROM pessoas WHERE NOME_PESSOA like ?%";
    private boolean retorno = false;

    public Connection getConnection() throws SQLException {
        Connection con = null;
        con = DriverManager.getConnection("jdbc:mysql://localhost/agenda_telefonica?" + "user=root&password=adm123");
        return con;
    }

    public void closeConnnection(Connection con) {
        try {
            con.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public boolean insertPessoa(Pessoa pessoa) {
        Connection con = null;
        try {
            con = getConnection();
            PreparedStatement prepared = con.prepareStatement(INSERT_PESSOA);
            prepared.setLong(1, pessoa.getId());
            prepared.setString(2, pessoa.getNome());
            retorno = prepared.execute();
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeConnnection(con);
        }
        return retorno;
    }

    public boolean removePessoa(Pessoa pessoa) throws SQLException {
        Connection con = null;
        try {
            con = getConnection();
            PreparedStatement prepared = con.prepareStatement(DELETE_PESSOA);
            prepared.setLong(1, pessoa.getId());
            prepared.setLong(2, pessoa.getId());
            retorno = prepared.execute();
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeConnnection(con);
        }
        return retorno;
    }

    public List<Pessoa> selectPessoa(Pessoa pessoa) throws SQLException {
        Connection con = null;
        List<Pessoa> listPessoa = new ArrayList<Pessoa>();
        try {
            con = getConnection();
            PreparedStatement prepared = con.prepareStatement(SELECT_ALL_PESSOA);
            ResultSet resultSet = prepared.executeQuery();
            while (resultSet.next()) {
                Pessoa pessoaTmp = new Pessoa();
                pessoaTmp.setId(resultSet.getLong("PES_ID"));
                pessoaTmp.setNome(resultSet.getString("PES_NOME"));
                pessoaTmp.setTelefone(resultSet.getString("TEL_NUMERO"));
                listPessoa.add(pessoaTmp);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeConnnection(con);
        }
        return listPessoa;
    }

    public boolean insertTelefone(Telefone telefone) throws SQLException {
        Connection con = null;
        try {
            con = getConnection();
            PreparedStatement prepared = con.prepareStatement(INSERT_TELEFONE);
            prepared.setString(1, telefone.getNumero());
            prepared.setLong(2, telefone.getPessoa().getId());
            retorno = prepared.execute();
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeConnnection(con);
        }
        return retorno;
    }

//    public long getId() throws SQLException {
//        Connection con = null;
//        long id = 0;
//        try {
//            con = getConnection();
//            PreparedStatement prepared = con.prepareStatement(SELECT_NEXT_SEQUENCE);
//            ResultSet resultSet = prepared.executeQuery();
//            while (resultSet.next()) {
//                id = resultSet.getLong("nextval");
//            }
//        } catch (SQLException e) {
//            e.printStackTrace();
//        } finally {
//            closeConnnection(con);
//        }
//        return id;
//    }

    public List<Telefone> selectTelefones(Telefone telefone) throws SQLException {
        Connection con = null;
        List<Telefone> listTelefone = new ArrayList<Telefone>();
        try {
            con = getConnection();
            PreparedStatement prepared = con.prepareStatement(SELECT_TELEFONE);
            prepared.setString(1, telefone.getNumero());
            ResultSet resultSet = prepared.executeQuery();
            while (resultSet.next()) {
                Telefone telefoneTmp = new Telefone();
                telefoneTmp.setId(resultSet.getLong("TEL_ID"));
                telefoneTmp.setNumero(resultSet.getString("TEL_NUMERO"));
                listTelefone.add(telefoneTmp);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeConnnection(con);
        }
        return listTelefone;
    }

}
