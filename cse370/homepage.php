<?php
	session_start();
	require_once('dbconfig/config.php');
	//phpinfo();
?>
<!DOCTYPE html>
<html>
<head>
<title>Home</title>
<link rel="stylesheet" href="css/style.css">
<link rel="icon" type="image/png" href="images/icons/user.svg"/>
<style>
  table {
   border-collapse: collapse;
   width: 100%;
   color: #bec4c2;
   font-family: monospace;
   font-size: 25px;
   text-align: left;
     } 
  th {
   background-color: #020504;
   color: white;
    }
  tr:nth-child(even) {background-color: #f2f2f2}
 </style>
</head>
<body background="back2.png">
	 <div id="main-wrapper">
		<center>
		<h2>
			<?php
				$a = $_SESSION['username'];
				$query = "select name from user where bracu_id = '$a'";
				$run_query = mysqli_query($con, $query);
				if(mysqli_num_rows($run_query) > 0){
					while($row = mysqli_fetch_assoc($run_query)){
						echo "<h3>Welcome </h3><h2>".$row["name"]."</h2><br>";
					}
				}
			?>
		</h2>
		</center>
		<form>
			<img src="imgs/avatar.png" alt="Avatar" class="avatar">
			</div>
		
			<center><h2>Current order</h2></center>
			<form><center>
				<h4>
					    <?php
							$a = $_SESSION['username'];
							$query = "select fish, meat, egg, veg from food where bracu_id = '$a'";
							$run_query = mysqli_query($con, $query);
							if(mysqli_num_rows($run_query) > 0){
								echo "<table>
						<tr>
							<th>Fish</th>
							<th>Meat</th>
							<th>Egg</th>
							<th>Vegetable</th>
						</tr>";
								while($row = mysqli_fetch_assoc($run_query)){
									echo "<tr><th>".$row["fish"]."</th><th>".$row["meat"]."</th><th>".$row["egg"]."</th><th>".$row["veg"]."</th></tr>";
								}
							}
							else $a = 100;
							echo "</table>";
							if($a == 100) echo "<h1 style = 'color: black'>Not ordered yet</h1><br>";
						?>
				</h4>
			</center></form>
			<center>
			<div class="inner_container">
			<a href="order.php"><button name="odr" class="back_btn1" type="button">New Order</button></a>
			<a href="edit.php"><button class="back_btn1" name="edit" type="button">Edit</button></a>
			<a href="delet.php"><button name = "del" type="button" class="back_btn2">   Delete  </button></a>
			</div>
			</center>
			<div class="inner_container">
				<a href="index.php"><button type="button" class="logout_button">Log Out</button></a>
			</div>
			</form>
	</div>
</body>
</html>
