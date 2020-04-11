<?php
	session_start();
	require_once('dbconfig/config.php');
	//phpinfo();
?>
<!DOCTYPE html>
<html lang="en">
<head>
	<title>admin</title>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
<!--===============================================================================================-->	
	<link rel="icon" type="image/png" href="images/icons/admin.svg"/>
<!--===============================================================================================-->
	<link rel="stylesheet" type="text/css" href="vendor/bootstrap/css/bootstrap.min.css">
	<link rel="stylesheet" type="button" href="css/style.css">
<!--===============================================================================================-->
	<link rel="stylesheet" type="text/css" href="fonts/font-awesome-4.7.0/css/font-awesome.min.css">
<!--===============================================================================================-->
	<link rel="stylesheet" type="text/css" href="vendor/animate/animate.css">
<!--===============================================================================================-->
	<link rel="stylesheet" type="text/css" href="vendor/select2/select2.min.css">
<!--===============================================================================================-->
	<link rel="stylesheet" type="text/css" href="vendor/perfect-scrollbar/perfect-scrollbar.css">
<!--===============================================================================================-->
	<link rel="stylesheet" type="text/css" href="css/util.css">
	<link rel="stylesheet" type="text/css" href="css/main.css">
<!--===============================================================================================-->
</head>
<body style="background-color:#34495e">
	<div id="particles-js" style="position:fixed;width:100%;z-index:-10;"></div>
	<script src="js/particles.js"></script> 
	<script src="js/app.js"></script>
	<center><h1 style = "color: white"><b>Admin Panel</b><a href="admin1.php"></h1></center>
	<div align = "right">
	<a href="index.php"><button name = "del" type="button" class="back_btn2"><h2 style = "color: white">Log out  </h2></button></a>
	</div>
	<div class="limiter">
		<div class="container-table100">
			<div class="wrap-table100">
				<div class="container">
				<form action="admin1.php" method="post">
					<div class="inner_container">
						<center><input type="text" style = "background-color: #bdc3c7" placeholder="search here...." name="ser" required>
						<button name="search" style = "background-color: #2ecc71" class="sign_up_btn" type="submit">SEARCH</button></center>
						<div class="table100 ver1 m-b-110">
							<div class="table100-head">
								<table>
									<thead>
										<tr class="row100 head">
											<th class="cell100 column3"><label class="radio-inline"><input type="radio" name="rt" value = 1 checked>User Name</label></th>
											<th class="cell100 column3"><label class="radio-inline"><input type="radio" name="rt" value = 2 >BRACU ID</label></th>
											<th class="cell100 column5"><label class="radio-inline"><input type="radio" name="rt" value = 3>Fish<label></th>
											<th class="cell100 column5"><label class="radio-inline"><input type="radio" name="rt" value = 4>Meat</label></th>
											<th class="cell100 column5"><label class="radio-inline"><input type="radio" name="rt" value = 5>Egg</label></th>
											<th class="cell100 column5"><label class="radio-inline"><input type="radio" name="rt" value = 6>Vegetables</label></th>
										</tr>
									</thead>
								</table>
							</div>
						</div>
					</div>
				</form>
				<?php
					if(isset($_POST['search'])){
						@$key = $_POST['ser'];
						if($_POST['rt'] == 1){
							echo "<div class='table100-body js-pscroll'>";
									echo "<table>";
										echo "<tbody>";
											echo "<tr class='row100 body'>";
											$qu = "select bracu_id from user where name = '$key'";
											$rq = mysqli_query($con, $qu);
											if(mysqli_num_rows($rq) > 0){
												while($row = mysqli_fetch_assoc($rq)){
													$id = $row["bracu_id"];
													$rko = "select fish, meat, egg, veg from food where bracu_id = '$id'";
													$rkor = mysqli_query($con, $rko);
													$rr = mysqli_fetch_assoc($rkor);
													echo "<td class='cell100 column3'>".$key."</td>";
													echo "<td class='cell100 column3'>".$id."</td>";
													echo "<td class='cell100 column5'>".$rr["fish"]."</td>";
													echo "<td class='cell100 column5'>".$rr["meat"]."</td>";
													echo "<td class='cell100 column5'>".$rr["egg"]."</td>";
													echo "<td class='cell100 column5'>".$rr["veg"]."</td></tr>";
												}
											}
											else echo '<script type="text/javascript">alert("No such User exists. Invalid Credentials")</script>';
									echo "</tbody>";
							echo "</table>";
						echo "</div>";
						}
						else if($_POST['rt'] == 2){
							echo "<div class='table100-body js-pscroll'>";
									echo "<table>";
										echo "<tbody>";
											echo "<tr class='row100 body'>";
									
												$query = "select fish, meat, egg, veg, bracu_id from food where bracu_id = '$key'";
												$run_query = mysqli_query($con, $query);
												if(mysqli_num_rows($run_query) > 0){
													while($row = mysqli_fetch_assoc($run_query)){
														$a = $row["bracu_id"];
														$q = "select name from user where bracu_id = '$a'";
														$h = mysqli_query($con, $q);
														$r = mysqli_fetch_assoc($h);
														echo "<td class='cell100 column3'>".$r["name"]."</td>";
														echo "<td class='cell100 column3'>".$row["bracu_id"]."</td>";
														echo "<td class='cell100 column5'>".$row["fish"]."</td>";
														echo "<td class='cell100 column5'>".$row["meat"]."</td>";
														echo "<td class='cell100 column5'>".$row["egg"]."</td>";
														echo "<td class='cell100 column5'>".$row["veg"]."</td></tr>";
													}
												}
												else echo '<script type="text/javascript">alert("No such User exists. Invalid Credentials")</script>';
								  
								echo "</tbody>";
							echo "</table>";
						echo "</div>";
						}
						else if($_POST['rt'] == 3){
						echo "<div class='table100-body js-pscroll'>";
							echo "<table>";
								echo "<tbody>";
									echo "<tr class='row100 body'>";
							$q = "select fish, meat, egg, veg, bracu_id from food where fish = '$key'";
							$rq = mysqli_query($con, $q);
							if(mysqli_num_rows($rq) > 0){
								while($row = mysqli_fetch_assoc($rq)){
									$a = $row["bracu_id"];
									$qq = "select name from user where bracu_id = '$a'";
									$rrq = mysqli_query($con, $qq);
									$na = mysqli_fetch_assoc($rrq);
									echo "<td class='cell100 column3'>".$na["name"]."</td>";
									echo "<td class='cell100 column3'>".$row["bracu_id"]."</td>";
									echo "<td class='cell100 column5'>".$row["fish"]."</td>";
									echo "<td class='cell100 column5'>".$row["meat"]."</td>";
									echo "<td class='cell100 column5'>".$row["egg"]."</td>";
									echo "<td class='cell100 column5'>".$row["veg"]."</td></tr>";
								}
							}
							else echo '<script type="text/javascript">alert("No such User exists. Invalid Credentials")</script>';
								  
								echo "</tbody>";
							echo "</table>";
						echo "</div>";
						}
						else if($_POST['rt'] == 4){
							echo "<div class='table100-body js-pscroll'>";
							echo "<table>";
								echo "<tbody>";
									echo "<tr class='row100 body'>";
							$q = "select fish, meat, egg, veg, bracu_id from food where meat = '$key'";
							$rq = mysqli_query($con, $q);
							if(mysqli_num_rows($rq) > 0){
								while($row = mysqli_fetch_assoc($rq)){
									$a = $row["bracu_id"];
									$qq = "select name from user where bracu_id = '$a'";
									$rrq = mysqli_query($con, $qq);
									$na = mysqli_fetch_assoc($rrq);
									echo "<td class='cell100 column3'>".$na["name"]."</td>";
									echo "<td class='cell100 column3'>".$row["bracu_id"]."</td>";
									echo "<td class='cell100 column5'>".$row["fish"]."</td>";
									echo "<td class='cell100 column5'>".$row["meat"]."</td>";
									echo "<td class='cell100 column5'>".$row["egg"]."</td>";
									echo "<td class='cell100 column5'>".$row["veg"]."</td></tr>";
								}
							}
							else echo '<script type="text/javascript">alert("No such User exists. Invalid Credentials")</script>';
								  
								echo "</tbody>";
							echo "</table>";
						echo "</div>";
						}
						else if($_POST['rt'] == 5){
							echo "<div class='table100-body js-pscroll'>";
							echo "<table>";
								echo "<tbody>";
									echo "<tr class='row100 body'>";
							$q = "select fish, meat, egg, veg, bracu_id from food where egg = '$key'";
							$rq = mysqli_query($con, $q);
							if(mysqli_num_rows($rq) > 0){
								while($row = mysqli_fetch_assoc($rq)){
									$a = $row["bracu_id"];
									$qq = "select name from user where bracu_id = '$a'";
									$rrq = mysqli_query($con, $qq);
									$na = mysqli_fetch_assoc($rrq);
									echo "<td class='cell100 column3'>".$na["name"]."</td>";
									echo "<td class='cell100 column3'>".$row["bracu_id"]."</td>";
									echo "<td class='cell100 column5'>".$row["fish"]."</td>";
									echo "<td class='cell100 column5'>".$row["meat"]."</td>";
									echo "<td class='cell100 column5'>".$row["egg"]."</td>";
									echo "<td class='cell100 column5'>".$row["veg"]."</td></tr>";
								}
							}
							else echo '<script type="text/javascript">alert("No such User exists. Invalid Credentials")</script>';
								  
								echo "</tbody>";
							echo "</table>";
						echo "</div>";
						}
						else if($_POST['rt'] == 6){
							echo "<div class='table100-body js-pscroll'>";
							echo "<table>";
								echo "<tbody>";
									echo "<tr class='row100 body'>";
							$q = "select fish, meat, egg, veg, bracu_id from food where veg = '$key'";
							$rq = mysqli_query($con, $q);
							if(mysqli_num_rows($rq) > 0){
								while($row = mysqli_fetch_assoc($rq)){
									$a = $row["bracu_id"];
									$qq = "select name from user where bracu_id = '$a'";
									$rrq = mysqli_query($con, $qq);
									$na = mysqli_fetch_assoc($rrq);
									echo "<td class='cell100 column3'>".$na["name"]."</td>";
									echo "<td class='cell100 column3'>".$row["bracu_id"]."</td>";
									echo "<td class='cell100 column5'>".$row["fish"]."</td>";
									echo "<td class='cell100 column5'>".$row["meat"]."</td>";
									echo "<td class='cell100 column5'>".$row["egg"]."</td>";
									echo "<td class='cell100 column5'>".$row["veg"]."</td></tr>";
								}
							}
							else echo '<script type="text/javascript">alert("No such User exists. Invalid Credentials")</script>';
								  
								echo "</tbody>";
							echo "</table>";
						echo "</div>";
						}
					}
				?>
				<div class="table100 ver1 m-b-110">
					<div class="table100-head">
						<table>
							<thead>
								<tr class="row100 head">
									<th class="cell100 column3">User Name</th>
									<th class="cell100 column3">BRACU ID</th>
									<th class="cell100 column5">Fish</th>
									<th class="cell100 column5">Meat</th>
									<th class="cell100 column5">Egg</th>
									<th class="cell100 column5">Vegetables</th>
								</tr>
							</thead>
						</table>
					</div>

					<div class="table100-body js-pscroll">
								<table>
									<tbody>
										<tr class="row100 body">
								<?php
											$a = $_SESSION['username'];
											$query = "select fish, meat, egg, veg, bracu_id from food";
											$run_query = mysqli_query($con, $query);
											if(mysqli_num_rows($run_query) > 0){
												while($row = mysqli_fetch_assoc($run_query)){
													$a = $row["bracu_id"];
													$q = "select name from user where bracu_id = '$a'";
													$h = mysqli_query($con, $q);
													$r = mysqli_fetch_assoc($h);
													echo "<td class='cell100 column3'>".$r["name"]."</td>";
													echo "<td class='cell100 column3'>".$row["bracu_id"]."</td>";
													echo "<td class='cell100 column5'>".$row["fish"]."</td>";
													echo "<td class='cell100 column5'>".$row["meat"]."</td>";
													echo "<td class='cell100 column5'>".$row["egg"]."</td>";
													echo "<td class='cell100 column5'>".$row["veg"]."</td></tr>";
												}
											}
											else echo '<script type="text/javascript">alert("Empty data set")</script>';
							  ?>
							</tbody>
						</table>
					</div>
				</div>
			</div>
		</div>
	</div>
<!--===============================================================================================-->	
	<script src="vendor/jquery/jquery-3.2.1.min.js"></script>
<!--===============================================================================================-->
	<script src="vendor/bootstrap/js/popper.js"></script>
	<script src="vendor/bootstrap/js/bootstrap.min.js"></script>
<!--===============================================================================================-->
	<script src="vendor/select2/select2.min.js"></script>
<!--===============================================================================================-->
	<script src="vendor/perfect-scrollbar/perfect-scrollbar.min.js"></script>
	<script>
		$('.js-pscroll').each(function(){
			var ps = new PerfectScrollbar(this);

			$(window).on('resize', function(){
				ps.update();
			})
		});
			
		
	</script>
<!--===============================================================================================-->
	<script src="js/main.js"></script>

</body>
</html>
