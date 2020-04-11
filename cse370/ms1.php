<?php
	session_start();
	require_once('dbconfig/config.php');
	//phpinfo();
?>
<html>
	<head>
		<title>notic</title>
		<link rel="stylesheet" href="css/style.css">
		<link rel="icon" type="image/png" href="images/icons/error.svg"/>
	</head>
	<body style="background-color:#34495e">
	 <div id="particles-js" style="position:fixed;width:100%;z-index:-10;"></div>
	 <script src="js/particles.js"></script> 
	 <script src="js/app.js"></script>
	<center><h1 style="background-color:red">You have not ordere anything</h1><br>
	<a href="homepage.php"><button name = "del" type="button" class="back_btn2">   Back  </button></a>
	</center>
	</body>
</html>
