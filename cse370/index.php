<?php
	session_start();
	require_once('dbconfig/config.php');
	//phpinfo();
?>

<!DOCTYPE html>
<html>
<head>
<title>Login</title>
<link rel="stylesheet" href="css/style.css">
<link rel="icon" type="image/png" href="images/icons/login.svg"/>
</head>
<body style="background-color:#34495e" >
	 <div id="particles-js" style="position:fixed;width:100%;z-index:-10;"></div>
	 <script src="js/particles.js"></script> 
	 <script src="js/app.js"></script>
		<div id="main-wrapper">
			<center><h2>Welcome to our Cafe</h2></center>
			<div class="imgcontainer">
				<img src="imgs/avatar.png" alt="Avatar" class="avatar">
			</div>
		
		<form action="index.php" method="post">
		
			<div class="inner_container">
				<label><b>BRACU ID</b></label>
				<input type="text" placeholder="Enter BRACU ID" name="username" required>
				<label><b>Password</b></label>
				<input type="password" placeholder="Enter Password" name="password" required>
				<button class="login_button" name="login" type="submit">Login</button>
				<a href="register.php"><button type="button" class="register_btn">Register</button></a>
			</div>
		</form>
		<?php
			if(isset($_POST['login']))
			{
				@$bracu_id=$_POST['username'];
				@$pass=$_POST['password'];
				$query = "select * from user where bracu_id='$bracu_id'";
				//echo $query;
				$query_run = mysqli_query($con,$query);
				//echo mysql_num_rows($query_run);
				if($query_run)
				{
					$query = "select * from user where bracu_id='$bracu_id' and pass='$pass' ";
					$query_run1 = mysqli_query($con,$query);
					if(mysqli_num_rows($query_run1)>0)
					{
					$row = mysqli_fetch_array($query_run1,MYSQLI_ASSOC);
					
					$_SESSION['username'] = $bracu_id;
					$_SESSION['password'] = $pass;
					if($bracu_id != 00000000) header( "Location: homepage.php");
					else header( "Location: admin1.php");
					
					}
					else if(mysqli_fetch_array(mysqli_query($con, "select * from user where bracu_id='$bracu_id'")) == 0){
						echo '<script type="text/javascript">alert("No such User exists. Invalid Credentials")</script>';
					}
					else
					{
						echo '<script type="text/javascript">alert("Wrong password.")</script>';
					}
				}
				else
				{
					echo '<script type="text/javascript">alert("Database Error")</script>';
				}
			}
			else
			{
				//echo '<script type="text/javascript">alert("No such User exists. Invalid Credentials")</script>';
			}
		?>
		
	  </div>
</body>

</html>
