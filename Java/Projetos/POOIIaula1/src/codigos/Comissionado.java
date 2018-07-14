/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codigos;

import Excecoes.PercentualInvalidoException;

/**
 *
 * @author ThomasJefferson
 */
public class Comissionado extends Empregado {
    private double percentual;

    public double getPercentual() {
        return percentual;
    }

    public void setPercentual(double percentual) throws PercentualInvalidoException{
        if(percentual > 0 && percentual <= 100){
            this.percentual = percentual;
        } else {
            throw new PercentualInvalidoException();
        }
    }
    

    @Override
    public double getValor(){
        return getSalario() * getPercentual() / 100 + getSalario();
    }    
}
