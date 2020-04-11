<!DOCTYPE html>
<?php
    session_start();
    if(!($_SESSION['login'] == true && $_SESSION['name'] != '' && $_SESSION['type'] == 1)){
        header("Location: ../index.php");
    }
    require_once('connect.php');
?>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>admin panel</title>
    <link rel="stylesheet" type="text/css" href="../css/style.css">
    <script src="../js/main.js"></script>
    <link rel="stylesheet" href="../css/style.css">
    <link rel="shortcut icon" href="../img/icon.png">
    <style>
        body {
            background-image: url('../img/back01.jpg');
            background-repeat: no-repeat;
            background-attachment: fixed;
            background-size: 100% 100%;
        }
        table {
        font-family: arial, sans-serif;
        border-collapse: collapse;
        width: 100%;
        }

        td, th {
        border: 1px solid #dddddd;
        text-align: left;
        padding: 8px;
        }

        tr:nth-child(even) {
        background-color: #dddddd;
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
<body>
<div class="container" style="background-image: url('../img/cover.jpg'); width: 800px;">
        <p style="color: white"> <img style="width: 120px;" src="../img/user.png"  alt="user"> Welcome, <?php echo $_SESSION['name']."!     email: ".$_SESSION['email']?></p>
        <form method="post">
            <input style="margin-left: 0; height: 50px; width: 80px; background-color: black; color: white;" type="submit" name="logout" value="Log out">
        </form>
    </div>
    <?php
        if(isset($_POST['logout'])){
            session_unset();
            session_destroy();
            session_write_close();
            header("Location: ../index.php");
        }
    ?>
    <?php
        $sm1t1 = $sm1t2 = $sm1t3 = $sm1t4 = "Loading...";
        $sm2t1 = $sm2t2 = $sm2t3 = $sm2t4 = "Loading...";
        $sm3t1 = $sm3t2 = $sm3t3 = $sm3t4 = "Loading...";
        $sm4t1 = $sm4t2 = $sm4t3 = $sm4t4 = "Loading...";
        $sm5t1 = $sm5t2 = $sm5t3 = $sm5t4 = "Loading...";
        if(isset($_POST['load'])){
            $_SESSION['dt'] = $_POST['date'];
            $date = $_POST['date'];
            $sql = "SELECT * FROM sm1 WHERE date = '$date'";
            $result = $conn->query($sql);
            if($result->num_rows > 0){
                while($row = $result->fetch_assoc()){
                    $sm1t1 = $row['u1'];
                    $sm1t2 = $row['u2'];
                    $sm1t3 = $row['u3'];
                    $sm1t4 = $row['u4'];
                }
            }
            else{
                $sql = "INSERT INTO sm1 (date, t1, t2, t3, t4, u1, u2, u3, u4) VALUES ('$date', '0', '0', '0', '0', '0', '0', '0', '0')";
                $result = $conn->query($sql);
                $sql = "SELECT * FROM sm1 WHERE date = '$date'";
                $result = $conn->query($sql);
                if($result->num_rows > 0){
                    while($row = $result->fetch_assoc()){
                        $sm1t1 = $row['u1'];
                        $sm1t2 = $row['u2'];
                        $sm1t3 = $row['u3'];
                        $sm1t4 = $row['u4'];
                    }
                }
                //echo "<script>alert('hi');</script>";
            }
            $sql = "SELECT * FROM sm2 WHERE date = '$date'";
            $result = $conn->query($sql);
            if($result->num_rows > 0){
                while($row = $result->fetch_assoc()){
                    $sm2t1 = $row['u1'];
                    $sm2t2 = $row['u2'];
                    $sm2t3 = $row['u3'];
                    $sm2t4 = $row['u4'];
                }
            }
            else{
                $sql = "INSERT INTO sm2 (date, t1, t2, t3, t4, u1, u2, u3, u4) VALUES ('$date', '0', '0', '0', '0', '0', '0', '0', '0')";
                $result = $conn->query($sql);
                $sql = "SELECT * FROM sm2 WHERE date = '$date'";
                $result = $conn->query($sql);
                if($result->num_rows > 0){
                    while($row = $result->fetch_assoc()){
                        $sm2t1 = $row['u1'];
                        $sm2t2 = $row['u2'];
                        $sm2t3 = $row['u3'];
                        $sm2t4 = $row['u4'];
                    }
                }
                //echo "<script>alert('hi');</script>";
            }
            $sql = "SELECT * FROM sm3 WHERE date = '$date'";
            $result = $conn->query($sql);
            if($result->num_rows > 0){
                while($row = $result->fetch_assoc()){
                    $sm3t1 = $row['u1'];
                    $sm3t2 = $row['u2'];
                    $sm3t3 = $row['u3'];
                    $sm3t4 = $row['u4'];
                }
            }
            else{
                $sql = "INSERT INTO sm3 (date, t1, t2, t3, t4, u1, u2, u3, u4) VALUES ('$date', '0', '0', '0', '0', '0', '0', '0', '0')";
                $result = $conn->query($sql);
                $sql = "SELECT * FROM sm3 WHERE date = '$date'";
                $result = $conn->query($sql);
                if($result->num_rows > 0){
                    while($row = $result->fetch_assoc()){
                        $sm3t1 = $row['u1'];
                        $sm3t2 = $row['u2'];
                        $sm3t3 = $row['u3'];
                        $sm3t4 = $row['u4'];
                    }
                }
                //echo "<script>alert('hi');</script>";
            }
            $sql = "SELECT * FROM sm4 WHERE date = '$date'";
            $result = $conn->query($sql);
            if($result->num_rows > 0){
                while($row = $result->fetch_assoc()){
                    $sm4t1 = $row['u1'];
                    $sm4t2 = $row['u2'];
                    $sm4t3 = $row['u3'];
                    $sm4t4 = $row['u4'];
                }
            }
            else{
                $sql = "INSERT INTO sm4 (date, t1, t2, t3, t4, u1, u2, u3, u4) VALUES ('$date', '0', '0', '0', '0', '0', '0', '0', '0')";
                $result = $conn->query($sql);
                $sql = "SELECT * FROM sm4 WHERE date = '$date'";
                $result = $conn->query($sql);
                if($result->num_rows > 0){
                    while($row = $result->fetch_assoc()){
                        $sm4t1 = $row['u1'];
                        $sm4t2 = $row['u2'];
                        $sm4t3 = $row['u3'];
                        $sm4t4 = $row['u4'];
                    }
                }
                //echo "<script>alert('hi');</script>";
            }
            $sql = "SELECT * FROM sm5 WHERE date = '$date'";
            $result = $conn->query($sql);
            if($result->num_rows > 0){
                while($row = $result->fetch_assoc()){
                    $sm5t1 = $row['u1'];
                    $sm5t2 = $row['u2'];
                    $sm5t3 = $row['u3'];
                    $sm5t4 = $row['u4'];
                }
            }
            else{
                $sql = "INSERT INTO sm5 (date, t1, t2, t3, t4, u1, u2, u3, u4) VALUES ('$date', '0', '0', '0', '0', '0', '0', '0', '0')";
                $result = $conn->query($sql);
                $sql = "SELECT * FROM sm5 WHERE date = '$date'";
                $result = $conn->query($sql);
                if($result->num_rows > 0){
                    while($row = $result->fetch_assoc()){
                        $sm5t1 = $row['u1'];
                        $sm5t2 = $row['u2'];
                        $sm5t3 = $row['u3'];
                        $sm5t4 = $row['u4'];
                    }
                }
                //echo "<script>alert('hi');</script>";
            }
        }
    ?>
    <div class="container" style="width: 800px">
        <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
            <input  style="background-color: #EDEAE9" type="date" name="date" value="<?php echo $_SESSION['dt'];?>">
            <input id="btn1" class="btn" type="submit" name="load" value="load">
        </form>
        <form method="post">
        <table style="width:100%">
            <tr>
                
                <th>Senior Mechanic</th>
                <th>Slot 01</th>
                <th>Slot 02</th>
                <th>Slot 03</th>
                <th>Slot 04</th>
            </tr>
            <tr>
                <td><img src="../img/sm1.png" alt="Senior Mechanic"></td>
                <td><input id="idsm1t1" class="field" name="sm1t1" type="text" value="<?php echo $sm1t1;?>"></td>
                <td><input id="idsm1t2" class="field" name="sm1t2" type="text" value="<?php echo $sm1t2;?>"></td>
                <td><input id="idsm1t3" class="field" name="sm1t3" type="text" value="<?php echo $sm1t3;?>"></td>
                <td><input id="idsm1t4" class="field" name="sm1t4" type="text" value="<?php echo $sm1t4;?>"></td>
            </tr>
            <tr>
                <td><img src="../img/sm2.png" alt="Senior Mechanic"></td>
                <td><input id="idsm2t1" class="field" name="sm2t1" type="text" value="<?php echo $sm2t1;?>"></td>
                <td><input id="idsm2t2" class="field" name="sm2t2" type="text" value="<?php echo $sm2t2;?>"></td>
                <td><input id="idsm2t3" class="field" name="sm2t3" type="text" value="<?php echo $sm2t3;?>"></td>
                <td><input id="idsm2t4" class="field" name="sm2t4" type="text" value="<?php echo $sm2t4;?>"></td>
            </tr>
            <tr>
                <td><img src="../img/sm3.png" alt="Senior Mechanic"></td>
                <td><input id="idsm3t1" class="field" name="sm3t1" type="text" value="<?php echo $sm3t1;?>"></td>
                <td><input id="idsm3t2" class="field" name="sm3t2" type="text" value="<?php echo $sm3t2;?>"></td>
                <td><input id="idsm3t3" class="field" name="sm3t3" type="text" value="<?php echo $sm3t3;?>"></td>
                <td><input id="idsm3t4" class="field" name="sm3t4" type="text" value="<?php echo $sm3t4;?>"></td>
            </tr>
            <tr>
                <td><img src="../img/sm4.png" alt="Senior Mechanic"></td>
                <td><input id="idsm4t1" class="field" name="sm4t1" type="text" value="<?php echo $sm4t1;?>"></td>
                <td><input id="idsm4t2" class="field" name="sm4t2" type="text" value="<?php echo $sm4t2;?>"></td>
                <td><input id="idsm4t3" class="field" name="sm4t3" type="text" value="<?php echo $sm4t3;?>"></td>
                <td><input id="idsm4t4" class="field" name="sm4t4" type="text" value="<?php echo $sm4t4;?>"></td>
            </tr>
            <tr>
                <td><img src="../img/sm5.png" alt="Senior Mechanic"></td>
                <td><input id="idsm5t1" class="field" name="sm5t1" type="text" value="<?php echo $sm5t1;?>"></td>
                <td><input id="idsm5t2" class="field" name="sm5t2" type="text" value="<?php echo $sm5t2;?>"></td>
                <td><input id="idsm5t3" class="field" name="sm5t3" type="text" value="<?php echo $sm5t3;?>"></td>
                <td><input id="idsm5t4" class="field" name="sm5t4" type="text" value="<?php echo $sm5t4;?>"></td>
            </tr>
            <script>fnc_fill();</script>
        </table>
        <input style="margin-top: 10px; height: 50px; width: 80px; background-color: black; color: white;" type="submit" name="update" value="Update">
        <h3>See Client Details</h3>
        <select name="sm" id="id_detail">
                <option value="sm1" selected>Senior Mechanic 01</option>
                <option value="sm2">Senior Mechanic 02</option>
                <option value="sm3">Senior Mechanic 03</option>
                <option value="sm4">Senior Mechanic 04</option>
                <option value="sm5">Senior Mechanic 05</option>
            </select>
            <select name="task" id="id_task">
                <option value="t1" selected>Slot 01</option>
                <option value="t2">Slot 02</option>
                <option value="t3">Slot 03</option>
                <option value="t4">Slot 04</option>
            </select>
            
            <input  style="margin-left: 15px; height: 50px; width: 80px; background-color: black; color: white;" type="submit" name="see" value="OK">
        </form>
    </div>
    <?php
        if(isset($_POST['see'])){
            $st = $_POST['sm'];
            $flg = $st;
            $st = $st.$_POST['task'];
            $usr = $_POST[$st];
            $ok = false;
            if($usr == ""){
                echo "<script>alert('No user found');</script>";
            }
            else{
                $sql = "SELECT * FROM user WHERE email = '$usr'";
                $result = $conn->query($sql);
                if($result->num_rows > 0){
                    while($row = $result->fetch_assoc()){
                        $uname = $row['name'];
                        $uphone = $row['phone'];
                        $ulinum = $row['linum'];
                        $uengnum = $row['engnum'];
                        $usm = "";
                        if($flg == "sm1") $usm = "1";
                        else if($flg == "sm2") $usm = "2";
                        else if($flg == "sm3") $usm = "3";
                        else if($flg == "sm4") $usm = "4";
                        else if($flg == "sm5") $usm = "5";
                        $ok = true;
                        //echo "<script>alert('ok!');</script>";
                    }
                }
                else{
                    echo "<script>alert('Something went wrong!');</script>";
                }
            }
        }
    ?>
    <div class="container" style="width: 800px">
        <h2 id="swtitle"></h2>
        <p id="iddate"></p>
        <p id="swname"></p>
        <p id="swSMname"></p>
        <p id="swphone"></p>
        <p id="swlinum"></p>
        <p id="swengnum"></p>
        <script>
            document.getElementById("swtitle").innerHTML = "Client's detail Info:";
            document.getElementById("iddate").innerHTML = "<?php echo 'Date: '.$_SESSION['dt'];?>";
            document.getElementById("swname").innerHTML = "<?php echo 'Name: '.$uname;?>";
            document.getElementById("swSMname").innerHTML = "<?php echo 'Phone number: '.$uphone;?>";
            document.getElementById("swphone").innerHTML = "<?php echo 'Car licence: '.$ulinum;?>";
            document.getElementById("swlinum").innerHTML = "<?php echo 'Engine number: '.$uengnum;?>";
            document.getElementById("swengnum").innerHTML = "<?php echo 'Senior Mechanic: '.$usm;?>";
        </script>
    </div>
    <?php
        if(isset($_POST['update'])){
            $date = $_SESSION['dt'];
            $sm1u1 = $_POST['sm1t1'];
            $sm1u2 = $_POST['sm1t2'];
            $sm1u3 = $_POST['sm1t3'];
            $sm1u4 = $_POST['sm1t4'];
            
            $sm2u1 = $_POST['sm2t1'];
            $sm2u2 = $_POST['sm2t2'];
            $sm2u3 = $_POST['sm2t3'];
            $sm2u4 = $_POST['sm2t4'];

            $sm3u1 = $_POST['sm3t1'];
            $sm3u2 = $_POST['sm3t2'];
            $sm3u3 = $_POST['sm3t3'];
            $sm3u4 = $_POST['sm3t4'];

            $sm4u1 = $_POST['sm4t1'];
            $sm4u2 = $_POST['sm4t2'];
            $sm4u3 = $_POST['sm4t3'];
            $sm4u4 = $_POST['sm4t4'];

            $sm5u1 = $_POST['sm5t1'];
            $sm5u2 = $_POST['sm5t2'];
            $sm5u3 = $_POST['sm5t3'];
            $sm5u4 = $_POST['sm5t4'];

            $sql = "UPDATE sm1 SET u1 = '$sm1u1', u2 = '$sm1u2', u3 = '$sm1u3', u4 = '$sm1u4'  WHERE date = '$date'";
            $result = $conn->query($sql);

            $sql = "UPDATE sm2 SET u1 = '$sm2u1', u2 = '$sm2u2', u3 = '$sm2u3', u4 = '$sm2u4'  WHERE date = '$date'";
            $result = $conn->query($sql);

            $sql = "UPDATE sm3 SET u1 = '$sm3u1', u2 = '$sm3u2', u3 = '$sm3u3', u4 = '$sm3u4'  WHERE date = '$date'";
            $result = $conn->query($sql);

            $sql = "UPDATE sm4 SET u1 = '$sm4u1', u2 = '$sm4u2', u3 = '$sm4u3', u4 = '$sm4u4'  WHERE date = '$date'";
            $result = $conn->query($sql);

            $sql = "UPDATE sm5 SET u1 = '$sm5u1', u2 = '$sm5u2', u3 = '$sm5u3', u4 = '$sm5u4'  WHERE date = '$date'";
            $result = $conn->query($sql);
            
        }
    ?>
</body>
</html>