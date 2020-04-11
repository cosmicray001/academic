<!DOCTYPE html>
<?php
    session_start();
    session_unset();
    session_destroy();
    session_write_close();
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
            background-image: url('../img/back02.png');
            background-repeat: no-repeat;
            background-attachment: fixed;
            background-size: 100% 100%;
        }
    </style>
</head>
<body>
    <?php
        $name = $email = $address = $phone = $linum = $engnum = $pass = $rpass = $error_msg = "";
        if($_SERVER["REQUEST_METHOD"] == "POST"){
            $name = $_POST["name"];
            $email = $_POST["email"];
            $address = $_POST["address"];
            $phone = $_POST["phone"];
            $linum = $_POST["linum"];
            $engnum = $_POST["engnum"];
            $pass = $_POST["pass"];
            $rpass = $_POST["rpass"];
            if($pass != $rpass){
                echo "<script type='text/javascript'>alert('Password miss matched!');</script>";
            }
            else{
                $str = $pass;
                for($i = 0; $i < strlen($pass); $i = $i + 1){
                    $str = $str . $i;
                }
                $str = $str . $pass;
                $str = sha1($str);
                $sql = "SELECT * FROM user WHERE email = '$email'";
                $result = $conn->query($sql);
                if($result->num_rows > 0){
                    echo "<script type='text/javascript'>alert('This email is already used!');</script>";
                }
                else{
                    $sql = "INSERT INTO user (name, email, address, phone, linum, engnum, pass, type) VALUES ('$name', '$email', '$address', '$phone', '$linum', '$engnum', '$str', '0')";
                    if ($conn->query($sql) === TRUE) {
                        $_SESSION['name'] = $name;
                        $_SESSION['email'] = $email;
                        $_SESSION['login'] = true;
                        $_SESSION['type'] = 0;
                        echo "<script type='text/javascript'>if(confirm('Reg done!')) document.location = 'user.php';</script>";
                        //header("Location: ../index.php");
                    } else {
                        echo "<script type='text/javascript'>alert('something went wrong');</script>";
                    }
                }
            }
        }
        $conn->close();
    ?>
    <div class="container" style="width: 450px">
        <h1>Registration</h1>
        
        <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
            <input id="Rname" onkeyup="fnc_name('Rname', 'Rshow_name')" type="text" placeholder="Full Name" class="field" name = "name" required="required" value="<?php echo $name;?>">
            <p id="Rshow_name" style="color: red"></p>
            <input id="Remail" onkeyup="fnc_mail('Remail', 'Rshow_email')" type="text" placeholder="Email Address" class="field" name="email" required="required" value="<?php echo $email;?>">
            <p id="Rshow_email" style="color: red"></p>
            <input type="textarea" placeholder="Address" class="field" name="address" required="required" value="<?php echo $address;?>">
            <input type="txt" placeholder="Phone" class="field" name="phone" required="required" value="<?php echo $phone;?>">
            <input type="text" placeholder="Car License number" class="field" name="linum" required="required" value="<?php echo $linum;?>">
            <input type="text" placeholder="Car Engine Number" class="field" name="engnum" required="required" value="<?php echo $engnum;?>">
            <input id="Rpass" type="password" placeholder="password" class="field" name="pass" required="required">
            <input id="Rrepass" onkeyup="fnc_passSame('Rpass', 'Rrepass', 'Rshow_pass')" type="password" name="rpass" placeholder="re-password" class="field" required="required">
            <p id="Rshow_pass" style="color: red"></p>
            <input type="submit" value="submit" class="btn">
        </form>
        <div class="pass-link">
            <a href="../index.php" style="color: black">Already have an account? Log in here!</a>
        </div>	
    </div>
</body>
</html>