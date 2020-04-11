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
        include('nav.php');
    ?>
    <?php
        include('head.php');
    ?>
    <div class="container" style="width: 800px">
        <h1>Search your apartment!</h1>
            <form action="search1.php" method="post">
                <select name="city">
                    <option value="def" selected>Default</option>
                    <option value="Dhaka">Dhaka</option>
                    <option value="Rajshahi">Rajshahi</option>
                    <option value="Chittagong">Chittagong</option>
                </select>
                <select name="area">
                    <option value="def" selected>Default</option>
                    <option value="Mohammadpur">Mohammadpur</option>
                    <option value="Mohakhali">Mohakhali</option>
                    <option value="Dhanmondi">Dhanmondi</option>
                </select>
                <input type="submit" name="custom" value="sort">
            </form>
        <table style="width:100%;" class="center">
        <?php
            if(isset($_POST['custom'])){
                $city = $_POST['city'];
                $area = $_POST['area'];
                if($city == "def" || $area == "def"){
                    $sql = "SELECT * from create_post";
                    $result = $conn->query($sql);
                }
                else{
                    $sql = "SELECT * from create_post WHERE (area = '$area' AND city = '$city')";
                    $result = $conn->query($sql);
                }
                //$sql = "SELECT * from create_post WHERE (area = '$area' AND city = '$city')";
                //$result = $conn->query($sql);
                if($result->num_rows > 0){
                    
                    while($row = $result->fetch_assoc()){
                        echo "<div>";
                        echo "<tr><td>"." POST_ID: ".$row['id']."</td></tr>";
                        echo "<tr><td>".$row['title']."</td></tr>";
                        echo '<tr><td><img src="uploads/'.$row['id'].'.png"/></td></tr>';
                        //echo "<tr><td><img src='uploads/1.png' alt='img'></td></tr>";
                        echo "<tr><td>".$row['detail']."</td></tr>";
                        echo "<tr><td>".$row['address']."</td><tr>";
                        echo "<tr><td>".$row['phone']."</td></tr>";
                        echo "<tr><td>".$row['city'].", ".$row['area']."<br><br><br><br></td></tr>";
                        echo "</div>";
                    }
                }
            }
        ?>
        </table>
    </div>
    <?php
        include('footer.php');
    ?>
</body>
</html>