/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codigos;

import Excecoes.SalarioInvalidoException;

/**
 *
 * @author ThomasJefferson
 */
public class Empregado extends Pessoa implements Contabilidade {
    protected double salario;

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) throws SalarioInvalidoException {
        if(salario >= 788){
            this.salario = salario;
        } else {
            throw new SalarioInvalidoException();
        }        

    }
    

    @Override
    public double getValor() {
        return getSalario();
    }
    
}
