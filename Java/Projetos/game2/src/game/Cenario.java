/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import jplay.GameImage;
import jplay.Keyboard;
import jplay.Scene;
import jplay.URL;
import jplay.Window;

public class Cenario {
    private Window janela;
    private Scene cena;
    private Jogador jogador;
    private inimigo_comum alien;
    private ControleInimigo control;
    private Keyboard teclado;
    public boolean stop = false;
    public boolean continua = false;
    private GameImage img;
    private Ranking rank;
    
    public Cenario(Window window){
        janela = window;
        cena = new Scene();
        cena.loadFromFile(URL.scenario("cenario.scn"));
        jogador = new Jogador(300,300);
        alien = new inimigo_comum();
        teclado = janela.getKeyboard();
        control = new ControleInimigo();
        rank = new Ranking();
        som.play("trilha.wav");
        run();
    }
    
    private void run(){
        while(true){
            cena.draw();
            jogador.draw();
            jogador.mover(janela);
            jogador.vida(janela, cena, this);
            alien.draw();
            control.inimigo(cena);
            jogador.atirar(janela, cena, teclado, alien, control, jogador);
            janela.update();
            alien.atacar(jogador, cena, control);
            if (stop){
//                continua = true;
//                while(continua){
                    
                    img =   new GameImage(URL.sprite("gameovertemp.png"));
                    
                    
                    cena.draw();
                    
                    som.stop();                    
                    
//                }
                if(rank.CadastraPontos("Thomas", jogador.getPontos())){
                    System.out.println("ok");
                } else {
                    System.out.println("não");
                }

//                jogo.teste = true;
                break;
            }
            
        }
        
    }
}
