/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controle;

import negocio.Fabrica;

/**
 *
 * @author ThomasJefferson
 */
public class Controle {
    private static  Fabrica fabrica = new Fabrica();
    
    public static void criaCarrinho(){
        fabrica.criarUmCarrinho();
    }

    public static boolean selecionaCarrinho(int carrinho) {
        return fabrica.selecionaCarrinho(carrinho);
    }
    
    public static void abreVenda(){
        fabrica.getCarrinhoCorrente().abreVenda();
    }
    public static void fechaVenda(){
        fabrica.getCarrinhoCorrente().fechaVenda();
    }
    
    public static boolean addLinha(String sabor, int quantidade){
        return fabrica.getCarrinhoCorrente().addLinha(sabor, quantidade);
    }

    public static boolean adicionarSabor(String sabor) {
        return fabrica.addSabor(sabor);
    }

    public static boolean carregaCarrinhoCorrente(String sabor, double preco, int quantidade) {
        return fabrica.carregaSabor(sabor, preco, quantidade);
    }
}
