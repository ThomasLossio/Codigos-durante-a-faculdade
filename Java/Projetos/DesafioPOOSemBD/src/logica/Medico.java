/*
CRM, Especialidade,
 */
package logica;

/**
 *
 * @author ThomasJefferson
 */
public class Medico extends Profissional{
    private String CRM;
    private String Especialidade;
    
    public String getCRM(){
        return CRM;
    }

    public String getEspecialidade(){
        return Especialidade;
    }
    
    public void setCRM(String CRM){
        this.CRM = CRM;
    }

    public void setEspecialidade(String Especialidade){
        this.Especialidade = Especialidade;
    }
}
