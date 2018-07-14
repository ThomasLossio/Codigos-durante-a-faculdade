/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controle;

import java.util.ArrayList;
import logica.Aluno;
import logica.Armazenamento;
import logica.Empregado;

/**
 *
 * @author ThomasJefferson
 */
public class Controle {
    
    public static boolean CadastraAluno(int Matricula, String Nome, String Cpf, double Mensalidade){
        Aluno a = new Aluno();
        a.setMatricula(Matricula);
        a.setCpf(Cpf);
        a.setMensalidade(Mensalidade);
        a.setNome(Nome);
        Armazenamento.CadastroAluno(a);
        return true;
    }

    public static boolean CadastraEmpregado(String Nome, String Cpf, double Salario){
        Empregado e = new Empregado();
        e.setCpf(Cpf);
        e.setSalario(Salario);
        e.setNome(Nome);
        Armazenamento.CadastroEmpregado(e);
        return true;
    }
    
    public static ArrayList RetornaAluno(){
        return Armazenamento.RetornaAlunos();
    }

    public static ArrayList RetornaEmpregado(){
        return Armazenamento.RetornaEmpregados();
    }
    
}
