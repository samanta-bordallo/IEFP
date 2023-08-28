<html>
    <head> 
        <meta charset="utf-8">
        <title>Alterar Cidades</title>
    </head> 
    <body> 
        <h1>Alterar Cidades</h1> 
        <?php 
            $cp_id = $_POST['cp_id']; 

            $ligacao = mysqli_connect("localhost", "root", "","world"); 
            if ($ligacao->connect_error){
                die (mysqli_error($ligacao));
            } 

            $sql ="SELECT * FROM city WHERE ID = ".$cp_id; 
            $resultado = mysqli_query($ligacao, $sql) or die (mysqli_error($ligacao));
            $linha = mysqli_fetch_assoc ($resultado);
        ?>

        <hr>
        <form action ="alterar3.php" method = "post">
            <p> ID: <input type="text" name="ID" size ="5" value = "<?php echo $linha['ID'] ?>" readonly> </p> 
            <p> Nome: <input type="text" name="Name" size ="100" value = "<?php echo $linha['Name'] ?>"></p> 
            <p> Código Pais: <input type= "text" name="CountryCode" size ="100" value= "<?php echo $linha['CountryCode'] ?>"></P> 
            <p> Distrito: <input type="text" name="District" size="30" value=" <?php echo $linha['District'] ?>"></p> 
            <p> População: <input type="text" name="Population" size ="9" value="<?php echo $linha['Population']?>"></p> 
            <input type = "submit" value ="Alterar" > 
            <input type = "reset" value ="Limpar" > 
            <input type="button" value="Cancelar" onclick="window.history.go(-1);"> 
        </form> 
        <?php 
            mysqli_close($ligacao); 
        ?>
    </body>
</html> 
