<!DOCTYPE html>
<?php
    session_start();
    require_once('connect.php');
?>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
            if(isset($_POST['del'])){
                $id = $_POST['id'];
                $sql = "DELETE FROM create_post WHERE id = '$id'";
                if($conn->query($sql)){
                    echo "<script>alert('Deleted!');</script>";
                }
                else{
                    echo "<script>alert('Something went wrong!');</script>";
                }
                header("Location: admin.php");
            }
    ?>
    <?php
        if(isset($_POST['poweroff'])){
            session_unset();
            session_destroy();
            session_write_close();
            header("Location: ../index.php");
        }
    ?>
</body>
</html>