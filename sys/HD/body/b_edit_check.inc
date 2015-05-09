
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
			  			<div class="content-box-header panel-heading"><p><h3><center>Edit Building </center></h3></p></div></div>
  				<div class="panel-heading">
				
				</div>
  				<div class="panel-body">
  					<div class="table-responsive">
				
  					<form method="post" action="body_success_edit_building.php">
					<table cellpadding="0" cellspacing="0" border="0" class="table table-striped table-bordered" >
						 <thead>
							<tr>
							    
								<th>Name</th>
								<th>Street No.</th>
								<th>Street Name</th>
								<th>Building No.</th>
								<th>Floor No.</th>
								<th>Room No.</th>
								<th>Supervisors No.</th>
								 
							</tr>
						</thead>
						<tbody>
						<?php	 
						if(isset($_POST['editeb']) ){
                              
	                               $bb=$_POST['editeb'];
	                                
									
									  while( list ($key,$val) = @each ($bb))
									{ 
									$result=$mysqli->query("select * from building where b_id=$val");
									$row = mysqli_fetch_assoc($result);
									
                                    echo "<tr> ";
									echo "<input type=\"hidden\" class=\"form-control\"  id=\"b_id\" name=\"b_id[]\"  value=";echo $row['b_id']." \">";
								    echo "<td><input type=\"text\" class=\"form-control\" id=";echo $row['b_name']." \" "." name=\"b_name[]\" value=\"";echo $row['b_name']." \" ></td>";
									echo "<td><input type=\"text\" class=\"form-control\"  id=";echo $row['street_no']." \" "." name=\"street_no[]\"  value=";echo $row['street_no']." \" ></td>";
									echo "<td><input type=\"text\" class=\"form-control\"  id=\"street_name[]\" name=\"street_name[]\"   value=";echo $row['street_name']." \" ></td>";
									echo "<td><input type=\"text\" class=\"form-control\"  id=\"building_no[]\" name=\"building_no[]\"  value=\"";echo $row['building_no']." \" ></td>";
								   echo "<td><input type=\"text\" class=\"form-control\"  id=\"floor_no[]\" name=\"floor_no[]\"  value=\"";echo $row['floor_no']." \"></td>";

									echo "<td><input type=\"text\" class=\"form-control\"  id=\"room_no[]\" name=\"room_no[]\"  value=\"";echo $row['room_no']." \"></td>";
								    echo "<td><input type=\"text\" class=\"form-control\"  id=\"sup_no[]\" name=\"sup_no[]\"  value=\"";echo $row['sup_no']." \"></td>";

															 
								    echo "</tr>";
								  }
								}
							
							?> 
											
				
					
					</tbody>
					</table> 
					<div class="col-md-12">
												&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
											
									<table >
									
											<td><button  class="btn btn-primary" type="submit" name="editb_submit" id="editb_submit">
													<i class="fa fa-save"></i>
													Save
												</button></td>&nbsp;	</form>
												<td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; </td> 
												<td><form method="post" action="building.php">	<button class="btn btn-default" type="submit">
													      Cancel
												</button></td>
												
											
							   	</form></table>
		
					</div>
  			             </div>
						  </div>
						  
	                  	
	
