/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package padroesdeprojeto;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 *
 * @author ThomasJefferson
 */
public class IteratorTeste {
    public static void main(String[] args) {
        List<String> nomes = new ArrayList<String>();
        nomes.add("Naara");
        nomes.add("Charles");
        nomes.add("Thiago");
        
        Iterator it = nomes.iterator();
        while(it.hasNext()){
            System.out.println(it.next());
        }
    }
}
