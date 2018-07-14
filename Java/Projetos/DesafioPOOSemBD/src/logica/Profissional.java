/*
"Médico: Nome, CPF, CRM, Especialidade, Data nascimento,
Sexo, Telefone1, Telefone 2.
Outros: Nome, CPF, Data nascimento, cargo, Sexo, estado civil,
Telefone 1, Telefone 2."	
 */
package logica;

import java.util.Date;

/**
 *
 * @author ThomasJefferson
 */
public class Profissional implements Pessoas {
    private int ID;
    private String Nome;
    private String CPF;
    private static Date DtNasc;
    private String Sexo;
    private String EstCv;
    private String Tel1;
    private String Tel2;

    @Override
    public int getID() {
        return ID;
    }

    @Override
    public String getNome() {
        return Nome;
    }

    @Override
    public Date getDtNasc() {
        return DtNasc;
    }

    @Override
    public String getSexo() {
        return Sexo;
    }

    @Override
    public String getEstCv() {
        return EstCv;
    }

    @Override
    public String getTel1() {
        return Tel1;
    }

    @Override
    public String getTel2() {
        return Tel2;
    }

    @Override
    public String getCPF() {
        return CPF;
    }

    @Override
    public void setNome(String Nome) {
        this.Nome = Nome;
    }

    @Override
    public void setID(int ID) {
        this.ID = ID;
    }

    @Override
    public void setDtNasc(Date DtNasc) {
        this.DtNasc = DtNasc;
    }

    @Override
    public void setSexo(String Sexo) {
        this.Sexo = Sexo;
    }

    @Override
    public void setEstCv(String EstCv) {
        this.EstCv = EstCv;
    }

    @Override
    public void setTel1(String Tel1) {
        this.Tel1 = Tel1;
    }

    @Override
    public void setTel2(String Tel2) {
        this.Tel2 = Tel2;
    }

    @Override
    public void setCPF(String CPF) {
        this.CPF = CPF;
    }
}
