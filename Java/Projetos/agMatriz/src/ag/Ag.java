/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package ag;

import dominio.Individuo;
import dominio.Populacao;
import operacao.Algoritimo;

/**
 *
 * @author michelan
 * Código adaptado para Matriz por Thomas
 * Por favor, cocnsiderar que esta matriz aqui é a matriz para meu trabalho para que eu
 * possa ter noção do meu cálculo de fitness, vlw flw!!!!
 * [ 2, 2, 2, 1, 0, 0, 0, 1, 0, 0
 *   2, 2, 2, 1, 1, 0, 1, 1, 0, 0
 *   2, 2, 2, 3, 0, 0, 0, 0, 0, 0
 *   1, 1, 1, 1, 0, 0, 0, 1, 1, 1
 *   0, 0, 0, 1, 0, 0, 0, 1, 0, 0
 *   0, 0, 0, 1, 0, 0, 0, 1, 0, 0
 *   0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 *   1, 1, 1, 0, 0, 0, 0, 0, 1, 1
 *   0, 0, 0, 1, 0, 0, 0, 1, 0, 0
 *   0, 0, 0, 1, 0, 0, 0, 1, 0, 0 ]
 */
public class Ag {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
            int tamPop=1200;
            Populacao populacao = new Populacao(tamPop, true);
            populacao.ordenaPopulacao();
            Individuo melhorIndividuo = populacao.getIndivduo(Algoritimo.N);
            int i;
            for (i=0;i<tamPop; i++){
                System.out.println(populacao.getIndivduo(i).toString());
            }
            
            int geracao = 0;
            while (geracao < 5000000) {
                geracao++;
              
                
               // if (geracao % Algoritimo.getFuncao().getIncremento() == 0) {
                    //graficoConvergencia.update(geracao, populacao, populacao.getIndivduo(populacao.getNumIndividuos() - 1), populacao.getIndivduo(0), Algoritimo.getFuncao().getMinimoDaFuncao());
               // }

                populacao = Algoritimo.novaGeracao(populacao, geracao, true);
                Algoritimo.setPopulacaoAtual(populacao);

                

            }
            System.out.println("--------------------\nFIM DO AG:\nMelhor indivíduo na geração: " + populacao.getIndivduo(populacao.getTamPopulacao()-1).getGeracao() + "\n \n|\n|\n|\nV\n\n" + populacao.getIndivduo(populacao.getTamPopulacao()-1).toString() + "\n MELHOR ----> " + populacao.getIndivduo(populacao.getTamPopulacao()-1).getAptidao() + "\n");
            System.out.println("Roteador de Curto alcance " + populacao.getIndivduo(populacao.getTamPopulacao()-1).getContaA() + " posições.");
            System.out.println("Custo Roteador Curto: R$" + populacao.getIndivduo(populacao.getTamPopulacao()-1).getContaA() * 50);
            System.out.println("Roteador de Longo alcance " + populacao.getIndivduo(populacao.getTamPopulacao()-1).getContaB() + " posições.");
            System.out.println("Custo Roteador Longo: R$" + populacao.getIndivduo(populacao.getTamPopulacao()-1).getContaB() * 100);
            System.out.println("Total = R$" + (populacao.getIndivduo(populacao.getTamPopulacao()-1).getContaA() * 50 + populacao.getIndivduo(populacao.getTamPopulacao()-1).getContaB() * 100));
            System.out.println("");
            for (i=0;i<tamPop; i++){
                System.out.println( i + ":: \n" + populacao.getIndivduo(i).toString()+ "---->"+ populacao.getIndivduo(i).getAptidao() );
            }
            
    }
    
    
}
    
