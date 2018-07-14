/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Threads;

import gui.Inicio;
import gui.MenuPrincipal;
import static java.lang.Thread.sleep;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JProgressBar;

/**
 *
 * @author ThomasJefferson
 */
public class BarraDeProgresso implements Runnable{
    private final JProgressBar bar;
    private final JLabel lab;
    private final Inicio inicio;
    private final Thread t1;
    private final VerificaBanco banco;

    public BarraDeProgresso(JProgressBar bar, JLabel lab, Inicio inicio, Thread t1, VerificaBanco banco) {
        this.bar = bar;
        this.lab = lab;
        this.inicio = inicio;
        this.t1 = t1;
        this.banco = banco;
    }
    
    @Override
    public void run(){
        for(int i = 0; i < 101; i++){
            try{
                if(t1.isAlive() || banco.Ok()){
                    sleep(100);
                    bar.setValue(i);
                    if(i <= 25){
                        lab.setText("Carregando Sistema...");
                    } else if (i <= 50){
                        lab.setText("Verificando Banco de Dados...");
                    } else if (i <= 75){
                        lab.setText("Criando Tabelas...");
                    } else {
                        lab.setText("Preparando inicialização...");
                    }
                } else {
                    i = 100;
                    bar.setValue(i);
                    lab.setText("Erro em Inicialização...");
                    Thread.sleep(1000);
                }
            } catch (InterruptedException ex){
                JOptionPane.showMessageDialog(null, "Contate o Administrador!", "Erro desconhecido!", JOptionPane.ERROR_MESSAGE, null);
                break;
            }
        }
        while(true){
            if(bar.getValue() == 100 && !t1.isAlive()){
                if(banco.Ok()){
                    inicio.dispose();
                    MenuPrincipal m = new MenuPrincipal();
                    m.setVisible(true);
                    break;
                } else {
                    inicio.dispose();
                    break;
                }

            }
        }        
    };    
}
