/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package vectorexercicios;

import java.util.Vector;
import util.Teclado;

/**
 *
 * @author Geral
 */
public class Vectorexercicios {

    public static void main(String[] args) {
       int op=0, i=0;
       Vector v = new Vector();
       String nome="";
        do{
            System.out.println("\n======================================================\n");
            System.out.println("[1]Adicionar String\n[2]Busca String\n[3]Busca Substring\n[4]Relatório de Caracteres\n[5]Maior String\n[6]Limpa Vector\n[7]Remove\n[0]Sair\n");
            System.out.println("\n======================================================\n");
            op = Teclado.lerInteiro("");
            switch(op){
                case 1:{
                    nome = Teclado.lerString("\nDigite a string a colocar: ");
                    v.add(nome);
                break;}
                case 2:{
                    nome = Teclado.lerString("\nDigite a string para busca: ");
                    if(v.contains(nome)){
                        System.out.println("\nString encontrada!\n");
                    } else {
                        System.out.println("\nString não encontrada!\n");
                    }
                break;}
                case 3:{
                    
                break;}
                case 4:{
                    for(i=0; i<v.size(); i++){
                        String S = v.get(i);
                        System.out.println("");
                    }
                break;}
                case 5:{
                    
                break;}
                case 6:{
                    if(v.size()>0){
                        v.clear();
                        System.out.println("\nVector Limpo!\n");
                    } else {
                        System.out.println("\nVector Vazio!\n");
                    }
                break;}                
                case 7:{
                    nome = Teclado.lerString("\nDigite o nome a remover: ");
                    if(v.remove(nome)){
                        System.out.println("\nNome encontrado e excluido com sucesso!");
                    } else {
                        System.out.println("\nNome não encontrado!");
                    }
                break;}
                case 0:{
                    System.out.println("\nSaída Efetuada! Vlw flw!");
                break;}
            }
            
        }while(op>0);
    }
    
}
