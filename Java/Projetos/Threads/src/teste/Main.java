package teste;

import javax.swing.JOptionPane;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ThomasJefferson
 */
public class Main {
    public static void main(String[] args) {
        MinhaThread m1 = new MinhaThread("A");
        MinhaThread m2 = new MinhaThread("B");
        MinhaThread m3 = new MinhaThread("C");
        MinhaThread m4 = new MinhaThread("D");
        MinhaThread m5 = new MinhaThread("E");
        MinhaThread m6 = new MinhaThread("F");
        m1.start();
        m2.start();
        m3.start();
        m4.start();
        m5.start();
        m6.start();
    }
}
