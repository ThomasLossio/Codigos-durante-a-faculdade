/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jogo;

import javax.swing.JOptionPane;
import jplay.GameImage;
import jplay.Keyboard;
import jplay.URL;
import jplay.Window;

/**
 *
 * @author ThomasJefferson
 */
public class Main {
    public static void main(String[] args) {
        
        Window janela = new Window(800, 600);
        GameImage plano = new GameImage(URL.sprite("Tela01.png"));
        
        Keyboard teclado = janela.getKeyboard();
        
//        Som.play("teste.wav");
        while(true){
            plano.draw();
            janela.update();
            if(teclado.keyDown(Keyboard.ENTER_KEY)){
                new Cenario1(janela);
            }
        }
    }
}
