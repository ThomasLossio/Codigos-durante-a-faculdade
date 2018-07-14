/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controle;

import Excecoes.CPFInvalidoException;
import Excecoes.CPFRepetidoException;
import Excecoes.ContratoInvalidoException;
import Excecoes.GratificacaoInvalidaException;
import Excecoes.IDRepetidaException;
import Excecoes.NomeInvalidoException;
import Excecoes.PercentualInvalidoException;
import Excecoes.SalarioInvalidoException;
import codigos.Aluno;
import codigos.Comissionado;
import codigos.Empregado;
import codigos.Fornecedor;
import codigos.Gerente;
import codigos.Pessoa;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import javax.swing.JOptionPane;

/**
 *
 * @author ThomasJefferson
 */
public class Controle {
    
    public static boolean cadastroAluno(int matricula, String nome, String cpf, double valor){
        try{
            verificaAluno(cpf, matricula);
            Aluno aluno = new Aluno();
            aluno.setMatricula(matricula);
            aluno.setNome(nome);
            aluno.setCpf(cpf);
            aluno.setMensalidade(valor);
            Banco.cadastraAluno(aluno);
            return true;            
        } catch (CPFInvalidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (NomeInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Nome Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (RuntimeException ex){
            JOptionPane.showMessageDialog(null, "Não foi possível cadastrar no banco!", "Cadastro no banco Invalidada!", JOptionPane.ERROR_MESSAGE, null);
            return false;
        } catch (CPFRepetidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Já cadastrado como Aluno!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (IDRepetidaException ex){
            JOptionPane.showMessageDialog(null, "Matrícula Já cadastrada anteriormente!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        }
    }
    
    public static boolean cadastroEmpregado(String nome, String cpf, double valor) {
        try{
            verificaEmpregado(cpf);
            Empregado empregado = new Empregado();
            empregado.setNome(nome);
            empregado.setCpf(cpf);
            empregado.setSalario(valor);
            Banco.cadastraEmpregado(empregado);
            return true;
        }catch (SalarioInvalidoException ex) {
            JOptionPane.showMessageDialog(null, "Salário Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (CPFInvalidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (NomeInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Nome Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (RuntimeException ex){
            JOptionPane.showMessageDialog(null, "Não foi possível cadastrar no banco!", "Cadastro no banco Invalidada!", JOptionPane.ERROR_MESSAGE, null);
            return false;
        } catch (CPFRepetidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Já cadastrado como Empregado!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;                
        }  
    }
    
    public static boolean cadastroGerente(String nome, String cpf, double valor, double gratificacao) {
        try{
            verificaGerente(cpf);
            Gerente gerente = new Gerente();
            gerente.setNome(nome);
            gerente.setCpf(cpf);
            gerente.setSalario(valor);
            gerente.setGratificacao(gratificacao);
            Banco.cadastraGerente(gerente);
            return true;
        } catch (SalarioInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Salário Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (CPFInvalidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (NomeInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Nome Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (GratificacaoInvalidaException ex){
            JOptionPane.showMessageDialog(null, "Gratificação Inválida!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (RuntimeException ex){
            JOptionPane.showMessageDialog(null, "Não foi possível cadastrar no banco!", "Cadastro no banco Invalidada!", JOptionPane.ERROR_MESSAGE, null);
            return false;
        } catch (CPFRepetidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Já cadastrado como Gerente!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;                          
        }
    }

    public static boolean cadastroComissionado(String nome, String cpf, double valor, double percentual){        
        try{
            verificaComissionado(cpf);
            Comissionado comissionado = new Comissionado();
            comissionado.setNome(nome);
            comissionado.setCpf(cpf);
            comissionado.setSalario(valor);
            comissionado.setPercentual(percentual);
            Banco.cadastraComissionado(comissionado);
            return true;            
        } catch (SalarioInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Salário Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (CPFInvalidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (NomeInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Nome Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (RuntimeException ex){
            JOptionPane.showMessageDialog(null, "Não foi possível cadastrar no banco!", "Cadastro no banco Invalidada!", JOptionPane.ERROR_MESSAGE, null);
            return false;
        } catch (PercentualInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Percentual Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (CPFRepetidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Já cadastrado como Comissionado!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;                                        
        }
    }

    public static boolean cadastroFornecedor(String nome, String cnpj, double valor){
        try{            
            verificaFornecedor(cnpj);
            System.out.println("1");
            Fornecedor fornecedor = new Fornecedor();
            System.out.println("2");
            fornecedor.setNome(nome);
            System.out.println("3");
            fornecedor.setCnpj(cnpj);
            System.out.println("4");
            fornecedor.setValorContrato(valor);
            System.out.println("5");
            Banco.cadastraFornecedor(fornecedor);
            System.out.println("6");
            return true;
        } catch (ContratoInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Contrato tem que ser maior que 0!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (CPFInvalidoException ex){
            JOptionPane.showMessageDialog(null, "CNPJ Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (RuntimeException ex){
            JOptionPane.showMessageDialog(null, "Não foi possível cadastrar no banco!", "Cadastro no banco Invalidada!", JOptionPane.ERROR_MESSAGE, null);
            return false;
        } catch (NomeInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Nome Inválido!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;
        } catch (CPFRepetidoException ex){
            JOptionPane.showMessageDialog(null, "CNPJ Já Cadastrado!", "Informação Inválida!", JOptionPane.WARNING_MESSAGE, null);
            return false;                            
        }
    }
    
    public static ArrayList listaAluno(String ordem){
        ArrayList<Aluno> alunos = new ArrayList<>();
        String SELECT = "select id, nome, cpf, matricula, mensalidade from aluno order by " + ordem + ";";
        try{
            Banco.conecte();
            ResultSet rs = Banco.executeQuery(SELECT);
            while (rs.next()){
                Aluno aluno = new Aluno();
                aluno.setId(rs.getInt("id"));
                aluno.setNome(rs.getString("nome"));
                aluno.setCpf(rs.getString("cpf"));
                aluno.setMatricula(rs.getInt("matricula"));
                aluno.setMensalidade(rs.getDouble("mensalidade"));
                alunos.add(aluno);
            }
        }catch(SQLException e){
            System.err.println(e.getMessage());
        }catch (NomeInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Nome Inválido!");
        }catch (CPFInvalidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Inválido!");
        }
        return alunos;
    }        
    
    public static ArrayList listaEmpregado(String ordem){
        ArrayList<Empregado> empregados = new ArrayList<>();
        String SELECT = "select id, nome, cpf, salario from empregado order by " + ordem + ";";
        try{
            Banco.conecte();
            ResultSet rs = Banco.executeQuery(SELECT);
            while (rs.next()){
                Empregado empregado = new Empregado();
                empregado.setId(rs.getInt("id"));
                empregado.setNome(rs.getString("nome"));
                empregado.setCpf(rs.getString("cpf"));
                empregado.setSalario(rs.getDouble("salario"));
                empregados.add(empregado);
            }
        }catch(SQLException e){
            System.err.println(e.getMessage());
        }catch (NomeInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Nome Inválido!");
        }catch (CPFInvalidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Inválido!");
        }catch (SalarioInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Salário Inválido!");
        }
        return empregados;
    }     

    public static ArrayList listaGerente(String ordem){
        ArrayList<Gerente> gerentes = new ArrayList<>();
        String SELECT = "select id, nome, cpf, salario, gratificacao from gerente order by " + ordem + ";";
        try{
            Banco.conecte();
            ResultSet rs = Banco.executeQuery(SELECT);
            while (rs.next()){
                Gerente gerente = new Gerente();
                gerente.setId(rs.getInt("id"));
                gerente.setNome(rs.getString("nome"));
                gerente.setCpf(rs.getString("cpf"));
                gerente.setSalario(rs.getDouble("salario"));
                gerente.setGratificacao(rs.getDouble("gratificacao"));
                gerentes.add(gerente);
            }
        }catch(SQLException e){
            System.err.println(e.getMessage());
        }catch (NomeInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Nome Inválido!");
        }catch (CPFInvalidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Inválido!");
        }catch (SalarioInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Salário Inválido!");
        }catch (GratificacaoInvalidaException ex){
            JOptionPane.showMessageDialog(null, "Gratificação Inválida!");
        }
        return gerentes;
    }     
    
    public static ArrayList listaComissionado(String ordem){
        ArrayList<Comissionado> comissionados = new ArrayList<>();
        String SELECT = "select id, nome, cpf, salario, percentual from comissionado order by " + ordem + ";";
        try{
            Banco.conecte();
            ResultSet rs = Banco.executeQuery(SELECT);
            while (rs.next()){
                Comissionado comissionado = new Comissionado();
                comissionado.setId(rs.getInt("id"));
                comissionado.setNome(rs.getString("nome"));
                comissionado.setCpf(rs.getString("cpf"));
                comissionado.setSalario(rs.getDouble("salario"));
                comissionado.setPercentual(rs.getDouble("percentual"));
                comissionados.add(comissionado);
            }
        }catch(SQLException e){
            System.err.println(e.getMessage());
        }catch (NomeInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Nome Inválido!");
        }catch (CPFInvalidoException ex){
            JOptionPane.showMessageDialog(null, "CPF Inválido!");
        }catch (SalarioInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Salário Inválido!");
        }catch (PercentualInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Percentual Inválido!");
        }
        return comissionados;
    }    
    
    public static ArrayList listaFornecedor(String ordem){
        ArrayList<Fornecedor> fornecedores = new ArrayList<>();
        String SELECT = "select id, nome, cnpj, contrato from fornecedor order by " + ordem + ";";
        try{
            Banco.conecte();
            ResultSet rs = Banco.executeQuery(SELECT);
            while (rs.next()){
                Fornecedor fornecedor = new Fornecedor();
                fornecedor.setId(rs.getInt("id"));
                fornecedor.setNome(rs.getString("nome"));
                fornecedor.setCnpj(rs.getString("cnpj"));
                fornecedor.setValorContrato(rs.getDouble("contrato"));
                fornecedores.add(fornecedor);
            }
        }catch(SQLException e){
            System.err.println(e.getMessage());
        }catch (NomeInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Nome Inválido!");
        }catch (CPFInvalidoException ex){
            JOptionPane.showMessageDialog(null, "CNPJ Inválido!");
        }catch (ContratoInvalidoException ex){
            JOptionPane.showMessageDialog(null, "Contrato Inválido!");
        }
        return fornecedores;
    }        
    
    public static boolean verificaAluno(String cpf2, int matricula2) throws CPFRepetidoException, IDRepetidaException{
        ArrayList<Aluno> Lista = new ArrayList<>();
        Lista = listaAluno("id");
        for(int i = 0; i < Lista.size(); i++){
            int matricula = Lista.get(i).getMatricula();
            String cpf = Lista.get(i).getCpf(); 
            if(!cpf.equals(cpf2)){
                if(!(matricula == matricula2)){
                    return true;
                } else {
                    throw new IDRepetidaException();
                }
            } else {
                throw new CPFRepetidoException();
            }
        }
        return false;
    }
    
    public static boolean verificaEmpregado(String cpf2) throws CPFRepetidoException{
        ArrayList<Empregado> Lista = new ArrayList<>();
        Lista = listaEmpregado("id");
        for(int i = 0; i < Lista.size(); i++){
            String cpf = Lista.get(i).getCpf(); 
            if(!cpf.equals(cpf2)){
                return true;
            } else {
                throw new CPFRepetidoException();
            }
        }
        return false;
    }
    
    public static boolean verificaGerente(String cpf2) throws CPFRepetidoException{
        ArrayList<Gerente> Lista = new ArrayList<>();
        Lista = listaGerente("id");
        for(int i = 0; i < Lista.size(); i++){
            String cpf = Lista.get(i).getCpf(); 
            if(!cpf.equals(cpf2)){
                return true;
            } else {
                throw new CPFRepetidoException();
            }
        }
        return false;
    }
    
    public static boolean verificaComissionado(String cpf2) throws CPFRepetidoException{
        ArrayList<Comissionado> Lista = new ArrayList<>();
        Lista = listaComissionado("id");
        for(int i = 0; i < Lista.size(); i++){
            String cpf = Lista.get(i).getCpf(); 
            if(!cpf.equals(cpf2)){
                return true;
            } else {
                throw new CPFRepetidoException();
            }
        }
        return false;
    }
    
    public static boolean verificaFornecedor(String cnpj2) throws CPFRepetidoException{
        ArrayList<Fornecedor> Lista = new ArrayList<>();
        Lista = listaFornecedor("id");
        for(int i = 0; i < Lista.size(); i++){
            String cpf = Lista.get(i).getCnpj(); 
            if(!cpf.equals(cnpj2)){
                return true;
            } else {
                throw new CPFRepetidoException();
            }
        }
        return false;
    }
    
    public static boolean verificaCPF(String cpf){
        return Pessoa.verificaCPF(cpf);
    }

    public static boolean verificaCNPJ(String cnpj){
        return Fornecedor.verificaCNPJ(cnpj);
    }    

}