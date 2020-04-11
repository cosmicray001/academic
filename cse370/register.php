<?php
	session_start();
	require_once('dbconfig/config.php');
	//phpinfo();
?>
<!DOCTYPE html>
<html>
<head>
<title>Sign Up</title>
<link rel="stylesheet" href="css/style.css">
<link rel="icon" type="image/png" href="images/icons/reg.svg"/>
</head>
<body style="background-color:#34495e">
	<div id="particles-js" style="position:fixed;width:100%;z-index:-10;"></div>
	 <script src="js/particles.js"></script> 
	 <script src="js/app.js"></script>
	<div id="main-wrapper">
	<center><h2>Sign Up Form</h2></center>
		<form action="register.php" method="post">
			<div class="imgcontainer">
				<img src="imgs/avatar.png" alt="Avatar" class="avatar">
			</div>
			<div class="inner_container">
				<label><b>BRACU ID</b></label>
				<input type="text" placeholder="Enter BRACU ID" name="username" required>
				<label><b>Full Name</b></label>
				<input type="text" placeholder="Enter you full name" name="name" required>
				<label><b>E-mail</b></label>
				<input type="text" placeholder="sample@gmail.com" name="mail" required>
				<label><b>Phone number</b></label>
				<input type="text" placeholder="01XXXXXXXXX" name="phone" required>
				<label><b>Password</b></label>
				<input type="password" placeholder="**********" name="password" required>
				<label><b>Confirm Password</b></label>
				<input type="password" placeholder="**********" name="cpassword" required>
				<button name="register" class="sign_up_btn" type="submit">Sign Up</button>
				<a href="index.php"><button type="button" class="back_btn"><< Back to Login</button></a>
			</div>
		</form>
		
		<?php
			if(isset($_POST['register']))
			{
				@$bracu_id=$_POST['username'];
				@$pass=$_POST['password'];
				@$cpass=$_POST['cpassword'];
				@$name = $_POST['name'];
				@$mail = $_POST['mail'];
				@$phone = $_POST['phone'];
				
				
				if($pass==$cpass)
				{
					$query = "select * from user where bracu_id ='$bracu_id'";
					//echo $query;
				$query_run = mysqli_query($con,$query);
				//echo mysql_num_rows($query_run);
				if($query_run)
					{
						if(mysqli_num_rows($query_run)>0)
						{
							echo '<script type="text/javascript">alert("This Username Already exists.. Please try another username!")</script>';
						}
						else
						{
							$query = "insert into user values('$bracu_id','$name', '$phone', '$mail', '$pass')";
							$query_run = mysqli_query($con,$query);
							if($query_run)
							{
								echo '<script type="text/javascript">alert("User Registered.. Welcome")</script>';
								$_SESSION['username'] = $bracu_id;
								$_SESSION['password'] = $pass;
								if($bracu_id != 00000000) header( "Location: homepage.php");
								else header( "Location: admin.php");
							}
							else
							{
								echo '<p class="bg-danger msg-block">Registration Unsuccessful due to server error. Please try later</p>';
								echo $_POSR['name'];
							}
						}
					}
					else
					{
						echo '<script type="text/javascript">alert("DB error")</script>';
					}
				}
				else
				{
					echo '<script type="text/javascript">alert("Password and Confirm Password do not match")</script>';
				}
				
			}
			else
			{
			}
		?>
	</div>
</body>
</html>
