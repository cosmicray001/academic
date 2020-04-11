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
    </style>
</head>
<body>
    <?php
        include('nav.php');
    ?>
    <?php
        include('head.php');
    ?>
    <?php
        if($_SERVER["REQUEST_METHOD"] == "POST"){
            $title = $_POST['title'];
            $detail = $_POST['detail'];
            $address = $_POST['address'];
            $phone = $_POST['phone'];
            $city = $_POST['city'];
            $area = $_POST['area'];
            $img = $_POST['img'];

            $sql = "INSERT INTO create_post (title, detail, address, phone, city, area, img) values ('$title', '$detail', '$address', '$phone', '$city', '$area', '$img')";
            if($conn->query($sql)){
                echo "<script>alert('Post created!');</script>";
            }
            else{
                echo "<script>alert('Something went wrong!');</script>";
            }
        }
        $conn->close();
    ?>
    <div class="container" style="width: 450px">
        <h1>Post your add here!</h1>
        <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
            <input type="file" placeholder="select an image" class="field" name = "img" required="required" value="select an image">
            <input type="text" placeholder="Title" class="field" name="title" required="required">
            <input type="textarea" placeholder="discription" class="field" name="detail" required="required" >
            <input type="textarea" placeholder="Address" class="field" name="address" required="required" >
            <input type="txt" placeholder="Phone" class="field" name="phone" required="required">
            <select name="city">
                <option value="Dhaka" selected>Dhaka</option>
                <option value="Rajshahi">Rajshahi</option>
                <option value="Chittagong">Chittagong</option>
            </select>
            <select name="area">
                <option value="Mohammadpur" selected>Mohammadpur</option>
                <option value="Mohakhali">Mohakhali</option>
                <option value="Dhanmondi">Dhanmondi</option>
            </select>
            <input type="submit" value="submit" class="btn">
        </form>
    </div>
    <?php
        include('footer.php');
    ?>
</body>
</html>