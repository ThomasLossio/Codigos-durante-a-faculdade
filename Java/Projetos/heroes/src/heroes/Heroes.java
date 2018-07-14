package heroes;

import superherois.Personagem;
import util.Teclado;
import superherois.SuperHeroi;
import superherois.SuperPoder;
import superherois.Vilao;

public class Heroes {

    public static void main(String[] args) {

        int retorno = 1, apresentacao = 1, menu_princ = 0, menu_jog = 0, retorno_menu = 0, heroi_null = 1;
        int temp_prisao = 0, vilao_null = 0, forca_poder = 0;
        String nome_real_H = "", nome_heroi = "", nome_real_V = "", nome_vilao = "", nome_poder = "";
        SuperHeroi heroi = new SuperHeroi(null, null);
        Vilao vilao = new Vilao(null, null, 0);

        while (retorno == 1) {
            if (apresentacao == 1) {
                System.out.println("==========================================");
                System.out.println("||   Bem-Vindo ao Jogo de SuperHerois   ||");
                System.out.println("==========================================");
                apresentacao = 0;
            }

            menu_princ = Teclado.lerInteiro("[1]Novo Jogo | [0]Sair");

            switch (menu_princ) {
                case 0: {
                    System.out.println("\nJogo Encerrado!");
                    System.out.print("\n\n");
                    retorno = 0;
                    break;
                }

                case 1: {
                    retorno_menu = 1;
                    heroi_null = 1;
                    vilao_null = 1;
                    while (retorno_menu == 1) {
                        menu_jog = Teclado.lerInteiro("[1]Criar Heroi | [2]Criar Vilão\n[3]Adicionar Poder do Heroi | [4]Adicionar Poder do Vilão\n[5]Confronto | [0]Sair para Menu Principal");

                        switch (menu_jog) {
                            case 0: {
                                retorno_menu = 0;
                            break;}

                            case 1: {
                                if (heroi_null == 1) {
                                    nome_real_H = Teclado.lerString("\nInforme o seu nome: ");
                                    nome_heroi = Teclado.lerString("\nInforme o nome do Heroi: ");

                                    heroi = new SuperHeroi(nome_heroi, nome_real_H);

                                    heroi_null = 0;
                                } else {
                                    System.out.println("\nSuperHeroi ja esta criado!!");
                                }

                            break;}

                            case 2: {
                                if (vilao_null == 1) {
                                    nome_real_V = Teclado.lerString("\nInforme o seu nome: ");
                                    nome_vilao = Teclado.lerString("\nInforme o nome do Vilão: ");
                                    temp_prisao = Teclado.lerInteiro("\nInforme o tempo de prisão: ");

                                    vilao = new Vilao(nome_vilao, nome_real_V, temp_prisao);

                                    vilao_null = 0;
                                } else {
                                    System.out.println("\nVilão ja esta criado!!");
                                }
                            break;}

                            case 3: {
                                nome_poder = Teclado.lerString("Digite o nome do poder: ");
                                forca_poder = Teclado.lerInteiro("Defina a força do poder: ");
                                
                            break;}
                        }

                    }

                    break;
                }
            }

        }

    }
}

