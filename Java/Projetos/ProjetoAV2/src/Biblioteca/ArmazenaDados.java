package Biblioteca;

import java.util.ArrayList;
import java.util.HashMap;


public class ArmazenaDados { //Armazena e Manipula os Dados Armazenados de Aluno e Livro
    protected static final HashMap<Integer, Cadastro.Livro> livro = new HashMap<>();
    protected static final HashMap<Integer, Cadastro.Aluno> aluno = new HashMap<>();
    
    
    public static boolean verificaAluno(int ID){
        return aluno.containsKey(ID);
    }
    
    public static boolean verificaLivro(int ID){
        return livro.containsKey(ID);
    }
    
    public static boolean ReservaLivro(int id_livro, int id_aluno){
        if(aluno.get(id_aluno).getReservaLimite() == 0){
            livro.get(id_livro).setReserva(+1);
            livro.get(id_livro).setEstoque(-1);
            aluno.get(id_aluno).setReservaLimite(+1);
            aluno.get(id_aluno).addReserva(id_livro);
            return true;
        } else {
            return false;
        }
    }

    public static boolean AlugaLivro(int id_livro, int id_aluno){
        if(!aluno.get(id_aluno).getAlugar().contains(id_livro)){
            if(aluno.get(id_aluno).getAluguelLimite() < 3){
                livro.get(id_livro).setAlugada(+1);
                livro.get(id_livro).setEstoque(-1);
                aluno.get(id_aluno).setAluguelLimite(+1);
                aluno.get(id_aluno).addAlugar(id_livro);
                aluno.get(id_aluno).addHistorico(id_livro);
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    
    public static int buscaEstoqueLivro(int id_livro){
        return livro.get(id_livro).getEstoque();
    }
    
    public static int buscaReservadosLivros(int id_livro){
        return livro.get(id_livro).getReserva();
    }
    
    public static int buscaAlugadosLivros(int id_livro){
        return livro.get(id_livro).getAlugada();
    }

    public static String buscaTituloLivro(int id_livro){
        return livro.get(id_livro).getNome();
    }
    
    public static String buscaCategoriaLivro(int Codigo) {
        return livro.get(Codigo).getGenero();
    }

    public static String buscaAutorLivro(int Codigo) {
        return livro.get(Codigo).getAutor();
    }

    public static ArrayList buscaReservas(int id_aluno){
        return aluno.get(id_aluno).getReserva();
    }

    public static ArrayList buscaAlugueis(int id_aluno){
        return aluno.get(id_aluno).getAlugar();
    }

    public static ArrayList TodosOsAlunos(){
        ArrayList temp = new ArrayList();
        for( Integer chavetemp:aluno.keySet()){
            temp.add(chavetemp);
        }
        return temp;
    }

    public static ArrayList TodosOsLivros(){
        ArrayList temp = new ArrayList();
        for( Integer chavetemp:livro.keySet()){
            temp.add(chavetemp);
        }
        return temp;
    }
    
    public static int buscaAlugados(int id_aluno){
        return aluno.get(id_aluno).getAluguelLimite();
    }

    public static int buscaReservados(int id_aluno){
        return aluno.get(id_aluno).getReservaLimite();
    }
    
    public static String buscaNomeAluno(int id_aluno){
        return aluno.get(id_aluno).getNome();
    }
    
    public static boolean DevolveLivro(int id_livro, int id_aluno){
        if(aluno.get(id_aluno).getAluguelLimite() > 0){
            livro.get(id_livro).setAlugada(-1);
            livro.get(id_livro).setEstoque(+1);
            aluno.get(id_aluno).setAluguelLimite(-1);
            aluno.get(id_aluno).decrementaAlugar(id_livro);
            return true;
        } else {
            return false;
        }
    }

    public static boolean CancelaReserva(int id_livro, int id_aluno){
        if(aluno.get(id_aluno).getReservaLimite() > 0){
            livro.get(id_livro).setReserva(-1);
            livro.get(id_livro).setEstoque(+1);
            aluno.get(id_aluno).setReservaLimite(-1);
            aluno.get(id_aluno).decrementaReserva(id_livro);
            return true;
        } else {
            return false;
        }
    }

    public static ArrayList buscaHistoricoAluguel(int id_aluno) {
        return aluno.get(id_aluno).getHistorico();
    }

    
}
