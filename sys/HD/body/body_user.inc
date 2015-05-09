<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                    <li class="current"><a href="users.php"><i class="glyphicon glyphicon-user"></i>Users</a></li>
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
					 <li><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
                  <li><a href="building.php"><i class="glyphicon glyphicon-home"></i>building </a></li>
		              <li  ><a href="add_sup.php"><i class="glyphicon glyphicon-plus"></i>Add Supervisor </a></li>

                </ul>
             </div>
		  </div>
		  <div class="col-md-10">

		  	<div class="row">
  			</div>

  			<div class="content-box-large">
  				<div class="panel-heading">
				</div>
  				<div class="panel-body">
  					<div class="table-responsive">
  					<form method="post" action="user_select.php">
					<table cellpadding="0" cellspacing="0" border="0" class="table table-striped table-bordered" id="example">
						 <thead>
							<tr>
							    <th></th>
								<th >ID</th>
								<th>Name</th>
								<th>City</th>
								<th>State</th>
								<th>Residential Area</th>
								<th>Phone</th>
								<th>Role</th>
								
							</tr>
						</thead>
						<tbody>
							
							<?php
							  
								$result =  $mysqli->query("SELECT * FROM user  join  role where user.role_id=role.role_id");
								
						               while ( $row = mysqli_fetch_assoc($result) )
                                                                { 
								
									 $va=$row['id'];
				                                         $result2 =  $mysqli->query("SELECT * FROM user  join role where user.role_id=role.role_id and user.id=$va  ");
						                         $row2 = mysqli_fetch_assoc($result2);
                                                                         echo "<tr> ";
								         echo "<td class=\"style1\">
										<label>
										<input type=\"radio\" name=\"user[]\" id=user[] value=";echo $row['id']."  required=\"\" >
										</label></td> ";
						                         echo "<td>".$row['id']."</td>"."<td>".$row['first_name']." ".$row['middle_name']." ".$row['last_name']."</td>";
								         echo "<td>".$row['city']."</td>";
								         echo "<td>".$row['state']."</td>";
									 echo "<td>".$row['residential_area']."</td>";
									 echo "<td>".$row['phone']."</td>";
								     	 echo "<td>".$row2['role_name']."</td>";
								         echo "</tr>";
								  
								}
												
						          
	                    
                               ?>
							
							
							 
											
				
					
					</tbody>
					</table> 
					<table> 
					<td><button  name="user_submit" id="user_submit" type="submit" value="Edit" class="btn btn-primary"><i class="glyphicon glyphicon-pencil"></i> Edit </button>
					&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td></form>
					 </table>
  				</div>
  			</div>



		  </div>
		</div>
    </div>

		  			</div>
		  		</div>
		  	</div>

		  </div>
		</div>
    </div>
