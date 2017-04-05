<?php
    $servername = "localhost";
    $username = "root";
    $password = "secret";
    $dbName = "game_db_test";

    $userID = $_POST["userIDPost"];
    $question_id = $_POST["question_idPost"];
    $userAnswer = $_POST["userAnswerPost"];
    $isCorrect = $_POST["isCorrectPost"];
    $questionText = $_POST["questionTextPost"];
    $date_complete = $_POST["date_completePost"];

    $conn = new mysqli($servername, $username, $password, $dbName);

    if(!$conn){
        die("Connection Failed. <br>". mysqli_connect_error());
    }

    $sql = "INSERT INTO questionrecords(user_id, question_id, userAnswer, isCorrect, questionText, date_complete) 
            VALUES ('".$userID."' , '".$question_id."' , '".$userAnswer."' , '".$isCorrect."' , '".$questionText."' , '".$date_complete."')";
            
    /*VALUES (5,81,'Japan, Germany',1,'Who did the?',2017-04-27)";

    $sql = "INSERT INTO testdate(todays_date) VALUES (2017-04-27)";*/
    $result = mysqli_query($conn, $sql);

?>