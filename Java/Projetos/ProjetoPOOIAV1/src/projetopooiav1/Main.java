/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projetopooiav1;

import util.Teclado;

/**
 *
 * @author ThomasJefferson
 */
public class Main {
    public static void main(String[] args) {
        Fabrica chupale = new Fabrica();
        int op = 0, op2 = 0, flag=0, relatorio = 0, add = 0, remove = 0, consulta = 0, venda = 0, qntd = 0;
        String Sabor = "";
        
        do{
            if(flag==0){
                System.out.println("Inicializando....\n");                
                System.out.println("Bem Vindo ao sistema da fábrica Chupalé!");
                System.out.println("Chupalé Versão Beta\n");
                flag++;
            }
            op = Teclado.lerInteiro("===================================\n"
                    + "[1]Carrinho\n[2]Informar Vendas\n[3]Relatórios\n[0]Sair\n"
                    + "===================================");
            switch(op){
                case 1:{
                    do{
                        op2 = Teclado.lerInteiro("===================================\n"
                            + "[1]Adicionar\n[2]Remover\n[3]Consultar Informações\n[4]Adicionar Sabor/Quantidade\n[0]Menu Principal\n"
                            + "===================================");
                        switch(op2){
                            case 1:{
                                add = Teclado.lerInteiro("\nDeseja Continuar o Cadastro do Carrinho? [1]Sim/[2]Não");
                                if(add==1){
                                    System.out.println("\nCarrinho Cadastrado com o número de identificação igual a: " + chupale.adicionarCarrinho());
                                }
                            break;}
                            case 2:{
                                remove = Teclado.lerInteiro("\nDeseje Continuar com a Remoção de um carrinho? [1]Sim/[2]Não");
                                if(remove==1){
                                    remove = Teclado.lerInteiro("\nInforme o número de identificação do carrinho que deseja remover: ");
                                    if(chupale.removerCarrinho(remove)){
                                        System.out.println("\nCarrinho encontrado e removido com sucesso!\n");
                                    } else {
                                        System.out.println("Número de Identificação Inexistente no programa!");
                                        
                                    }
                                }

                            break;}
                            case 3:{
                                consulta = Teclado.lerInteiro("\nDigite o número de identificação para consulta: ");
                                if(chupale.buscaId(consulta)){
                                    chupale.CarrinhoInform(consulta);
                                } else {
                                    System.out.println("\nNúmero de Identificação Inválido!");                                    
                                }
                            break;}
                            case 4:{
                                add = Teclado.lerInteiro("Digite o número de identificação de carrinho que você quer adicionar picolés: ");
                                if(chupale.buscaId(add)){
                                    Sabor = Teclado.lerString("Informe o sabor a ser adicionado no carrinho " + add + ": ");
                                    qntd = Teclado.lerInteiro("Informe a quantidade a ser adicionada: "); 
                                    chupale.adicionarSabor(add, Sabor, qntd);
                                    System.out.println("Sabor/Quantidade adicionado com sucesso!");
                                } else {
                                    System.out.println("\nNúmero de Identificação Inválido!\nNão é possível adicionar sabores ou quantidade!\n");
                                }                                 
                            break;}
                            case 0:{
                                System.out.println("\n");
                            break;}
                            default:System.out.println("\n\nOpção Inválida para o sistema!");
                        }
                    }while(op2!=0);
                break;}
                case 2:{
                    System.out.println("Qual Carrinho você quer informar a venda?"); 
                    venda = Teclado.lerInteiro("ID Carrinho: ");
                    if(chupale.buscaId(venda)){
                        Sabor = Teclado.lerString("Informe qual sabor: ");
                        if(chupale.buscaSabor(venda, Sabor)){
                            qntd = Teclado.lerInteiro("Informe a quantidade vendida: ");
                            chupale.vendaSabor(venda, Sabor, qntd);
                        } else {
                            System.out.println("Sabor não encontrado!\n");
                        }
                    } else {
                        System.out.println("Carrinho Inexistente!\n");
                    }
                break;}
                case 3:{
                    do{
                        op2 = Teclado.lerInteiro("==========================================\n"
                                + "[1]Carrinho\n[2]Geral\n[0]Menu Anterior\n"
                                + "==========================================\n");
                        switch(op2){
                            case 1:{
                                relatorio = Teclado.lerInteiro("Informe o número de identifacação do carrinho: ");
                                if(chupale.buscaId(relatorio)){
                                    chupale.relatorioCarrinho(relatorio);
                                } else {
                                    System.out.println("Carrinho Inexistente!");
                                }
                            break;}
                            case 2:{
                                chupale.relatorio();
                            break;}
                            case 0:{
                                System.out.println("\n");
                            break;}
                            default: System.err.println("Opção Inválida!\n");
                        }
                    }while(op2!=0);
                break;}
                case 0:{
                    System.out.println("\n\nSistema encerrado!\nSee Ya!");
                break;}
                default:System.out.println("\n\nOpção Inválida!");
            }
        }while(op!=0);
           
    }
}
