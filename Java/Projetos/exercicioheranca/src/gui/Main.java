/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gui;

import java.util.ArrayList;
import util.Teclado;

/**
 *
 * @author ThomasJefferson
 */
public class Main {
    public static void main(String[] args) {
        int op = 0;
        ArrayList parametros = new ArrayList();
        
        do{
           op = Teclado.lerInteiro("===================================\n"
                    + "[1]Cadastrar\n[2]Pesquisar\n[3]Alugar\n[4]Devolução\n[5]Editar\n[0]Sair\n"
                    + "===================================");
            switch(op){
                case 1:{ //Cadastro De Livro/DVD/Jornal/Revista
                    op = Teclado.lerInteiro("[1]Livro/n[2]DVD/n[3]Jornal/n[4]Revista\n[0]Menu Principal");
                    switch(op){
                        case 1:{ //Livro
                            String nome = Teclado.lerString("Título do Livro: ");
                            int qntd = Teclado.lerInteiro("Quantidade do Livro: ");
                            String autor = Teclado.lerString("Autor do Livro: ");
                            String genero = Teclado.lerString("Gênero do Livro: ");
                        
                            parametros.add(nome);
                            parametros.add(qntd);
                            parametros.add(autor);
                            parametros.add(genero);
                            
                            controle.Gerencia.addEstoque(op, parametros);
                            
                            parametros.clear();
                        break;}
                        case 2:{ //DVD
                            String nome = Teclado.lerString("Título do Livro: ");
                            int qntd = Teclado.lerInteiro("Quantidade do Livro: ");
                            String autor = Teclado.lerString("Autor do Livro: ");
                            String genero = Teclado.lerString("Gênero do Livro: ");
                        
                            parametros.add(nome);
                            parametros.add(qntd);
                            parametros.add(autor);
                            parametros.add(genero);
                            
                            controle.Gerencia.addEstoque(op, parametros);
                            
                            parametros.clear();                            
                        break;}
                        case 3:{ //Jornal
                            
                        break;}
                        case 4:{ //Revista
                            
                        break;}
                        case 0:{
                            
                        break;}
                    }
                break;}
                case 2:{ //Buscar
                    
                break;}
                case 3:{ //Alugar Livro/DVD/Jornal/Revista
                    
                break;}
                case 4:{ //Não foi pedido, mas seria bom tentar fazer
                    
                break;}
                case 5:{ //Não foi pedido, mas seria bom tentar fazer
                    
                break;}
                case 0:{ //Só sair mesmo kkkkk
                    break;
                }
                default: System.out.println("\nOpção Inválida!\n");
            }
        }while(op>0);
    }
}
