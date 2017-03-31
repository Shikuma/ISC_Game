<?php
    $servername = "localhost";
    $username = "root";
    $password = "secret";
    $dbName = "game_db_test";

    $conn = new mysqli($servername, $username, $password, $dbName);

    if(!$conn){
        die("Connection Failed. <br>". mysqli_connect_error());
    }

    $sql = "SELECT id, score, user_id, date_complete, first_name, last_name FROM games";
    $result = mysqli_query($conn, $sql);
    
    if(mysqli_num_rows($result) > 0){
        while($row = mysqli_fetch_assoc($result)){
            echo("GameID:".$row['id']."|score:".$row['score']."|user_id:".$row['user_id']."|Date_complete:".$row[date_complete]."|first_name:".$row[first_name]."|last_name:".$row[last_name].";");
        }
    }
?>