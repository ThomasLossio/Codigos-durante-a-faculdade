/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import java.awt.Color;
import java.awt.Font;
import jplay.Keyboard;
import jplay.Scene;
import jplay.Sprite;
import jplay.URL;
import jplay.Window;


public class Jogador extends Sprite{

    private double velocidade = 1;
    private int direcao = 3;
    private Keyboard teclado;
    private boolean movendo = false;
    private int cont = 0;
    private int vida = 3;
    private int pontos = 0;
    Font f = new Font("arial", Font.BOLD, 20);

    public int getPontos() {
        return pontos;
    }

    public void setPontos(int pontos) {
        this.pontos += pontos;
    }
    
    public int getVida() {
        return vida;
    }

    public void setVida(int vida) {
        this.vida = vida;
    }
    
    
    public Jogador(int x, int y) {
        super(URL.sprite("navedon.png"),2);
        this.x = 15;
        this.y = y;
        this.setTotalDuration(2000);
        
    }
    
    ControleTiro tiros =  new ControleTiro();
    public void atirar(Window janela, Scene cena, Keyboard teclado, Sprite alien, ControleInimigo control, Jogador jogador){ //aqui precise acrescentar o alien e o inimigo para ir passando até chegar em controle de tiro para pode retirar tiro e inimigo da tela ^^
        if(teclado.keyDown(Keyboard.SPACE_KEY)){
            tiros.addTiro(x, y + 20, height, cena);
        
        }
        tiros.run(alien, cena, control, jogador); //aqui também kkk
    }
    
    public void mover(Window janela){
        if(teclado == null){
            teclado = janela.getKeyboard();
        }
        
        if(teclado.keyDown(Keyboard.UP_KEY)){
            if(this.y > 80){
                   this.y -= velocidade;
               }
            setSequence(0, 2);
            movendo = true;
            }
        else if(teclado.keyDown(Keyboard.DOWN_KEY)){
            if(this.y < janela.getHeight()-160){
               this.y += velocidade;
           }
            setSequence(0, 2);
            movendo = true;
        }
        else if(teclado.keyDown(Keyboard.LEFT_KEY)){
            if(this.x > 15){
                this.x -= velocidade;
            }
            setSequence(0, 2);
            movendo = true;
        
        }
        else if(teclado.keyDown(Keyboard.RIGHT_KEY)){
            if(this.x < (janela.getWidth()/2)-80){
                this.x += velocidade;
            }
            setSequence(0, 2);
            movendo = true;
        }
        
        if(cont < 50){
            cont++;
        }else{
            update();
            cont = 0;
        }
    }

    
    public void vida(Window janela, Scene cena, Cenario cenario){
        if(this.vida == 3){
        ImagensAleatorias c = new ImagensAleatorias(300, 30, "navedon.png");
        ImagensAleatorias c2 = new ImagensAleatorias(400, 30, "navedon.png");
        ImagensAleatorias c3 = new ImagensAleatorias(500, 30, "navedon.png");
        
        c.draw();
        c2.draw();
        c3.draw();
            
        } else if (this.vida == 2){
            ImagensAleatorias c = new ImagensAleatorias(300, 30, "navedon.png");
            ImagensAleatorias c2 = new ImagensAleatorias(400, 30, "navedon.png"); 
            c.draw();
            c2.draw();
        } else if (this.vida == 1){
            ImagensAleatorias c = new ImagensAleatorias(300, 30, "navedon.png");
            c.draw();
        } else {
                cenario.stop = true;
        }
        
//        cena.draw();
        janela.drawText("Vida: " + this.vida, 30, 30, Color.WHITE, f);
        janela.drawText("Pontos: " + this.pontos, 150, 30, Color.WHITE, f);
        
    }

    
    
}
