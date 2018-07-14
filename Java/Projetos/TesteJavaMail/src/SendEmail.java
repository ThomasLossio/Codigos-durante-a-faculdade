
import java.util.Properties;
import javax.mail.Address;
import javax.mail.Message;
import javax.mail.MessagingException;
import javax.mail.PasswordAuthentication;
import javax.mail.Session;
import javax.mail.Transport;
import javax.mail.internet.InternetAddress;
import javax.mail.internet.MimeMessage;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ThomasJefferson
 */
public class SendEmail {
    public static void enviarMensagem(String assunto, String texto, String destinatario) {

        String host = "smtp.gmail.com";
        Properties props = System.getProperties();

        props.put("mail.smtp.starttls.enable", "true");
        props.put("mail.smtp.host", host);
        props.put("mail.smtp.socketFactory.class", "javax.net.ssl.SSLSocketFactory");
        props.put("mail.smtp.port", "587");
        props.put("mail.smtp.socketFactory.port", "587");
        props.put("mail.smtp.auth", "true");

        Session session = Session.getDefaultInstance(props,
                new javax.mail.Authenticator() {
                    protected PasswordAuthentication getPasswordAuthentication() {
                        return new PasswordAuthentication("sifap2014.1@gmail.com", "adms1234");//Autentica seu Email e Senha
                    }
                });

        /**
         * Ativa Debug para sessão
         */
        session.setDebug(true);
        try {
            Message message = new MimeMessage(session);
            message.setFrom(new InternetAddress("sifap2014.1@gmail.com")); //Remetente

            Address[] toUser = InternetAddress //Destinatário(s)
                    .parse(destinatario);//Exemplo que uso (Lembrete ^^) "charlesduarte019@gmail.com, rodrigo.darthayan@gmail.com, 
            //trbrasil.ce@gmail.com, thomaslossio@hotmail.com"

            message.setRecipients(Message.RecipientType.TO, toUser);
            message.setSubject(assunto);//Assunto do Email
            message.setText(texto);//Conteudo do Email

            /**
             * Método para enviar a mensagem criada Tentará enviar a mensagem do
             * email dito inicialmente e mandará para todos os emails informados
             *
             * Se houver erro neste "Transporte", será gerado uma Exceção
             * (Exception)
             */
            Transport.send(message);

        } catch (MessagingException e) {
            throw new RuntimeException(e);
        }

    }    
}
