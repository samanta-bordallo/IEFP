<html>
    <head>
        <meta charset="utf-8">
        <meta http-equiv="refresh" content="3;url=index.html" />
        <title>Inserir de Cidade</title>
    </head>
    <body>
        <?php
            $ligacao = mysqli_connect("localhost", "root", "","world"); 

            if (!$ligacao){ 
                die ("Erro na ligação" . mysqli_connect_error());
            } 

            $sql = "INSERT INTO city (Name, CountryCode, District, Population) VALUES 
            ('$_POST[Name]', 
            '$_POST[CountryCode]', 
            '$_POST[District]', 
            $_POST[Population])";
            //echo $sql; 
            
            if (mysqli_query($ligacao, $sql)){ 
                echo "<h1>Cidade inserida com sucesso!<h1>"; 
            } else {
                echo "<h1>Erro a inserir cidade!<h1>"; 
            }
            mysqli_close($ligacao); 
        ?> 

        <h2>Aguarde que vai ser redericionado</h2>

    </body>
</html>