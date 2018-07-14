/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package logica;

import java.util.ArrayList;
import java.util.Random;

/**
 *
 * @author ThomasJefferson
 */
public class Logica {
    private final static Random rd = new Random();
    private static ArrayList<Integer> listaOrdenada = new ArrayList<>();
 
    
    public static int geraNumero(){
        int num = rd.nextInt(60) + 1;
        return num;
    }
    
    public static boolean confereRepetido(ArrayList lista, int num){
        for(int j=0; j<lista.size(); j++){
            if(lista.get(j).equals(num)){
                return true;
            }
        }
        return false;
    }
    
    public static boolean isOrdenado(ArrayList<Integer> lista){
        for(int i = 0; i<lista.size(); i++){
            if(lista.get(i) > lista.get(i+1)){
                return false;
            }
        }
        return true;
    }
    
    public static ArrayList ordena(ArrayList<Integer> lista){
        int[] aux2 = new int[lista.size()];
        int menor, aux, i;
        boolean continua;
        for(i=0; i<lista.size(); i++){
            aux2[i] = lista.get(i);
        }
        for (i=0; i < lista.size()-1; i++){
            menor = i;
            continua = false;
            

            for(int j = i + 1; j < lista.size(); j++){
                if(aux2[menor] > aux2[j]){
                    menor = j;
                }
                if(aux2[j] < aux2[j-1] && continua == false){
                    continua = true;
                }
            }
            if(!continua){
                
                break;
            }

            if(menor != i){
                aux = aux2[i];
                aux2[i] = aux2[menor];
                aux2[menor] = aux;
            }
        }
        for(i = 0; i<lista.size(); i++){
            listaOrdenada.add(aux2[i]);
        }
        return listaOrdenada;
    }
    
}
