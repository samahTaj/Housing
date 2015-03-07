<?php
	if(!isset($_COOKIE['loggedin'])){
		header("location:login.html");
	}
?>

<!DOCTYPE html>
<html>
  <head>
    <title>Housing Management System </title>
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
  	<div class="header">
	     <div class="container">
	        <div class="row">
	           <div class="col-md-5">
	              <!-- Logo -->
	              <div class="logo">
	                 <h1><a href="users.html">Housing Management System</a></h1>
	              </div>
	           </div>
	           
	           <div class="col-md-2">
	              <div class="navbar navbar-inverse" role="banner">
	                  <nav class="collapse navbar-collapse bs-navbar-collapse navbar-right" role="navigation">
	                    <ul class="nav navbar-nav">
	                      <li class="dropdown">
	                        <a href="#" class="dropdown-toggle" data-toggle="dropdown">My Account <b class="caret"></b></a>
	                        <ul class="dropdown-menu animated fadeInUp">
	                          
	                          <li><a href="logout.php">Logout</a></li>
	                        </ul>
	                      </li>
	                    </ul>
	                  </nav>
	              </div>
	           </div>
	        </div>
	     </div>
	</div>

    <div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                    <li class="current"><a href="users.html"><i class="glyphicon glyphicon-user"></i> Users</a>
                    <li ><a href="calendar.html"><i class="glyphicon glyphicon-calendar"></i> Calendar</a></li>
                    <li><a href="role.html"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                    <li><a href="permission.html"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
                </ul>
             </div>
		  </div>
		  <div class="col-md-10">
		  	<div class="row">
		  		<div class="col-md-6">
		  			<div class="content-box-large">
		  				<div class="panel-heading">
						<div class="panel-title">Select a User </div>
							
							
						</div>
						
             
                        <?php 
						include('db.php');
						
						$result =  $mysqli->query("SELECT * FROM user");
						$count = $result->num_rows;
						
						echo "<select class=\"form-control\" id=\"select-1\">";
						while ($row = mysqli_fetch_assoc($result))
                        {
                        
						echo "<option>".$row['id']."</option><br/>";}
						
						echo "</select> <br /><br />";
	                    
                         ?>
			  						
			  						
			  							<p>&nbsp;<button class="btn btn-primary" type="submit">
													<i class="fa fa-save"></i>
													Edit
												</button>
											</p>
		  			</div>
		  		</div>

		  	</div>

		  </div>
		</div>
    </div>

    <footer>
         <div class="container">
         
            <div class="copy text-center">
              
            </div>
            
         </div>
      </footer>

    <!-- jQuery (necessary for Bootstrap's JavaScript plugins) -->
    <script src="https://code.jquery.com/jquery.js"></script>
    <!-- Include all compiled plugins (below), or include individual files as needed -->
    <script src="bootstrap/js/bootstrap.min.js"></script>
    <script src="js/custom.js"></script>
  </body>
</html>