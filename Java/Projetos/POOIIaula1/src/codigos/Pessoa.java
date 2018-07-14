/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codigos;

import Excecoes.CPFInvalidoException;
import Excecoes.NomeInvalidoException;

/**
 *
 * @author ThomasJefferson
 */
public class Pessoa {
    private int id;
    private String nome;
    private String cpf;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) throws NomeInvalidoException {
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

    
    public String getCpf() {
        return cpf;
    }
    
    public static boolean verificaCPF(String cpf){
        if(cpf.equals("000.000.000-00") || cpf.equals("111.111.111-11") || cpf.equals("222.222.222-22") || cpf.equals("333.333.333-33") || cpf.equals("444.444.444-44") || cpf.equals("555.555.555-55") || cpf.equals("666.666.666-66") || cpf.equals("777.777.777-77") || cpf.equals("888.888.888-88") || cpf.equals("999.999.999-99")){
            return false;
        }
        int digito1 = cpf.charAt(12) - 48, digito2 = cpf.charAt(13) - 48, mult = 10, total=0;
        for(int i = 0; i < cpf.length()-2; i++){//Primeiro digito
            if(!(i==3 || i==7 || i==11)){
                total += (cpf.charAt(i) - 48) * mult;
                mult--;   
            }
        }
        int resto = total % 11;
        int d1;
        if(resto < 2){
            d1 = 0;
        }else {
            d1 = 11 - resto;
        }
        mult = 11;
        total = 0;
        resto = 0;
        for(int i = 0; i < cpf.length()-1; i++){//Segundo digito
            if(!(i==3 || i==7 || i==11)){
                total += (cpf.charAt(i) - 48) * mult;
                mult--;  
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

    public void setCpf(String cpf) throws CPFInvalidoException{
        if(verificaCPF(cpf)){
            this.cpf = cpf;            
        } else {
            throw new CPFInvalidoException();
        }
    }
}
