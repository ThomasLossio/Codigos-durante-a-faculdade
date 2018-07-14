/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codigos;

import Excecoes.CPFInvalidoException;
import Excecoes.ContratoInvalidoException;
import Excecoes.NomeInvalidoException;

/**
 *
 * @author ThomasJefferson
 */
public class Fornecedor implements Contabilidade{
    private int id;
    private String cnpj;
    private double valorContrato;
    private String nome;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }
    

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) throws NomeInvalidoException{
        String permitidos = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZzÇç ÁáÂâÃãÀàÉéÈèÊêÍíÌìÎîÓóÒòÔôÕõÚúÙùÛû";
        if(nome.length()<50){
            for(int i = 0; i < nome.length(); i++){
                if(!permitidos.contains(nome.charAt(i)+"")){
                    throw new NomeInvalidoException();
                }
            }
            this.nome = nome;
        } else {
            throw new NomeInvalidoException();
        }
    }
    
    
    public String getCnpj() {
        return cnpj;
    }

    public static boolean verificaCNPJ(String cnpj){
        if(cnpj.equals("00.000.000/0000-00")){
            return false;
        }
        int digito1 = cnpj.charAt(16) - 48, digito2 = cnpj.charAt(17) - 48, mult = 5, total=0;
        int i= 0;
        while(i < cnpj.length()-2){//Primeiro digito      
                while(i>=0 && i<=4){
                    if(i==2){
                        i++;
                    } else {
                        total += (cnpj.charAt(i) - 48) * mult;
                        mult--;
                        i++;
                    }
                }
                mult=9;
                while(i>4 && i<16){
                    if(i==6 || i==10 || i==15){
                        i++;
                    } else {
                        total += (cnpj.charAt(i)-48) * mult;
                        mult--;
                        i++;
                    }
                }
        }
        int resto = total % 11;
        int d1;
        if(resto < 2){
            d1 = 0;
        }else {
            d1 = 11 - resto;
        }
        mult = 6;
        total = 0;
        resto = 0;
        i = 0;
        while(i < cnpj.length()-1){//Segundo digito  
            while(i>=0 && i<=5){
                if(i==2){
                    i++;
                } else {
                    total += (cnpj.charAt(i) - 48) * mult;
                    mult--;
                    i++;
                }
            }
            mult=9;
            while(i>5 && i<17){
                if(i==6 || i==10 || i==15){
                    i++;
                } else {
                    total += (cnpj.charAt(i)-48) * mult;
                    mult--;
                    i++;
                }
            }
        } 
        resto = total % 11;
        int d2;
        if(resto < 2){
            d2 = 0;
        } else {
            d2 = 11 - resto;
        }
        if(d1 == digito1 && d2 == digito2){
            return true;
        } else {
            return false;
        }
        
    }
    
    public void setCnpj(String cnpj) throws CPFInvalidoException{
        if(verificaCNPJ(cnpj)){
            this.cnpj = cnpj;
        } else {
            throw new CPFInvalidoException();
        }
    }
    

    public double getValorContrato() {
        return valorContrato;
    }

    public void setValorContrato(double valorContrato) throws ContratoInvalidoException {
        if(valorContrato > 0){
            this.valorContrato = valorContrato;
        } else {
            throw new ContratoInvalidoException();
        }

    }

    @Override
    public double getValor() {
        return getValorContrato();
    }
    
    
}
