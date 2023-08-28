<html> 
    <head>
        <meta charset="utf-8">
        <title>Listar Cidades</title> 
    </head> 
    <body>
        <h1>Cidades Encontradas</h1>
        <?php 
            $ligacao = mysqli_connect("localhost", "root", "","world"); 

            if ($ligacao->connect_error){
                die (mysqli_error($ligacao));
            }
            $where = "";
            $first = true;
            if($_POST['Name'] != "" || $_POST['CountryCode'] || $_POST['District'] || $_POST['PopMin'] || $_POST['PopMax']){
                $where = " WHERE ";
            }
            if($_POST['Name'] != ""){
                $where .= " Name LIKE '%" . $_POST['Name'] . "%'";
                $first = false;
            }
            if($_POST['CountryCode']){
                if($first){
                    $where .= " CountryCode LIKE '%" . $_POST['CountryCode'] . "%'";
                    $first = false;
                } else {
                    $where .= " AND CountryCode LIKE '%" . $_POST['CountryCode'] . "%'";
                }
            }
            if($_POST['District'] != ""){
                if($first){
                $where .= " District LIKE '%" . $_POST['District'] . "%'";
                $first = false;
                } else {
                    $where .= " AND District LIKE '%" . $_POST['District'] . "%'";
                }
            }
            if($_POST['PopMin'] != ""){
                if($first){
                $where .= " Population >= " . $_POST['PopMin'];
                $first = false;
                } else {
                    $where .= " AND Population >= " . $_POST['PopMin'];
                }
            }
            if($_POST['PopMax'] != ""){
                if($first){
                $where .= " Population <= " . $_POST['PopMax'];
                $first = false;
                } else {
                    $where .= " AND Population <= " . $_POST['PopMax'];
                }
            }
            
            $sql = "SELECT * FROM city" . $where; 
            //echo $sql;
            $resultado = mysqli_query($ligacao, $sql) or die (mysqli_error($ligacao)); 
            $numreg = 0;

            echo '<input type="button" value="Voltar Atrás" onclick="window.history.go(-1);"><br><br>';

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
