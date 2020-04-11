<?php
	session_start();
	require_once('dbconfig/config.php');
	//phpinfo();
?>
<html>
	<head>
		<title>Sumit your order</title>
		<link rel="stylesheet" href="css/style.css">
		<link rel="icon" type="image/png" href="images/icons/odr.svg"/>
	</head>
	<body background="back2.png">
	    <?php
			$a = $_SESSION['username'];
			$query = "select fish, meat, egg, veg from food where bracu_id = '$a'";
			$run_query = mysqli_query($con, $query);
			$f = 1;
			if(mysqli_num_rows($run_query) > 0){
				header( "Location: ms.php");
			}
		?>
		<div id="main-wrapper">
			<center><h1>Submit Your Order</h1></center>
			<div class="imgcontainer">
				<img src="imgs/avatar.png" alt="Avatar" class="avatar">
			</div>
		<form action="order.php" method="post">
			<div class="inner_container">
				<label><b>Fish</b></label>
				<input type="text" placeholder="Enter quantity" name="fish" required>
				<label><b>Meat</b></label>
				<input type="text" placeholder="Enter quantity" name="meat" required>
				<label><b>Egg</b></label>
				<input type="text" placeholder="Enter quantity" name="egg" required>
				<label><b>Vegetable</b></label>
				<input type="text" placeholder="Enter quantity" name="veg" required>
				<button name="Submit" class="sign_up_btn" type="submit">Submit</button>
				<a href="homepage.php"><button type="button" class="back_btn"><< Back</button></a>
			</div>
		</form>
		</div>
		<?php
		 if(isset($_POST['Submit'])){
			 @$fish = $_POST['fish'];
			 @$meat = $_POST['meat'];
			 @$egg = $_POST['egg'];
			 @$veg = $_POST['veg'];
			 $a = $_SESSION['username'];
			 $query = "insert into food values('', '$fish', '$meat', '$egg', '$veg', '$a')";
			 $run_query = mysqli_query($con, $query);
			 if($run_query){
				echo '<script type="text/javascript">alert("User Registered.. Welcome")</script>';
				header( "Location: homepage.php");
			 }
			 else echo '<script type="text/javascript">alert("Something went wrong")</script>';
			 }
		?>
	</body>
</html>
