/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exemplothreadsestudo;

/**
 *
 * @author NOTEBOOKTJ
 */
public class ExemploThreadsEstudo {

    private static String lastname = "Reis";
    private String name = "Uedson";
    
    public static void main(String[] args) {
        
        Thread t1 = new Thread(){
            public void run() {
                ExemploThreadsEstudo app = new ExemploThreadsEstudo();
                addName(app.name);
            }
        };
        Thread t2 = new Thread(){
            public void run() {
                ExemploThreadsEstudo app = new ExemploThreadsEstudo();
                app.name = "Lilian";
                addName(app.name);
            }
        };
        t1.start();
        t2.start();
        
        
    }

     public static void addName (String addName){
        final String old = lastname;
        lastname = addName;
        for (int i = 0; i < 100; i++){
            System.out.println("" + i);
        }
        System.out.println(lastname + " " + old);
        lastname = old;
    }
    
}
