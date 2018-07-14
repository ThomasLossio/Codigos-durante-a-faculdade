/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Formulas;

/**
 *
 * @author ThomasJefferson
 */
public class Formulas {

    public static double CF(double campo){
        double resultado;
        return resultado=(9*campo+160)/5;
    }
    
    public static double CK(double campo){
        double resultado;
        return resultado=campo+273;
    }
    
    public static double FC(double campo){
        double resultado;
        return resultado=(campo*5-160)/9;
    }
    
    public static double FK(double campo){
        double resultado;
        return resultado=(campo*5+2297)/9;
    }
    
    public static double KC(double campo){
        double resultado;
        return resultado=campo-273;
    }
    
    public static double KF(double campo){
        double resultado;
        return resultado=(campo*9-2297)/5;
    }

}
