/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package logica;

import java.util.ArrayList;

/**
 *
 * @author ThomasJefferson
 */
public class Armazenamento {
    private static ArrayList<Aluno> alunos = new ArrayList();
    private static ArrayList<Empregado> empregados = new ArrayList();
    
    public static void CadastroAluno(Aluno a){
        alunos.add(a);
    }

    public static void CadastroEmpregado(Empregado e){
        empregados.add(e);
    }
    
    public static ArrayList RetornaAlunos(){
        return alunos;
    }

    public static ArrayList RetornaEmpregados(){
        return empregados;
    }
    
}
