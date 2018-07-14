/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import java.util.LinkedList;
import java.util.Random;
import jplay.Scene;

/**
 *
 * @author hallef-PC
 */
public class ControleInimigo {

    public static LinkedList<inimigo_comum> inimigos = new LinkedList<>(); //tive que colocar como publico para ter acesso lá em controletiro
    public static inimigo_comum ini;
    private int dificuldade = 500;
    int cont = 0;

    public void addInimigo(Scene cena) {
        ini = new inimigo_comum();
        inimigos.addFirst(ini);
        cena.addOverlay(ini);
    }

    //remove da tela e remove do linkedlist
    public void removeInimigo(Scene cena, int numero) {
        cena.removeOverlay(inimigos.get(numero));
        inimigos.remove(inimigos.get(numero));        
        

    }

    public void inimigo(Scene cena) {
        Random rd = new Random();
        int num = rd.nextInt(100); //isso aqui vai servir para aumentar dificuldade (quanto menor, mais veloz para aparecerem
        if (num == 1){
            addInimigo(cena);
        }
//        if (cont < dificuldade) {
//            cont++;
//        } else {
//            addInimigo(cena);
//            cont = 0;
//        }
        run(cena);
    }
    
    public void run(Scene cena){
        int j= 0;
        for(int i = 0; i < inimigos.size(); i++){
            if(!inimigos.get(i).mover()){ //coloquei para quando o mover for false, ele remova o inimigo
                removeInimigo(cena, i);

                
            }
            
//            if(!inimigos.get(j).mover()){
//                inimigo_comum ini_aux = inimigos.get(j);
//                if(inimigos.remove(ini_aux)){
//                    j++;
//                }
//            }
        }
        
    }

}
