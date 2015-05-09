<head>
    <style type="text/css">
        #NewRoleName
        {
            width: 158px;
        }
        #OldRoleName
        {
            width: 158px;
        }
        #NewRoleName0
        {
            width: 140px;
        }
        .form-group
        {
            width: 516px;
            height: 116px;
        }
        .input-group
        {
            width: 205px;
        }
        </style>

</head>
<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                    <li ><a href="users.php"><i class="glyphicon glyphicon-user"></i> Users</a></li>
                    <li class="current" ><a href="role.php"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                    <li><a href="permission.php"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
					<li><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
				   <li><a href="building.php"><i class="glyphicon glyphicon-home"></i>building </a></li>

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
								<ul class="nav nav-pills" id="nav1">
								 	<li id="t1"><a href="#tab1" data-toggle="tab"  >Add Role</a></li>
									<li  class="active"id="t2"><a href="#tab2" data-toggle="tab"   >Edit Role</a></li>
								</ul> 
								 </div>
								  </div>
								</div>
								<div class="tab-content">
								    <div class="tab-pane" id="tab1">
									
								      <form class="form-horizontal" role="form" action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
										  <legend></legend> <div class="form-group">
                                        <div class="form-group">
											<div class="col-md-10">
												<div class="row">
													<div class="col-sm-12">
											<label class="control-label col-md-3" for="inputEmail3"> Role Name
                                                        <div class="input-group">
															
															<input type="text" class="form-control" name="role_name"  id="role_name" placeholder="Role Name" required=""/>
														</div>
														
													    </label>
													</div>
												</div>
											</div>
											</div>
										</div>
                                          <br />
										  	<br />
										  	<br/>	
                                      			 <div class="button">
                                         
                                 			<span id="AlertMessage" style="color:green">

                                              </span>
										  <?php
		                                     	if(isset($_POST['addrole_submit']) && add_role($mysqli) != true )
  		                                    	echo "<script>AlertMessage.innerText = \"DONE\";</script>";
		                                   ?>
										   </div><!-- button -->								
											<div class="button">
                                           <span id="AlertMessage1" style="color:green">

                                              </span>
										  <?php
										       
		                                     	if(isset($_POST['addrole_submit']) && add_role($mysqli) == true )
  		                                    	echo "<script>AlertMessage1.innerText = \"Done \";</script>";
		                                   ?>
										   </div><!-- button -->
											<input name="addrole_submit" id="addrole_submit" type="submit" value="Add" class="btn btn-primary"/>
												
										</form>
										
									
								    </div>
								    <div class="tab-pane active" id="tab2">
																		

					<form class="form-inline" role="form" action="roleedit.php" method="post" id="Form" >
							<fieldset><legend></legend>
							
				<table cellpadding="0" cellspacing="0" border="0" class="table table-striped table-bordered">
						<thead>
							<tr>
								<th>ID</th>
								<th>Role Name</th>
								<th></th>
								<th></th>
							
								
							</tr>
						</thead>
						<tbody>
							
							<?php
							  
								$result =  $mysqli->query("SELECT * FROM role");
								
						        $count = $result->num_rows;
						       						  
						       while ( $row = mysqli_fetch_assoc($result) )
                                { 
								     $va=$row['role_id'];
                                     

									echo "<tr> ";
									
									echo "<td><input type=\"hidden\"  class=\"form-control\" id=";echo $row['role_id']." \" "." name=\"role_id\" value=";echo $row['role_id']." \" >".$row['role_id']."</td>";
								    echo "<td><input type=\"hidden\" class=\"form-control\" id=";echo $row['role_name']." \" name=\"role_name\" value=";echo $row['role_name']." \" >".$row['role_name']."</td>";
									
									echo "<td><button  class=\"btn btn-primary btn-xs\" type=\"submit\" name=editrole[] id=editrole[]  value=$va><i class=\"glyphicon glyphicon-pencil\"></i> Edit </button></td>";
									?><form class="form-inline" role="form" action="roledelete.php" method="post" id="Form" ><?php
									echo "<td><button  class=\"btn btn-danger btn-xs\" type=\"submit\" name=deleterole[] id=deleterole[]  value=$va ><i class=\"glyphicon glyphicon-remove\"></i>Delete</button></td>";
								   	?></form><?php    
  
								    echo "</tr>";
								  
								}
														          
	                    
                               ?> 
							
							
							 
											
				
						</tbody>
					</table> </fieldset></form>
                                        						
																				  
								     	  
								    </div>
								
													
											
								</div>	
						
		  				</div>
		  			</div>
		  		</div>

		  	</div>

		  </div>
		</div>
    </div>
							  			