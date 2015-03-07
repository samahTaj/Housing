
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
  	<div class="header">
	     <div class="container">
	        <div class="row">
	           <div class="col-md-5">
	              <!-- Logo -->
	              <div class="logo">
	                 <h1><a href="users.php">Housing Management System</a></h1>
	              </div>
	           </div>
	           <div class="col-md-5">
	              <div class="row">
	                <div class="col-lg-12">
	                  <div class="input-group form">
	                       <input type="text" class="form-control" placeholder="Search...">
	                       <span class="input-group-btn">
	                         <button class="btn btn-primary" type="button">Search</button>
	                       </span>
	                  </div>
	                </div>
	              </div>
	           </div>
	           <div class="col-md-2">
	              <div class="navbar navbar-inverse" role="banner">
	                  <nav class="collapse navbar-collapse bs-navbar-collapse navbar-right" role="navigation">
	                    <ul class="nav navbar-nav">
	                      <li class="dropdown">
	                        <a href="#" class="dropdown-toggle" data-toggle="dropdown">My Account <b class="caret"></b></a>
	                        <ul class="dropdown-menu animated fadeInUp">
	                          <li><a href="profile.html">Profile</a></li>
	                          <li><a href="login.html">Logout</a></li>
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
                    <li class="current"><a href="users.php"><i class="glyphicon glyphicon-user"></i> Users</a><a href="calendar.html"><i class="glyphicon glyphicon-calendar"></i> Calendar</a></li>
                    <li><a href="role.html"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                    <li><a href="permission.html"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
                </ul>
             </div>
		  </div>
		  <div class="col-md-10">
		  	<div class="row">
		  		<div class="col-md-6">
		  			<div class="content-box-large">
		  				&nbsp;<br /><br />
		  				<div class="panel-heading">
						</div>
		  				<div class="panel-body">
		  					<div id="rootwizard">
								<div class="navbar">
								  <div class="navbar-inner">
								    <div class="container">
								<ul class="nav nav-pills">
								  	<li class="active"><a href="#tab1" data-toggle="tab">Add Role</a></li>
									<li><a href="#tab2" data-toggle="tab">Edit Role</a></li>
									
								</ul>
								 </div>
								  </div>
								</div>
								<div class="tab-content">
								    <div class="tab-pane active" id="tab1">
								      <form class="form-horizontal" role="form" action="edit_role_button.php">>
										  <div class="form-group">
										    <label for="inputEmail3" class="col-sm-2 control-label">ID</label>
										    <div class="col-sm-10">
										      <input type="text" class="form-control" id="id_role" placeholder="ID">
										    </div>
                                            <br /><br /><br /><br />
                                            <label for="inputEmail3" class="col-sm-2 control-label">Role Name</label>
                                            
                                            <div class="col-sm-10">
										      <input type="text" class="form-control" id="role_name" placeholder="Role Name">
										    </div>
										  </div>
										  <button class="btn btn-primary" type="submit">
													<i class="fa fa-save"></i>
													Submit
												</button>
											
										</form>
								    </div>
								    <div class="tab-pane" id="tab2">
								      <form class="form-inline" role="form">
							
											<fieldset>
												<div class="form-group col-sm-3">
													<label class="sr-only" for="exampleInputEmail2">Email address</label>
													<input type="email" class="form-control" id="exampleInputEmail2" placeholder="Enter email">
												</div>
												
											</fieldset>
											
										</form>
								    </div>
									                <br /><br />
													
								</div>	
							</div>
		  				</div>
		  			</div>
		  		</div>

		  	</div>

		  </div>
		</div>
    </div>

    <footer>
         <div class="container">
         
            <div class="copy text-center">
               Copyright 2014 <a href='#'>Website</a>
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