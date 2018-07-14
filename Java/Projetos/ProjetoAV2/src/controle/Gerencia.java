
package controle;

import Biblioteca.ArmazenaDados;
import Cadastro.Aluno;
import Cadastro.Cadastro;
import Cadastro.Livro;
import java.util.ArrayList;


public class Gerencia{ //Ponte entre a Interface Gráfica com a Lógica de Programação
    public static int addDados(int idOpcao, ArrayList parametro){ //idOpcao == 1 é Aluno e == 2 é Livro
        switch (idOpcao){
            case 1: {
                if(!ArmazenaDados.verificaAluno(parametro.get(0).hashCode())){
                    Aluno aluno = new Aluno(parametro.get(0).hashCode(), parametro.get(1).toString());
                    Cadastro.addDados(idOpcao, aluno);
                    return 1;
                } else {
                    return -1;
                }
            }
            case 2: {
                if(!ArmazenaDados.verificaLivro(parametro.get(0).hashCode())){
                    Livro livro = new Livro(parametro.get(0).hashCode(), parametro.get(1).toString(), parametro.get(2).toString(), parametro.get(3).toString(), parametro.get(4).hashCode());
                    Cadastro.addDados(idOpcao, livro);
                    return 1;
                } else {
                    return -1;
                }                
            }
        }
        return -1;
    }
    
    public static boolean VerificaAluno(int id){
        return ArmazenaDados.verificaAluno(id);
    }
    
    public static boolean VerificaLivro(int id){
        return ArmazenaDados.verificaLivro(id);
    }
    
    public static boolean ReservaLivro(int id_livro, int id_aluno){
        return ArmazenaDados.ReservaLivro(id_livro, id_aluno);
    }
    
    public static boolean AlugaLivro(int id_livro, int id_aluno){
        return ArmazenaDados.AlugaLivro(id_livro, id_aluno);
    }
    
    public static int buscaEstoqueLivro(int id_livro){
        return ArmazenaDados.buscaEstoqueLivro(id_livro);
    }

    public static int buscaReservadosLivros(int id_livro){
        return ArmazenaDados.buscaReservadosLivros(id_livro);
    }
    
    public static int buscaAlugadosLivros(int id_livro){
        return ArmazenaDados.buscaAlugadosLivros(id_livro);
    }

    public static String buscaTituloLivro(int id_livro){
        return ArmazenaDados.buscaTituloLivro(id_livro);
    }
    
    public static ArrayList buscaReservas(int id_aluno){
        return ArmazenaDados.buscaReservas(id_aluno);
    }

    public static ArrayList buscaHistoricoAlugel(int id_aluno){
        return ArmazenaDados.buscaHistoricoAluguel(id_aluno);
    }

    public static ArrayList buscaAlugueis(int id_aluno){
        return ArmazenaDados.buscaAlugueis(id_aluno);
    }

    public static ArrayList TodosOsAlunos(){
        return ArmazenaDados.TodosOsAlunos();
    }

    public static ArrayList TodosOsLivros(){
        return ArmazenaDados.TodosOsLivros();
    }

    public static int buscaAlugados(int id_aluno){
        return ArmazenaDados.buscaAlugados(id_aluno);
    }

    public static int buscaReservados(int id_aluno){
        return ArmazenaDados.buscaReservados(id_aluno);
    }
    
    public static String buscaNomeAluno(int id_aluno){
        return ArmazenaDados.buscaNomeAluno(id_aluno);
    }
    
    public static boolean DevolveLivro(int id_livro, int id_aluno){
        return ArmazenaDados.DevolveLivro(id_livro, id_aluno);
    }

    public static boolean CancelaReserva(int id_livro, int id_aluno){
        return ArmazenaDados.CancelaReserva(id_livro, id_aluno);
    }

    public static String buscaCategoriaLivro(int Codigo) {
        return ArmazenaDados.buscaCategoriaLivro(Codigo);
    }

    public static String buscaAutorLivro(int Codigo) {
        return ArmazenaDados.buscaAutorLivro(Codigo);
    }
}
