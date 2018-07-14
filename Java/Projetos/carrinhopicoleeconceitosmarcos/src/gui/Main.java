/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gui;

import controle.Controle;
import util.Teclado;

/**
 *
 * @author ThomasJefferson
 */
public static void Main (){
        int opcao = 0;
        do{
            System.out.println("0 - add sabor 1- Carregar 2- Vender 3- relatorio");
             
            opcao = Teclado.lerInteiro();
            if(opcao == 0){
                String sabor  = Teclado.lerString();
                if(Controle.adicionarSabor(sabor)){
                    System.out.println("Sabor adicionado ");
                }else{
                    System.out.println("Sabor repetido ");
                }
            }else if(opcao == 1){
                Controle.criaCarrinho();
                int menu = 0;
                    do{
                        System.out.println("1- add sabor 2- sair");
                        menu = Teclado.lerInteiro();
                        if(menu == 1){
                            System.out.println("Sabor?");
                            String sabor  = Teclado.lerString();
                            System.out.println("Quantidade?");
                            int quantidade  = Teclado.lerInteiro();
                            if(Controle.carregaCarrinhoCorrente(sabor, 10, quantidade)){
                                System.out.println("Sabor adicionado com sucesso");
                            }else{
                                System.out.println("Sabor NAO adicionado com sucesso");
                            }
                        }
                    }while(menu != 2);
            }else if (opcao == 2){
                // carrinho
                System.out.println("Informe o carrinho");
                int carrinho = Teclado.lerInteiro();
                if(Controle.selecionaCarrinho(carrinho)){
                    System.out.println("Carrinho selecionado.");
                    Controle.abreVenda();
                    int menu = 0;
                    do{
                        System.out.println("1- add picole 2- sair");
                        menu = Teclado.lerInteiro();
                        if(menu == 1){
                            System.out.println("Sabor?");
                            String sabor  = Teclado.lerString();
                            System.out.println("Quantidade?");
                            int quantidade  = Teclado.lerInteiro();
                            if(Controle.addLinha(sabor, quantidade)){
                                System.out.println("Sabor adicionado com sucesso");
                            }else{
                                System.out.println("Sabor NAO adicionado com sucesso");
                            }
                        }
                    }while(menu != 2);
                }
                Controle.fechaVenda();
               
            }else if (opcao == 4){
                System.out.println("Opcao 3");
            }
            
       } while (opcao >= 0);     


}
