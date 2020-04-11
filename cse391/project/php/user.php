<!DOCTYPE html>
<?php
    session_start();
    if(!($_SESSION['login'] == true && $_SESSION['name'] != '' && $_SESSION['type'] == 0)){
        header("Location: ../index.php");
    }
    require_once('connect.php');
?>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Home</title>
    <link rel="stylesheet" type="text/css" href="../css/style.css">
    <link rel="stylesheet" type="text/css" href="../css/style_home.css">
    <script src="../js/main.js"></script>
    <link rel="shortcut icon" href="../img/icon.png">
    <style>
        body {
            background-image: url('../img/back01.jpg');
            background-repeat: no-repeat;
            background-attachment: fixed;
            background-size: 100% 100%;
        }
        #btn1 {
            height: 50px;
            width: 50px;
            background-color: blue;
        }
        .btn01{
            background-color: #3498DB;
            color: #fff;
            height: 100%;
            width: 100%;
            line-height: 25px;
            cursor: pointer;
        }
        .btn01:active {
            background-color: #1F78B4;
            border: 2px solid #1F78B4;
        }
        img {
            width: 50px;
            
        }
    </style>
</head>
<body >
    <?php
        include('nav.php');
    ?>
    <div class="container" style="background-image: url('../img/cover.jpg'); width: 800px;">
        <img style="width: 120px;" src="../img/user.png"  alt="user">
        <p style="color: white"> Welcome! <?php echo $_SESSION['name'];?></p>
        <form method="post">
            <input style="margin-left: 0; height: 50px; width: 80px; background-color: black; color: white;" type="submit" name="lout" value="Log out">
        </form>
    </div>
    <?php
        if(isset($_POST['lout'])){
            session_unset();
            session_destroy();
            session_write_close();
            header("Location: ../index.php");
        }
    ?>
    <div class="container" style="width: 800px">
        <div class="center">
        
            <a href="post.php" style="text-decoration: none;">
                <span class="buton">
                <i class="fa fa-home"></i>
                <span class="hover"></span>
                <span class="text">Post</span>
                </span>
            </a>
            </br>
            <a href="search.php" style="text-decoration: none;">
                <span class="buton">
                <i class="fa fa-home"></i>
                <span class="hover"></span>
                <span class="text">Search</span>
                </span>
            </a>
        </div>
    </div>
    <?php
        //include('footer.php');
    ?>
</body>
</html>