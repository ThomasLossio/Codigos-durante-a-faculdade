/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jogo;

import jplay.Keyboard;
import jplay.Scene;
import jplay.URL;
import jplay.Window;

/**
 *
 * @author ThomasJefferson
 */
public class Cenario1 {
    
    private Window janela;
    private Scene cena;
    private Jogador jogador;
    private Keyboard teclado;
    private Zumbi zumbi;
    
    public Cenario1(Window janela){
        this.janela = janela;
        cena = new Scene();
        cena.loadFromFile(URL.scenario("Cenario1.scn"));
        jogador = new Jogador(640, 350);
        teclado = janela.getKeyboard();
        zumbi = new Zumbi(300, 300);
        Som.play("Dracula.mid");
//        Som.play("teste.wav");
        run();
    }

    private void run() {
        while(true){
            //cena.draw();
            jogador.mover(janela, teclado);
            jogador.caminho(cena);
            //move o cenario de um modo que centraliza o jogador....
            
            
            
            zumbi.caminho(cena);
            zumbi.perseguir(jogador.x, jogador.y);
            cena.moveScene(jogador);
            jogador.x += cena.getXOffset();
            jogador.y += cena.getYOffset();

            zumbi.x += cena.getXOffset();
            zumbi.y += cena.getYOffset();
            
            
            jogador.draw();
            zumbi.draw();
//            jogador.mover();
            janela.update();
            
        }
    }
    
}
