/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package heranca1;

import heranca2.I;

/**
 *
 * @author ThomasJefferson
 */
public class Heranca1 {
    
    public static void metodo(A a){ //chamada polimórfica de método... Late Binding ou Amarração Tardia
        a.xpto();
    }
    
    public static void main(String[] args) {
//    H h = new H();
//    A a = h;        
        
        A a = new H();
        //cast
        H h = (H)a;
        h.metodoDeH("");
        
        ((H) a).metodoDeH("");
        
        metodo(new B());
        metodo(new C());
        metodo(new I());
        
//        Vector v = new Vector();
//        v.add("Memórias de Hallef");
//        v.add(new H());
//        Iterator it = v.iterator();
//        while(it.hasNext()){
//            Object o = it.next();
//            if(o instanceof H){
//                H h = (H) o;               
//            }else if(o instanceof String){
//                String a = (String) o;
//            }
//        }
        
    }

   
    
}
