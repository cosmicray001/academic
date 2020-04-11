<!DOCTYPE html>
<?php
    session_start();
    session_unset();
    session_destroy();
    session_write_close();
    session_start();
    require_once('php/connect.php');
?>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" type="text/css" href="css/style.css">
    <title>Login</title>
    <link rel="shortcut icon" href="img/icon.png">
    <script src="js/main.js"></script>
    <link rel="stylesheet" type="text/css" href="../css/main.css">
    <style>
        body {
            background-image: url('img/back02.png');
            background-repeat: no-repeat;
            background-attachment: fixed;
            background-size: 100% 100%;
        }
    </style>
</head>
<body>
    <div id="navbar">
        <a href="../index.html">Home</a>
    </div>
    <div class="container">
        <h1>Login</h1>
        <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
            <input id="0100" onkeyup="fnc_mail('0100', '0101')" type="text" name = "email" placeholder="Email Address" class="field" required="required">
            <p id = "0101" style="color: red"></p>
            <input type="password" name = "pass" placeholder="password" class="field" required="required">
            <input type="submit" name = "submit" value="login" class="btn">
        </form>
        <div class="pass-link">
            <a href="php/reg.php" style="color: black">Lost your password?</a><br>
            <a href="php/reg.php" style="color: black">Don't have an account? Create one!</a>
        </div>	
    </div>
    <?php
        $email = $pass = "";
        if($_SERVER["REQUEST_METHOD"] == "POST"){
            $email = $_POST["email"];
            $pass = $_POST["pass"];
            $str = $pass;
            for($i = 0; $i < strlen($pass); $i = $i + 1){
                $str = $str . $i;
            }
            $str = $str . $pass;
            $str = sha1($str);
            $sql = "SELECT name, email, pass, type FROM user WHERE email = '$email'";
            $result = $conn->query($sql);
            if($result->num_rows > 0){
                while($row = $result->fetch_assoc()){
                    if($row['pass'] == $str){
                        $_SESSION['name'] = $row['name'];
                        $_SESSION['email'] = $row['email'];
                        $_SESSION['login'] = true;
                        if($row['type'] == 1){
                            $_SESSION['type'] = 1;
                            header("Location: php/admin.php");
                        }
                        else{
                            $_SESSION['type'] = 0;
                            header("Location: php/user.php");
                        }
                    }
                    else{
                        echo "<script type='text/javascript'>alert('wrong pass!');</script>";
                    }
                }
            }
            else{
                echo "<script type='text/javascript'>alert('no user found');</script>";
            }
        }
        $conn->close();
    ?>
    <script>
        var prevScrollpos = window.pageYOffset;
        window.onscroll = function() {
        var currentScrollPos = window.pageYOffset;
          if (prevScrollpos > currentScrollPos) {
            document.getElementById("navbar").style.top = "0";
          } else {
            document.getElementById("navbar").style.top = "-50px";
          }
          prevScrollpos = currentScrollPos;
        }
    </script>
</body>
</html>
<!--so far, ok!-->