<%-- 
    Document   : usuario_cadastrado
    Created on : 22/10/2015, 21:08:14
    Author     : ThomasJefferson
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <form method = "post" action="<%= request.getContextPath() %>/UsuarioController">
            <h10>Sucesso!</h10>
                   
            <div>
                <input type ="submit" value="Voltar" />
            </div>
            
        </form>
    </body>
</html>
