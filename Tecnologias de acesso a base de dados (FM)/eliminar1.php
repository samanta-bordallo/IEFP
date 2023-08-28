<html>
    <head> 
        <meta charset="utf-8">
        <title>Eliminar Cidade</title> 
    </head> 
    <body> 
        <h1>Eliminação de Cidades</h1> 
        <hr><br> 
        <form action="eliminar2.php" method="post">
            <p>Qual a cidade a eliminar: 
                <select name="ID">
                    <?php
                        $ligacao = mysqli_connect("localhost", "root", "","world"); 

                        if (!$ligacao){
                            die ("Erro na ligação" . mysqli_connect_error()); 
                        } 

                        $sql = "SELECT * FROM city ORDER BY Name"; 
                        $resultado = mysqli_query($ligacao, $sql) or die 
                        (mysqli_error($ligacao)); 

                        while($linha = mysqli_fetch_assoc($resultado)) { 
                            echo"<option value='" . $linha['ID'] . "'>". $linha['Name']; 
                            echo "</option>"; 
                        } 
                        mysqli_close($ligacao); 
                    ?>
                </select>
            </p> 
            
            <p>
                <input name="submit" type="submit" value="Eliminar"/>
            </p> 
            <input type="button" value="Voltar ao menu" onclick="window.history.go(-l);"> 
        </form> 
    </body> 
</html> 