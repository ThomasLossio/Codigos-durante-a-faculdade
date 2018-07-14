package dominio;

import java.util.Random;
import operacao.Algoritimo;

/**
 * Classe que define um indivíduo
 *
 * @author pcollares
 * [ 0, 0, 0, 1, 0, 0, 0, 1, 0, 0
 *   0, 0, 0, 1, 1, 0, 1, 1, 0, 0
 *   0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 *   1, 1, 1, 1, 0, 0, 0, 1, 1, 1
 *   0, 0, 0, 1, 0, 0, 0, 1, 0, 0
 *   0, 0, 0, 1, 0, 0, 0, 1, 0, 0
 *   0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 *   1, 1, 1, 0, 0, 0, 0, 0, 1, 1
 *   0, 0, 0, 1, 0, 0, 0, 1, 0, 0
 *   0, 0, 0, 1, 0, 0, 0, 1, 0, 0 ]
 */
public class Individuo {

    private int gene[][] = new int[Algoritimo.N][Algoritimo.N];
    private int contaA, contaB;
    private double aptidao;
    private int geracao;

    public Individuo(int[][] gene) {
        this.gene = gene;
        aptidao = CalculaFitness();
    }

    public Individuo() {

        
        for (int i = 0; i < gene.length; i++) {
            for(int j = 0; j < gene.length; j++){
                //já que é uma planta definida, não mudarei a planta, apenas coloquei aleatório nos outros locais
                if (Algoritimo.getPlanta()[i][j] == 1) this.gene[i][j] = 1;
                else{
//                    if (!novaPopulacao) {
                        int g;
                        do {
                            g = geneAleatorio();
                            this.gene[i][j] = g;
                        }while (g == 1);
                }
                
            }
        }
        aptidao = CalculaFitness();
    }
    
    private int verificaPonto(int i, int j, int flag){
        int soma = 0;
        boolean bom = true;
        //direita
        if (j < Algoritimo.N - flag) {
            for (int k = 1; k <= flag; k++){
                if ((this.gene[i][j+k] == 0)) bom = true;
                else {
                    bom = false;
                    break;
                }
            }
        } else bom = false;    
        if (bom) soma += 3;
        
        //cima - direita
        if ((j < Algoritimo.N - flag) && (i > (-1 + flag))){
            for (int k = 1; k <= flag; k++){
                if ((this.gene[i-k][j+k] == 0)) bom = true;
                else {
                    bom = false;
                    break;
                }
            }            
        } else bom = false;
        if (bom) soma += 3;
        
        //cima
        if (i > (-1 + flag)){
            for (int k = 1; k <= flag; k++){
                if ((this.gene[i-k][j] == 0)) bom = true;
                else {
                    bom = false;
                    break;
                }
            }            
        } else bom = false;
        if (bom) soma += 3;
        
        //cima-esquerda
        if ((i > (-1 + flag)) && (j > (-1 + flag))){
            for (int k = 1; k <= flag; k++){
                if ((this.gene[i-k][j-k] == 0)) bom = true;
                else {
                    bom = false;
                    break;
                }
            }            
        } else bom = false;
        if (bom) soma += 3;
        
        //esquerda
        if ((j > (-1 + flag))){
            for (int k = 1; k <= flag; k++){
                if ((this.gene[i][j-k] == 0)) bom = true;
                else {
                    bom = false;
                    break;
                }
            }            
        } else bom = false;
        if (bom) soma += 3;

        //esquerda-baixo
        if ((i < Algoritimo.N - flag) && (j > (-1 + flag))){
            for (int k = 1; k <= flag; k++){
                if ((this.gene[i+k][j-k] == 0)) bom = true;
                else {
                    bom = false;
                    break;
                }
            }            
        } else bom = false;
        if (bom) soma += 3;
        
        //baixo                
        if ((i < Algoritimo.N - flag)){
            for (int k = 1; k <= flag; k++){
                if ((this.gene[i+k][j] == 0)) bom = true;
                else {
                    bom = false;
                    break;
                }
            }            
        } else bom = false;
        if (bom) soma += 3;
        
        //baixo-direita
        if ((i < Algoritimo.N - flag) && (j < Algoritimo.N - flag)){
            for (int k = 1; k <= flag; k++){
                if ((this.gene[i+k][j+k] == 0)) bom = true;
                else {
                    bom = false;
                    break;
                }
            }            
        } else bom = false;
        if (bom) soma += 3;
        
        return soma;
    }

    private double CalculaFitness(){
        int flag, contaZero = 0;
        this.contaA = 0;
        this.contaB = 0;
        double soma=0.0;
        for (int i = 0; i < gene.length; i++){
            int flagOk = 0;
            flag = 0;
            for(int j = 0; j < gene.length; j++){
                if (gene[i][j] == 0) contaZero++;
                else if (gene[i][j] == 2) {
                    flag = 2;
                    this.contaA++;
                }
                else if (gene[i][j] == 3) {
                    flag = 3;
                    this.contaB++;
                }
                if (flag > 1){
                    soma += verificaPonto(i, j, flag) / 8;
                    
                }
            }
        }
        soma /= 74;
//        if (contaZero < 7) soma++;
        if (this.contaA >= this.contaB) soma += 3;
        
                    
        soma=100.00 - (10 * soma);
     return soma;
    }

    public int getContaA() {
        return contaA;
    }

    public int getContaB() {
        return contaB;
    }
    
    public void aplicaMutacao(double aptidaoMedia) {
        Random r = new Random();
        double taxaMutacao = Algoritimo.getTaxaDeMutacao();
        int pos1, pos2;

        //Melhores indivíduos tem menos chances de sofrerem mutação
        if (aptidao < aptidaoMedia) {
            taxaMutacao = taxaMutacao / 10;
        }

        if (r.nextDouble() <= taxaMutacao) {
            do{
                r = new Random();
                pos1 = r.nextInt(gene.length);
                pos2 = r.nextInt(gene.length);

            } while(Algoritimo.getPlanta()[pos1][pos2] == 1); 
            do{
                this.gene[pos1][pos2] = geneAleatorio();
            }while(this.gene[pos1][pos2] == 1);
            aptidao = CalculaFitness();
        }
    }

    public int[][] getGene() {
        return gene;
    }

    public double getAptidao() {
        return aptidao;
    }

    private int geneAleatorio() {
        Random r = new Random();
        
        int valor = r.nextInt(4);
        return valor;
    }

    public int getGeracao() {
        return geracao;
    }

    public void setGeracao(int geracao) {
        this.geracao = geracao;
    }

    @Override
    public String toString() {
        String s = "";
        for (int i = 0; i < gene.length; i++) {
            s += "[ ";
            for (int j = 0; j < gene.length; j++){
                s += gene[i][j] + " ";
            }
            s += "]\n";
            
        }
        return s;
    }

}