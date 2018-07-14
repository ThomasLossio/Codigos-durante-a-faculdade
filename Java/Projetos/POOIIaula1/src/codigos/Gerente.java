/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codigos;

import Excecoes.GratificacaoInvalidaException;

/**
 *
 * @author ThomasJefferson
 */
public class Gerente extends Empregado  {
    private double gratificacao;


    public double getGratificacao() {
        return gratificacao;
    }

    public void setGratificacao(double gratificacao) throws GratificacaoInvalidaException {
        if(gratificacao <= 0 || gratificacao > this.salario){
            throw new GratificacaoInvalidaException();
        } else {
            this.gratificacao = gratificacao;
        }
    }
    
    
    @Override
    public double getValor(){
        return getSalario() + getGratificacao();
    }
}
