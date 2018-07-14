/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



package carrinhopicole;

import java.util.HashMap;

/**
 *
 * @author Marcos
 */
public class CarrinhoPicole {
    private HashMap<String, Integer> sabores = new HashMap<String, Integer>();
    
    public void decrementar(String sabor){
        Integer n = sabores.get(sabor);
        if(n == null){
            sabores.put(sabor, 0);
        }else{
            sabores.put(sabor, n - 1);
        }
    }
    public void incrementar(String sabor){
        Integer n = sabores.get(sabor);
        if(n == null){
            sabores.put(sabor, 1);
        }else{
            sabores.put(sabor, n + 1);
        }
    }
    public int consultar(String sabor){
        if(sabores.containsKey(sabor)){
            return sabores.get(sabor);
        }
        return 0;
    }
    
}
