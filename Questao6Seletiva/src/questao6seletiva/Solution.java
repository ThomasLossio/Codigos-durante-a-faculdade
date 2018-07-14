/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package questao6seletiva;

import java.util.Scanner;

/**
 *
 * @author NOTEBOOKTJ
 */
public class Solution {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        String time, ampm, temp;
        //9-10
        Scanner sc = new Scanner(System.in);
        time = sc.next();
        ampm = time.substring(8, 10);
        
        time = time.replace(ampm, "");
        temp = time.substring(0, 2);
        if(ampm.equals("PM")) {
            if(temp.equals("01")){
                time = time.replace(temp, "13");
            } else if (temp.equals("02")){
                time = time.replace(temp, "14");
            } else if (temp.equals("03")){
                time = time.replace(temp, "15");
            } else if (temp.equals("04")){
                time = time.replace(temp, "16");
            } else if (temp.equals("05")){
                time = time.replace(temp, "17");
            } else if (temp.equals("06")){
                time = time.replace(temp, "18");
            } else if (temp.equals("07")){
                time = time.replace(temp, "19");
            } else if (temp.equals("08")){
                time = time.replace(temp, "20");
            } else if (temp.equals("09")){
                time = time.replace(temp, "21");
            } else if (temp.equals("10")){
                time = time.replace(temp, "22");
            } else if (temp.equals("11")){
                time = time.replace(temp, "23");
            }
        } else {
            if (temp.equals("12")){
                time = time.replace(temp, "00");
            }
        }
        
        System.out.println(time);







//        int T, i;
//        Scanner sc = new Scanner(System.in);
//        T = sc.nextInt();
//        Integer[] N = new Integer[T];
//        for(i = 0; i < T; i++){
//            N[i] = sc.nextInt();
//        }
//        int total = 0;
//        for(i = 0; i < T; i++){
//
//            N[i] = N[i]*2 - 1;
//
//            System.out.println(N[i]);
//        }
    }
    
}
