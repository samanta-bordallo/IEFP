<html> 
    <head> 
        <meta charset="utf-8"> 
        <meta http-equiv="refresh" content="3;url=index.html" />
        <title>Alterar Cidade</title> 
    </head> 
    <bodv> 
        <?php 
            $ligacao = mysqli_connect("localhost", "root", "","world"); 

            if (!$ligacao){
                die ("Erro na ligação" . mysqli_connect_error()); 
            } 

            $sql = "UPDATE city SET 
                Name = '$_POST[Name]', 
                District = '$_POST[District]', 
                CountryCode = '$_POST[CountryCode]', 
                Population = '$_POST[Population]'
                WHERE ID = $_POST[ID]"; 
            
            //echo Ssql; 
            
            if (mysqli_query($ligacao, $sql)){ 
                echo "<h1>Cidade alterada com sucesso!</hl>"; 
            } 
            
            mysqli_close($ligacao); 
        ?> 
        <h2> Aguarde que vai ser redireccionado</h2> 
    </body> 
</html> 
