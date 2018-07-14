<%-- 
    Document   : usuario_form
    Created on : 19/10/2015, 21:04:57
    Author     : ThomasJefferson
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Cadastro de Usuário</title>
    </head>
    <body>
        <form method = "post" action="<%= request.getContextPath() %>/UsuarioController">
            <h1>Cadastro de Usuário</h1>
            
            <div>
                Digite seu email: 
                <input id = "email" name = "email" type= "text" />
            </div>
            <div>
                Digite seu login: 
                <input id = "login" name = "login" type= "text" />                
            </div>
            <div>
                Digite sua senha: 
                <input id = "senha" name = "senha" type= "password" />                
            </div>
            
            
            
            <div>
                <input type ="submit" value="Cadastrar"  />
            </div>
            
        </form>
    </body>
</html>
