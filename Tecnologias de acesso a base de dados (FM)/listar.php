<html> 
    <head>
        <meta charset="utf-8">
        <title>Listar Cidades</title> 
    </head> 
    <body> 
        <?php 
            $ligacao = mysqli_connect("localhost", "root", "","world"); 

            if ($ligacao->connect_error){
                die (mysqli_error($ligacao));
            }
            
            $sql ="SELECT * FROM city"; 
            $resultado = mysqli_query($ligacao, $sql) or die 
            (mysqli_error($ligacao)); 
            $numreg = 0; 

            while($linha = mysqli_fetch_assoc($resultado)) { 
                echo "Id: " . $linha['ID']."<br>"; 
                echo "Nome: " . $linha['Name']."<br>"; 
                echo "Morada: " . $linha['CountryCode']."<br>"; 
                echo "Zona " . $linha['District']."<br>"; 
                echo "População: " . $linha['Population']."<br>"; 
                echo "<hr>";

                $numreg = $numreg + 1; 
            }
            echo "N. de registos na base de dados: " . $numreg; 

            mysqli_close($ligacao); 
        ?>
        
        <br><br> 
        <!-- <input type="button" value="Voltar ao menu" onclick="window.history.go(-I);"> -->
        <a href="index.html" target="_self">Voltar ao menu</a>
    </body>
</html> 
