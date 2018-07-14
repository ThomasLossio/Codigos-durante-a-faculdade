package dominio;

import java.util.Random;
import operacao.Algoritimo;

/**
 * Classe que define um indivíduo
 *
 * @author pcollares
 *
 */
public class Individuo {

    private int gene[][] = new int[Algoritimo.N][Algoritimo.N];

    private int aptidao;
    private int geracao;

    public Individuo(int[][] gene) {
        this.gene = gene;
        aptidao = CalculaFitness();
    }

    public Individuo() {
        for (int i = 0; i < gene.length; i++) {
            for (int j = 0; j < gene.length; j++) {
                //já que é uma planta definida, não mudarei a planta, apenas coloquei aleatório nos outros locais
                if (Algoritimo.getPlanta()[i][j] == 1) {
                    this.gene[i][j] = 1;
                } else {
                    int g=0;
                    //não é preciso mais obstáculos, então retira-se os obstáculos de serem escolhidos
                    do {
                        g = geneAleatorio();
                        this.gene[i][j] = g;
                    } while (g == 1);
//                    } else this.gene[i][j] = null
                }

            }
        }
        aptidao = CalculaFitness();
    }

    private int verificaPonto(int i, int j) {
        int soma = 0;
        boolean bom = true;

        //TIPO 2
        if (this.gene[i][j] == 2) {
            //direita
            if (j != Algoritimo.N - 1) {
                if (this.gene[i][j + 1] == 2) {
                    soma -= 20;
                } else if (this.gene[i][j + 1] == 3) {
                    soma += 2;
                } else if (this.gene[i][j + 1] == 4) {
                    soma++;
                } else if (this.gene[i][j + 1] == 5) {
                    soma++;
                } else if (this.gene[i][j + 1] == 6) {
                    soma -= 14;
                }
            }
            //baixo              
            if (i != Algoritimo.N - 1) {
                if (this.gene[i + 1][j] == 2) {
                    soma += 40;
                } else if (this.gene[i + 1][j] == 3) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 4) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 5) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 6) {
                    soma -= 20;
                }
            }
            //esquerda
            if (j != 0) {
                if (this.gene[i][j - 1] == 2) {
                    soma -= 20;
                } else if (this.gene[i][j - 1] == 3) {
                    soma += 2;
                } else if (this.gene[i][j - 1] == 4) {
                    soma++;
                } else if (this.gene[i][j - 1] == 5) {
                    soma++;
                } else if (this.gene[i][j - 1] == 6) {
                    soma -= 14;
                }
            }
            //cima
            if (i != 0) {
                if (this.gene[i - 1][j] == 2) {
                    soma += 40;
                } else if (this.gene[i - 1][j] == 3) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 4) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 5) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 6) {
                    soma -= 20;
                }
            }

            //TIPO 3
        } else if (this.gene[i][j] == 3) {
            //direita
            if (j != Algoritimo.N - 1) {
                if (this.gene[i][j + 1] == 2) {
                    soma += 2;
                } else if (this.gene[i][j + 1] == 3) {
                    soma -= 20;
                } else if (this.gene[i][j + 1] == 4) {
                    soma++;
                } else if (this.gene[i][j + 1] == 5) {
                    soma++;
                } else if (this.gene[i][j + 1] == 6) {
                    soma -= 14;
                }
            }
            //baixo              
            if (i != Algoritimo.N - 1) {
                if (this.gene[i + 1][j] == 2) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 3) {
                    soma += 40;
                } else if (this.gene[i + 1][j] == 4) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 5) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 6) {
                    soma -= 20;
                }
            }

            //esquerda
            if (j != 0) {
                if (this.gene[i][j - 1] == 2) {
                    soma += 2;
                } else if (this.gene[i][j - 1] == 3) {
                    soma -= 20;
                } else if (this.gene[i][j - 1] == 4) {
                    soma++;
                } else if (this.gene[i][j - 1] == 5) {
                    soma++;
                } else if (this.gene[i][j - 1] == 6) {
                    soma -= 14;
                }
            }

            //cima
            if (i != 0) {
                if (this.gene[i - 1][j] == 2) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 3) {
                    soma += 40;
                } else if (this.gene[i - 1][j] == 4) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 5) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 6) {
                    soma -= 20;
                }
            }

            //TIPO 4   
        } else if (this.gene[i][j] == 4) {

            //direita
            if (j != Algoritimo.N - 1) {
                if (this.gene[i][j + 1] == 2) {
                    soma++;
                } else if (this.gene[i][j + 1] == 3) {
                    soma++;
                } else if (this.gene[i][j + 1] == 4) {
                    soma -= 20;
                } else if (this.gene[i][j + 1] == 5) {
                    soma++;
                } else if (this.gene[i][j + 1] == 6) {
                    soma += 14;
                }
            }
            //baixo              
            if (i != Algoritimo.N - 1) {
                if (this.gene[i + 1][j] == 2) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 3) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 4) {
                    soma += 40;
                } else if (this.gene[i + 1][j] == 5) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 6) {
                    soma -= 20;
                }
            }

            //esquerda
            if (j != 0) {
                if (this.gene[i][j - 1] == 2) {
                    soma++;
                } else if (this.gene[i][j - 1] == 3) {
                    soma++;
                } else if (this.gene[i][j - 1] == 4) {
                    soma -= 20;
                } else if (this.gene[i][j - 1] == 5) {
                    soma++;
                } else if (this.gene[i][j - 1] == 6) {
                    soma += 14;
                }
            }

            //cima
            if (i != 0) {
                if (this.gene[i - 1][j] == 2) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 3) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 4) {
                    soma += 40;
                } else if (this.gene[i - 1][j] == 5) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 6) {
                    soma -= 20;
                }
            }

            //TIPO 5
        } else if (this.gene[i][j] == 5) {

            //direita
            if (j != Algoritimo.N - 1) {//nao pode estar na ultima posicao a direita
                if (this.gene[i][j + 1] == 2) {
                    soma++;
                } else if (this.gene[i][j + 1] == 3) {
                    soma++;
                } else if (this.gene[i][j + 1] == 4) {
                    soma++;
                } else if (this.gene[i][j + 1] == 5) {
                    soma -= 20;
                } else if (this.gene[i][j + 1] == 6) {
                    soma -= 14;
                }
            }
            //baixo              
            if (i != Algoritimo.N - 1) {//nao pode estar na ultima posicao abaixo
                if (this.gene[i + 1][j] == 2) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 3) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 4) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 5) {
                    soma += 40;
                } else if (this.gene[i + 1][j] == 6) {
                    soma -= 20;
                }
            }

            //esquerda
            if (j != 0) {//nao pode estar na ultima posicao a esquerda
                if (this.gene[i][j - 1] == 2) {
                    soma++;
                } else if (this.gene[i][j - 1] == 3) {
                    soma++;
                } else if (this.gene[i][j - 1] == 4) {
                    soma++;
                } else if (this.gene[i][j - 1] == 5) {
                    soma -= 20;
                } else if (this.gene[i][j - 1] == 6) {
                    soma -= 14;
                }
            }

            //cima
            if (i != 0) {
                if (this.gene[i - 1][j] == 2) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 3) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 4) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 5) {
                    soma += 40;
                } else if (this.gene[i - 1][j] == 6) {
                    soma -= 20;
                }
            }

            //TIPO 6
        } else if (this.gene[i][j] == 6) {
            //direita
            if (j != Algoritimo.N - 1) {//nao pode estar na ultima posicao a direita
                if (this.gene[i][j + 1] == 2) {
                    soma -= 4;
                } else if (this.gene[i][j + 1] == 3) {
                    soma -= 4;
                } else if (this.gene[i][j + 1] == 4) {
                    soma += 14;
                } else if (this.gene[i][j + 1] == 5) {
                    soma -= 4;
                } else if (this.gene[i][j + 1] == 6) {
                    soma -= 20;

                }
            }
            //baixo              
            if (i != Algoritimo.N - 1) {//nao pode estar na ultima posicao abaixo
                if (this.gene[i + 1][j] == 2) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 3) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 4) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 5) {
                    soma -= 20;
                } else if (this.gene[i + 1][j] == 6) {
                    soma += 40;
                }
            }

            //esquerda
            if (j != 0) {//nao pode estar na ultima posicao a esquerda
                if (this.gene[i][j - 1] == 2) {
                    soma -= 4;
                } else if (this.gene[i][j - 1] == 3) {
                    soma -= 4;
                } else if (this.gene[i][j - 1] == 4) {
                    soma += 14;
                } else if (this.gene[i][j - 1] == 5) {
                    soma -= 4;
                } else if (this.gene[i][j - 1] == 6) {
                    soma -= 20;
                }
            }

            //cima
            if (i != 0) {
                if (this.gene[i - 1][j] == 2) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 3) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 4) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 5) {
                    soma -= 20;
                } else if (this.gene[i - 1][j] == 6) {
                    soma += 40;
                }
            }
        }

        return soma;
    }

    private int CalculaFitness() {
        int soma = 0;

        for (int i = 0; i < gene.length; i++) {
            for (int j = 0; j < gene.length; j++) {
                int retorno = verificaPonto(i, j);
                if (retorno >= 0) {
                    soma += retorno;
                } else {
                    soma -= retorno;
                }
            }
        }

        //soma = 100 - (10 * soma);
        return soma;
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
            do {
                r = new Random();
                pos1 = r.nextInt(gene.length);
                pos2 = r.nextInt(gene.length);

            } while (Algoritimo.getPlanta()[pos1][pos2] == 1);
            do {
                this.gene[pos1][pos2] = geneAleatorio();
            } while (this.gene[pos1][pos2] == 1);
            aptidao = CalculaFitness();
        }
    }

    public int[][] getGene() {
        return gene;
    }

    public int getAptidao() {
        return aptidao;
    }

    private int geneAleatorio() {
        Random r = new Random();

        int valor = 0;
        do {
            valor = r.nextInt(7);
        } while (valor == 0 || valor == 1);

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
            for (int j = 0; j < gene.length; j++) {
                s += gene[i][j] + " ";
            }
            s += "]\n";

        }
        return s;
    }

}
