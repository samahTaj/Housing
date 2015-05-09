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
					 <li><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
                     <li><a href="building.php"><i class="glyphicon glyphicon-home"></i>building </a></li>
		              <li class="current" ><a href="add_sup.php"><i class="glyphicon glyphicon-plus"></i>Add Supervisor</a></li>

					 

                </ul>
             </div>
		  </div>
		  <div class="col-md-10">

		  	<div class="row">
  			</div>

  			<div class="content-box-large">
						  			<div class="content-box-header panel-heading"><p><h3><center>Add Supervisor to Building </center></h3></p></div>

  				<div class="panel-heading">
				</div>
  				<div class="panel-body">
  					<div class="table-responsive">
  					<form method="post" action="add_sup_detail.php">
					<table cellpadding="0" cellspacing="0" border="0" class="table table-bordered" id="example">
						 <thead>
							<tr>
							    <th></th>
							    <th>Supervisor Name</th>
								<th >Building Name</th>
							
														
								
							</tr>
						</thead>
						<tbody>
							
							<?php
							  
								$result =  $mysqli->query("SELECT * FROM user join role where user.role_id=role.role_id and user.role_id=2");
						 

								
								
							  
						       while ( $row = mysqli_fetch_assoc($result) )
                                { 
								$i=$row['id'];
                                   $result1 =  $mysqli->query("SELECT * FROM user join building where user.b_id=building.b_id and user.id=$i");
								    $row1= mysqli_fetch_assoc($result1);
								     echo "	<td class=\"style1\">
										<label>
										<input type=\"radio\"  name=\"user[]\" id=user[] value=";echo $row['id']."  required=\"\" >
										</label></td> ";
						            echo "<td>".$row['first_name']."</td>";
									 echo "<td>".$row1['b_name']."</td>";
								    

									
								    echo "</tr>";
								  
								}
								
						
						          
	                    
                               ?>
							
							
							 
											
				
					
					</tbody>
					</table> 
			<button  name="sup_submit" id="sup_submit" type="submit" value="Edit" class="btn btn-primary"><i class="glyphicon glyphicon-pencil"></i> Edit </button>
</form>
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
