/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

/**
 *
 * @author hallef-PC
 */
import java.util.ArrayList;
import java.util.Iterator;
import jplay.GameImage;
import jplay.Keyboard;
import jplay.Window;
import jplay.URL;

public class jogo {


    public static boolean teste = false;
    
    public static void main(String[] args) {
        Window janela = new Window(800, 600);
//        janela.setFullScreen();
//        janela.getPreferredSize();
        GameImage plano = new GameImage(URL.sprite("Menu_principal.png"));
        Keyboard teclado = janela.getKeyboard();
        Ranking rank = new Ranking();
        ArrayList<Ranking> lista = new ArrayList();
        while(true){
            plano.draw();
            janela.update();
            if (teste){
                break;
            }
            if(teclado.keyDown(Keyboard.ENTER_KEY)){
                new Cenario(janela);
            } else if(teclado.keyDown(Keyboard.A_KEY)){
                lista = rank.listaRank();
                for(int i = 0; i < lista.size() && i < 10; i++){
                    System.out.println(lista.get(i).getPos() + "- " + lista.get(i).getNome() + " " + lista.get(i).getPontos());
                } 
            }
        }
        
    }
    
}
