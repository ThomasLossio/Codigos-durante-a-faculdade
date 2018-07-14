/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package functionhash;

import java.util.HashMap;

/**
 *
 * @author ThomasJefferson
 */
public class Functionhash {
    public static void main(String[] args) {
        HashMap<String, String> mapa = new HashMap<>();
        mapa.put("01", "01"); //adicionar
        if(mapa.containsKey("01")){ //busca
            String elemento = mapa.get("01");
            System.out.println("Achou!");
        }
        mapa.remove("01"); // remover
        mapa.keySet().iterator(); //iterar chaves
        mapa.values().iterator(); //iterar valores
        
    }
    
}
