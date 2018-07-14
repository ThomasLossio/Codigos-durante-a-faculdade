/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import java.util.Random;
import jplay.Scene;
import jplay.Sprite;
import jplay.URL;

/**
 *
 * @author hallef-PC
 */
public class inimigo_comum extends Sprite{
    private double velocidade = 1;
    private int direcao = 3;
    
    public int gerarPosY(){
        Random gerador = new Random();
        int valor = gerador.nextInt(400)+50;
        return valor;
    }
    
    public inimigo_comum() {
        super(URL.sprite("alienInimigo.png"),2);
        this.x = 900; 
        this.y = gerarPosY();
//        this.setTotalDuration(2000);
    }
    
    public boolean mover(){
        if(this.x <= 50){
            return false;
        }else{
            this.x -= velocidade;
//            setSequence(0, 2);
//            update();
            return true;
        }
    }
    
    public void atacar(Jogador jogador, Scene cena, ControleInimigo control){
        for(int i = 0; i < ControleInimigo.inimigos.size(); i++){
            if(ControleInimigo.inimigos.get(i).collided(jogador)){
                if(jogador.getVida()==3){
                    jogador.setVida(jogador.getVida()-1);
//                    System.exit(0);
                } else {
                    jogador.setVida(jogador.getVida()-1);
                }
                control.removeInimigo(cena, i);
            }
        }
    }
    
}

