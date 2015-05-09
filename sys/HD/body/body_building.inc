<!-- jQuery UI -->
    <link href="https://code.jquery.com/ui/1.10.3/themes/redmond/jquery-ui.css" rel="stylesheet" media="screen">

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
                            <li  ><a href="accept_std.php"> Student Requests </a></li>
                            <li><a href="daily.php"> Daily Documents</a></li>
							<li><a href="need.php"> Special needs</a></li>
                        </ul></li>
                    </li>
                    <li><a href="role.php"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                     <li ><a href="permission.php"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
					 <li ><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
					<li class="current"><a href="building.php"><i class="glyphicon glyphicon-home"></i>building </a></li>
		              <li  ><a href="add_sup.php"><i class="glyphicon glyphicon-plus"></i>Add Supervisor</a></li>

                    
                </ul>
             </div>
		  </div>
		  <div class="col-md-10">

		  	<div class="row">
  			</div>

  			<div class="content-box-large">
	     <div class="col-md-12 panel-info">
			  			<div class="content-box-header panel-heading"><p><h3><center>Add New Building </center></h3></p></div></div>
  				<div class="panel-heading">
				
				</div>
  				<div class="panel-body">
  					<div class="table-responsive">
				
  					 <form method="post" action="body_success_building.php">
					                  <div class="form-group">
											<label class="col-sm-1 control-label" for="text-field">Building Name</label>
											<div class="col-md-2">
												<input class="form-control" name="b_name"  id="b_name" placeholder="name" type="text" required="">
											</div>
										</div><br/><br/><br/>
										<br/><br/><span style="background-color:#0085b5" class="input-group-addon"><i class="glyphicon glyphicon-map-marker"></i><strong >Address</strong> </span><legend></legend>
										

										<div class="form-group">
										
											<label class="col-sm-1 control-label" for="text-field">Street No</label>
											<div class="col-md-2">
												<input class="form-control" name="street_no"  id="street_no" placeholder="no" type="number" min="0" required="">
											</div>
										</div>				
                                  <div class="form-group">
										
											<label class="col-sm-1 control-label" for="text-field">Street Name</label>
											<div class="col-md-2">
												<input class="form-control" name="street_name"  id="street_name" placeholder="street name" type="text" required="">
											</div>
										</div>	
                                    <div class="form-group">
										
											<label class="col-sm-1 control-label" for="text-field">Building No</label>
											<div class="col-md-2">
												<input class="form-control" name="building_no"  id="building_no" placeholder="no" type="number" min="0" required="">
											</div>
										</div>												
										<br/><br/><br/>
                                       <br/><br/> <span style="background-color:#0085b5" class="input-group-addon"><i class="glyphicon glyphicon-align-center"></i><strong> Room/Floor</strong></span><legend></legend>
										<label class="col-sm-1 control-label" for="text-field">Number of Room</label>
											<div class="col-md-2">
												<input class="form-control" name="room_no"  id="room_no" placeholder="no" type="number" min="0" required="">
											</div>
										</div>	
										<label class="col-sm-1 control-label" for="text-field">Number of Floor</label>
											<div class="col-md-2">
												<input class="form-control" name="floor_no"  id="floor_no" placeholder="no" type="number" min="0" required="">
											</div><br/><br/><br/>
											
		             								<br/><br/> <span style="background-color:#0085b5" class="input-group-addon"><i class="glyphicon glyphicon-user"></i><strong> Supervisor</strong></span><legend></legend>
										<label class="col-sm-1 control-label" for="text-field">Number of Supervisor</label>
											<div class="col-md-2">
												<input class="form-control" name="sup_no"  id="sup_no" placeholder="no" type="number" min="0" required="">
											</div>
			  					<br/><br/>

					<br/><br/><br/>
					<input name="user_submit" id="user_submit" type="submit" value="add" class="btn btn-primary"/> 

		</form>
					</div>
  			             </div>
						 	<div class="content-box-large">
	     <div class="col-md-12 panel-info">
			  			<div class="content-box-header panel-heading"><p><h3><center>Edit Building </center></h3></p></div></div>
  				<div class="panel-heading">
				
				</div>
  				<div class="panel-body">
  					<div class="table-responsive">
				
  					<form method="post" action="body_success_edit_building.php">
					<table cellpadding="0" cellspacing="0" border="0" class="table table-striped table-bordered" id="example">
						 <thead>
							<tr>
							    <th>ID</th>
								<th>Name</th>
								<th>Street No.</th>
								<th>Street Name</th>
								<th>Building No.</th>
								<th>Floor No.</th>
								<th>Room No.</th>
								 <th>Supervisors No.</th>
								 <th></th>
								  <th></th>
							</tr>
						</thead>
						<tbody>
							
							<?php
							  
								$result =  $mysqli->query("SELECT * FROM building ");
								
								
						       while ( $row = mysqli_fetch_assoc($result) )
                                {  
								$v=$row['b_id'];
                                     echo " <tr> ";
								     echo "	<td>
										<label>
										<input type=\"hidden\" name=b id=b value=";echo $row['b_id'].">
										</label>".$row['b_id']."</td> ";
						            echo "<td>".$row['b_name']."</td>";
								    echo "<td>".$row['street_no']."</td>";
									echo "<td>".$row['street_name']."</td>";
									echo "<td>".$row['building_no']."</td>";
									echo "<td>".$row['floor_no']."</td>";
								     echo "<td>".$row['room_no']."</td>";
									  echo "<td>".$row['sup_no']."</td>";
									 echo "<td><button  class=\"btn btn-primary btn-xs\" type=\"submit\" name=editeb[] id=editeb[]  value=$v><i class=\"glyphicon glyphicon-pencil\"></i> Edit </button></td>";
									?><form class="form-inline" role="form" action="buildingdelete.php" method="post" id="Form" ><?php
									echo "<td><button  class=\"btn btn-danger btn-xs\" type=\"submit\" name=deleteb[] id=deleteb[]  value=$v ><i class=\"glyphicon glyphicon-remove\"></i>Delete</button></td>";
								   	?></form><?php   
								    echo "</tr>";
								  
								}
								
								?>
							 
											
				
					
					</tbody>
					</table> 
					
							   	</form>
		
					</div>
  			             </div>
						  </div>
						  
	                  	
	
