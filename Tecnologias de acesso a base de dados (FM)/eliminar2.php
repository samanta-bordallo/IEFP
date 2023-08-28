<html> 
    <head> 
        <meta charset="utf-8">
        <meta http-equiv="refresh" content="3;url=index.html" />
        <title>Eliminação de Cidades</title> 
    </head> 
    <body>
        <h1>Eliminação de Cidades</h1> 
        <hr> 
        <?php 
            $cp_id = $_POST['ID']; 
            //echo $cp_id; 
            $ligacao = mysqli_connect("localhost", "root", "","world"); 
            if ($ligacao->connect_error){ 
                die (mysqli_error($ligacao)); 
            } 

            $sql ="DELETE FROM city WHERE ID = ".$cp_id; 
            if (mysqli_query($ligacao, $sql)){ 
                echo "<h2>Cidade apagada com sucesso!</h2>"; 
            } else { 
                echo "Erro! " . mysqli_error($ligacao); 
            } 
            mysqli_close($ligacao);
        ?> 
        <p> 
        <h2> Aguarde, vai ser redireccionado</h2> 
    </body> 
</html> 
