<?php
    include('db.php');
	
	

		if(isset($_POST['role_id']) && isset($_POST['role_name'])){
			$id_r = $_POST['role_id'];
			$name = $_POST['role_name'];
           
		   $query1 = $mysqli->query("SELECT role_name FROM roles WHERE role_id=$_POST['role_id']");
			$row1 = mysqli_fetch_assoc($query1);
			echo $row1['role_name'];
						
			//$query = $mysqli->query("SELECT role_id FROM roles WHERE role_id=$id_r");
			echo "Role ";
			if( $query1->num_rows > 0 ) { //check if there is already an entry for that username
				echo "Role already exists!";
				
			}else{
				$mysqli->query("INSERT INTO role (role_id,role_name) VALUES ($id_r, $name)");
				echo "done";
				
			     
				//header("location:users.php");
				
			}
	
		}
?>

<!DOCTYPE html>
<html>
  <head>
    <title>Bootstrap Admin Theme v3</title>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <!-- Bootstrap -->
    <link href="bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- styles -->
    <link href="css/styles.css" rel="stylesheet">

    <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
    <!--[if lt IE 9]>
      <script src="https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js"></script>
      <script src="https://oss.maxcdn.com/libs/respond.js/1.3.0/respond.min.js"></script>
    <![endif]-->
      </head>
  <body>
 <form class="form-horizontal" role="form" action="add_role.php" method="post">
										  <div class="form-group">
										    <label for="inputEmail3" class="col-sm-2 control-label"  >ID</label>
										    <div class="col-sm-10">

										      <input type="number" class="form-control" id="role_id" placeholder="ID">
										    </div>
                                            <br /><br /><br /><br />
                                            <label for="inputEmail3" class="col-sm-2 control-label"  >Role Name</label>
                                            
                                            <div class="col-sm-10">
										      <input type="text" class="form-control" id="role_name" placeholder="Role Name">
										    </div>
										  </div>
										  <button class="btn btn-primary" type="submit">
													<i class="fa fa-save"></i>
													Submit
												</button>
										</form>
  </body>
</html>