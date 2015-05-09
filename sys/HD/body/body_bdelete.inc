
 <div class="container">
<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
					<li ><a href="users.php"><i class="glyphicon glyphicon-user"></i>Users</a></li>
                     <li class="submenu" >
                           <a href="#">
                            <i class="glyphicon glyphicon-inbox"></i> Inbox
                            <span class="caret pull-right"></span>
                           </a>
                            <!-- Sub menu -->
                         <ul>
                            <li  class="current"><a href="accept_std.php"> Student Requests </a></li>
                            <li><a href="daily.php"> Daily Documents</a></li>
							<li><a href="need.php"> Special needs</a></li>
                        </ul></li>
                    </li>
                    <li class="current" ><a href="role.php"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                    <li><a href="permission.php"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
					<li><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
				   <li><a href="building.php"><i class="glyphicon glyphicon-home"></i>building </a></li>
		              <li  ><a href="add_sup.php"><i class="glyphicon glyphicon-plus"></i>Add Supervisor</a></li>

                </ul>
             </div>
		  </div>
		  <div class="col-md-10">
		  	<div class="row">
		  		<div class="col-md-9">
		  			<div class="content-box-large">
		  				&nbsp;<br /><br />
		  				<div class="panel-heading">
						</div>
		  				<div class="panel-body">
		  					<div id="rootwizard">
								
								
					<form class="form-inline" role="form" action="building.php" method="post" >
							   <div style="color:red">
                                         <h3> Are you Sure to delete this role ?</3>
                                              </div>
											  <legend></legend> 
				<table cellpadding="0" cellspacing="0" border="0" class="table table-bordered">
						<thead>
							<tr>
								<th>Building Name</th>
								
								
							
								
							</tr>
						</thead>
						<tbody>
							
						<?php	 
						if(isset($_POST['deleteb']) ){
                              
	                               $bb=$_POST['deleteb'];
	                                
									
									  while( list ($key,$val) = @each ($bb))
									{ 
									$result=$mysqli->query("select * from building where b_id=$val");
									$row = mysqli_fetch_assoc($result);
									
                                    echo "<tr> ";
									echo "<input type=\"hidden\" class=\"form-control\"  id=\"b_id\" name=\"b_id[]\"  value=";echo $row['b_id']." \">";
								    echo "<td><input type=\"hidden\" class=\"form-control\"  id=\"b_name\" name=\"b_name\"  value=\"";echo $row['b_name']." \" >".$row['b_name']."</td>";
									
															 
								    echo "</tr>";
								  }
								}
							
							?>
							 
											
				
						</tbody>
					</table> <button  class="btn btn-danger" type="submit" name="deleteb_submit" id="deleteb_submit">
													<i class="glyphicon glyphicon-remove"></i>
													Delete
												</button>
												</form>
								    
		  				
		  			</div>
		  		</div>

		  	</div>
          </div>
		  </div>
		</div>
    </div>
							  			