/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package logica;

import java.util.Date;

/**
 *
 * @author ThomasJefferson
 */
public interface Pessoas {
    public int getID();
    
    public String getNome();
    
    public Date getDtNasc();
    
    public String getSexo();
    
    public String getEstCv();
    
    public String getTel1();

    public String getTel2();
    
    public String getCPF();
    
    public void setNome(String Nome);
    
    public void setID(int ID);    
    
    public void setDtNasc(Date DtNasc);
    
    public void setSexo(String Sexo);    
    
    public void setEstCv(String EstCv);
    
    public void setTel1(String Tel1);    

    public void setTel2(String Tel2);
    
    public void setCPF(String CPF);    
}
