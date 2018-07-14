/*
    (Nome, Data de Nascimento, Estado civil, Telefone 1, Telefone 2,
    CPF, RG, Endereço(tipo_logradouro,nome_logradouro, municipio,
    uf, bairro, numero, cep))
 */
package logica;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author ThomasJefferson
 */
public class Paciente implements Pessoas {
    private int ID;
    private String Nome;
    private static Date DtNasc;
    private String Sexo;
    private String EstCv;
    private String Tel1;
    private String Tel2;
    private String CPF;
    private String RG;
    private String TipoLogradouro;
    private String NomeLogradouro;
    private String Municipio;
    private String UF;
    private String Bairro;
    private int Numero;
    private String CEP;


    
    public static void main(String[] args){ //Testes com a variável Date
        String x = "31/12/1995";  
        SimpleDateFormat sdf1= new SimpleDateFormat("dd/MM/yyyy");
        try {
            DtNasc = sdf1.parse(x);
            System.out.println(sdf1.format(DtNasc));
            GregorianCalendar gc=new GregorianCalendar(); //Pegar informações do calendário
            System.out.println(gc.get(gc.DAY_OF_WEEK)); //Pegar dia da semana por exemplo
            System.out.println(gc.get(gc.DAY_OF_YEAR)); //Pegar dia do ano por exemplo
            System.out.println(gc.get(gc.HOUR)); //Pegar horas por exemplo
            System.out.println(gc.get(gc.MINUTE)); //Pegar minutos por exemplo
            System.out.println(gc.get(gc.SECOND)); //Pegar dia do ano por exemplo

            
        } catch (ParseException ex) {
            Logger.getLogger(Paciente.class.getName()).log(Level.SEVERE, null, ex);
        }


        DtNasc = new Date();
        System.out.println(sdf1.format(DtNasc));
    }

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
