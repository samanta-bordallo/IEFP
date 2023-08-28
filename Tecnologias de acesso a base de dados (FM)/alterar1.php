<html> 
    <head> 
        <meta charset="utf-8"> 
        <title>Alterar Cidade</title> 
    </head> 
    <body> 
        <h1>Alteração de Cidades</h1>
        <hr><br>
        <form action="alterar2.php" method="post"> 
            <p>Qual a cidade a alterar: 
                <select name="cp_id">
                    <?php 
                        $ligacao = mysqli_connect("localhost", "root", "","world"); 

                        if (!$ligacao){ 
                            die ("Erro na ligacao" . mysqli_connect_error()); 
                        } 

                        $sql = "SELECT * FROM city ORDER BY Name ASC";
                        $resultado = mysqli_query($ligacao, $sql) or die (mysqli_error($ligacao)); 

                        while($linha = mysqli_fetch_assoc($resultado)) { 
                            echo"<option value='" . $linha['ID'] . "'>". $linha['Name']; 
                            echo "</option>"; 
                        } 
                        mysqli_close($ligacao); 
                    ?>
                    </select>
            </p> 
            <p> 
                <input name="submit" type="submit" value="Alterar"/>
            </p> 
            <input type="button" value="Voltar ao menu" onclick="window.history.go(-1);"> 
        </form> 
    </body> 
</html> 
