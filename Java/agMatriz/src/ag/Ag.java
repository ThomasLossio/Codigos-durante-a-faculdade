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
 * @author Neylanio
 *
 */
public class Ag {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
            int tamPop=5;
            Populacao populacao = new Populacao(tamPop, true);
            populacao.ordenaPopulacao();
//            Individuo melhorIndividuo = populacao.getIndivduo(Algoritimo.N);
            int i;
            for (i=0;i<tamPop; i++){
                System.out.println(populacao.getIndivduo(i).toString());
            }
            
            int geracao = 0;
            while (geracao < 10200) {
                geracao++;
              
                populacao = Algoritimo.novaGeracao(populacao, geracao, true);//o true seria o elitismo
                Algoritimo.setPopulacaoAtual(populacao);

            }
            System.out.println("--------------------\nFIM DO AG:\nMelhor indivíduo na geração: " + populacao.getIndivduo(populacao.getTamPopulacao()-1).getGeracao() + "\n \n|\n|\n|\nV\n" + populacao.getIndivduo(populacao.getTamPopulacao()-1).toString() + "\n MELHOR --> " + populacao.getIndivduo(populacao.getTamPopulacao()-1).getAptidao() + " APTIDÃO\n");
//            for (i=0;i<tamPop; i++){
//                System.out.println( i + ":: \n" + populacao.getIndivduo(i).toString()+ "---->"+ populacao.getIndivduo(i).getAptidao() );
//            }
            
    }
    
    
}
    
