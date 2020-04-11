<?php
	session_start();
	require_once('dbconfig/config.php');
	//phpinfo();
?>
<html>
	<head>
		<title>Reset</title>
		<link rel="stylesheet" href="css/style.css">
		<link rel="icon" type="image/png" href="images/icons/error.svg"/>
	</head>
	<body background="back2.png">
	 <?php
	 $a = $_SESSION['username'];
	 $query = "delete from food where bracu_id = '$a'";
	 $run_query = mysqli_query($con, $query);
	 if($run_query) echo "<center><h1 style='background-color:#008000'>Menu has been cleared</h1><br>";
	 else echo "<center><h1 style='background-color:red'>Menu has been cleared</h1><br>";
	 ?>
	<a href="homepage.php"><button name = "del" type="button" class="back_btn2">   Back  </button></a>
	</center>
	</body>
</html>
