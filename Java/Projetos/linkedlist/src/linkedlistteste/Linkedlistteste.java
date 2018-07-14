/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package linkedlistteste;

/**
 *
 * @author ThomasJefferson
 */
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Random;

public class Linkedlistteste {

    public static void main(String[] args) {
        for(int i = 0; i < 10; i++){
            Random r = new Random();
            System.out.println(r.nextInt(10) + " ");
        }
        
        LinkedList<String> lista = new LinkedList<>();
        for (int i = 0; i < 10; i++){
            lista.add("elemento" + i);
        }
        lista.remove(0);
        if(lista.contains("elemento0")){
            
        }
        Iterator<String> it = lista.iterator();
        
        while(it.hasNext()){
            String string = it.next();
        }
        for(String string : lista){
            System.out.println(string);
        }
        for(int i = 0; i < lista.size(); i++){
            String string = lista.get(i);
            if(string.contains("abc")){
                System.out.println("é substring");
            }
            if(string.startsWith("abc")){
                
            }
            if(string.endsWith("abc")){
                
            }
        }
    }
    
}
