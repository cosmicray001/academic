<!DOCTYPE html>
<?php
    session_start();
    require_once('connect.php');
?>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" type="text/css" href="../css/style.css">
    <title>Registration</title>
    <link rel="shortcut icon" href="../img/icon.png">
    <script src="../js/main.js"></script>
    <style>
        body {
            background-image: url('../img/back01.jpg');
            background-repeat: no-repeat;
            background-attachment: fixed;
            background-size: 100% 100%;
        }
        table.center {
            margin-left:auto; 
            margin-right:auto;
        }
    </style>
</head>
<body>
    <?php
        include('head.php');
    ?>
    <div class="container" style="width: 800px">
        <h1>Admin Panel!</h1>
        <table style="width:100%;" class="center">
        <?php
        $sql = "SELECT * from create_post";
        $result = $conn->query($sql);
            if($result->num_rows > 0){
                echo "<tr><th>Post id:</th><th>Title</th><th>Address</th><th>Phone</th><th>Tag</th></tr>";
                while($row = $result->fetch_assoc()){
                    echo "<div>";
                    echo "<tr><td>"." POST_ID: ".$row['id']."</td>";
                    echo "<td>".$row['title']."</td>";
                    echo "<td>".$row['address']."</td>";
                    echo "<td>".$row['phone']."</td>";
                    echo "<td>".$row['city'].", ".$row['area']."<br><br><br><br></td></tr>";
                    echo "</div>";
                }
            }
        ?>
        </table>
        <form action="exe.php" method="post">
            <input type="text" name="id" placeholder="Type a ID here.">
            <input type="submit" value="Delete any post" name="del">
        </form>
    </div>
    <?php
        include('footer.php');
    ?>
</body>
</html>