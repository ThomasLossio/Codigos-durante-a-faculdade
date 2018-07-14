/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import java.util.LinkedList;
import jplay.Scene;
import jplay.Sound;
import jplay.Sprite;
import jplay.URL;

/**
 *
 * @author hallef-PC
 */
public class ControleTiro {
    LinkedList<Tiro>tiros = new LinkedList<>();
    
    public void addTiro(double x, double y, int caminho, Scene cena){
        Tiro tiro = new Tiro(x,y,caminho);
        tiros.addFirst(tiro);
        cena.addOverlay(tiro);
        somDisparo();
    }
    
    //remove da tela e do linkedlist o tiro equivalente a numero
    public void removeTiro(Scene cena, int numero){
        cena.removeOverlay(tiros.get(numero));
        tiros.remove(tiros.get(numero));
    }
    
    public void run(Sprite inimigo, Scene cena, ControleInimigo control, Jogador jogador){
        for(int i = 0; i < tiros.size(); i++){
            Tiro tiro = tiros.removeFirst();
            tiro.mover();
            tiros.addLast(tiro);
            if(tiros.get(i).x > 10000){ //como o método de colisão só funcionou quando eu colocava o eixo x do tiro igual a 10000, faço essa verificação para retirar os tiros que estão com o eixo x maior
                removeTiro(cena, i); //dai passo a cena e o número do tiro que devo retirar
            }
            for(int j = 0 ; j < ControleInimigo.inimigos.size() ; j++){ //esse for verifica toda a lista de inimigos
                if(tiro.collided(ControleInimigo.inimigos.get(j))){ //a cada inimigo, ele verifica se o tiro colidiu com determinado inimigo
                    tiro.x += 10000; //se colidir, ele joga a imagem do tiro para fora da tela
//                    removeTiro(cena, i);
                    control.removeInimigo(cena, j); //no mesmo momento que jogo o tiro para fora da tela, removo o inimigo que recebeu a colisão atraves do metodo que está em controleinimigo, por conta do objeto que passei por parametro. seria a unica forma de conseguir acessar a lista dos inimigos
                    jogador.setPontos(10);
                }
            }
        }
        
    }
    
    private void somDisparo(){
        new Sound(URL.audio("Laser2.wav")).play();
    }
}
