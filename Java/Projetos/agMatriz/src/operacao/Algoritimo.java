package operacao;

import dominio.Funcoes;
import dominio.Individuo;
import dominio.Populacao;
import java.util.Random;

/**
 * Classe que mantém dados do algorítimo, com taxa de crossover e mutação,
 * função e população corrente ...
 *
 * @author pcollares
 */
public class Algoritimo {

    private static double taxaDeCrossover=0.2;
    private static double taxaDeMutacao=0.01;
    private static Funcoes funcao;
    private static Populacao populacaoAtual;
    public static int N = 10;
    private static int planta[][] = { {0, 0, 0, 1, 0, 0, 0, 1, 0, 0}, 
                                      {0, 0, 0, 1, 1, 0, 1, 1, 0, 0}, 
                                      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                                      {1, 1, 1, 1, 0, 0, 0, 1, 1, 1}, 
                                      {0, 0, 0, 1, 0, 0, 0, 1, 0, 0}, 
                                      {0, 0, 0, 1, 0, 0, 0, 1, 0, 0}, 
                                      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                                      {1, 1, 1, 0, 0, 0, 0, 0, 1, 1}, 
                                      {0, 0, 0, 1, 0, 0, 0, 1, 0, 0}, 
                                      {0, 0, 0, 1, 0, 0, 0, 1, 0, 0} };    

    public static int[][] getPlanta() {
        return planta;
    }

    public static Populacao novaGeracao(Populacao populacao, int geracao, boolean elitismo) {
        Random r;
        Populacao novaPopulacao = new Populacao(populacao.getTamPopulacao(), false);

        if (elitismo) {
            novaPopulacao.setIndividuo(populacao.getIndivduo(0));
        }

        while (novaPopulacao.getNumIndividuos() < novaPopulacao.getTamPopulacao()) {
            Individuo[] pais = new Individuo[2];
            pais[0] = selecaoTorneio(populacao);
            pais[1] = selecaoTorneio(populacao);

            Individuo[] filhos;

            r = new Random();
            if (r.nextDouble() <= taxaDeCrossover) {
                filhos = crossover(pais);
                filhos[0].setGeracao(geracao);
                filhos[1].setGeracao(geracao);
                novaPopulacao.setIndividuo(filhos[0]);
                novaPopulacao.setIndividuo(filhos[1]);
            } else {
                novaPopulacao.setIndividuo(pais[0]);
                novaPopulacao.setIndividuo(pais[1]);
            }
        }

        double aptidaoMedia = novaPopulacao.getMediaAptidao();
        for (int i = 0; i < novaPopulacao.getTamPopulacao(); i++) {
            novaPopulacao.getIndivduo(i).aplicaMutacao(aptidaoMedia);
        }

        novaPopulacao.ordenaPopulacao();
        return novaPopulacao;
    }

    public static Individuo selecaoTorneio(Populacao populacao) {
        int n = 2;
        Random r;
        Populacao populacaoIntermediaria = new Populacao(n, false);

        r = new Random();
        for (int i = 0; i < n; i++) {
            int pos = r.nextInt(populacao.getTamPopulacao());
            populacaoIntermediaria.setIndividuo(populacao.getIndivduo(pos));
        }
        populacaoIntermediaria.ordenaPopulacao();

        return populacaoIntermediaria.getIndivduo(0);
    }

    public static Individuo[] crossover(Individuo pais[]) {

        Individuo filhos[] = new Individuo[2];

        int geneFilho1[][] = new int[Algoritimo.N][Algoritimo.N];
        int geneFilho2[][] = new int[Algoritimo.N][Algoritimo.N];

        for (int i = 0; i < Algoritimo.N; i++) {
            for (int j = 0; j < Algoritimo.N; j++){
                geneFilho1[i][j] = crossoverAritimetico(pais[0].getGene()[i][j], pais[1].getGene()[i][j], 1);
                geneFilho2[i][j] = crossoverAritimetico(pais[0].getGene()[i][j], pais[1].getGene()[i][j], 2);                            
            }
        }

        filhos[0] = new Individuo(geneFilho1);
        filhos[1] = new Individuo(geneFilho2);
        
        return filhos;
    }

    public static int crossoverAritimetico(int gene1, int gene2, int parte) {

        int beta = 3;
        int geneFilho;

        if (parte == 1) {
            geneFilho = gene1 ;
        } else {
            geneFilho = gene2;
        }

        return geneFilho;
    }

    public static double getTaxaDeCrossover() {
        return taxaDeCrossover;
    }

    public static void setTaxaDeCrossover(double taxaDeCrossover) {
        Algoritimo.taxaDeCrossover = taxaDeCrossover;
    }

    public static double getTaxaDeMutacao() {
        return taxaDeMutacao;
    }

    public static void setTaxaDeMutacao(double taxaDeMutacao) {
        Algoritimo.taxaDeMutacao = taxaDeMutacao;
    }

    public static Funcoes getFuncao() {
        return funcao;
    }

    public static void setFuncao(Funcoes funcao) {
        Algoritimo.funcao = funcao;
    }

    public static Populacao getPopulacaoAtual() {
        return populacaoAtual;
    }

    public static void setPopulacaoAtual(Populacao populacaoAtual) {
        Algoritimo.populacaoAtual = populacaoAtual;
    }
}