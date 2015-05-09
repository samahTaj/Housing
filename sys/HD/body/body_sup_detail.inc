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
  				<div class="panel-heading">
				</div>
  				<div class="panel-body">
  					<div class="table-responsive">
  					<form method="post" action="sup_success_select.php">
					<table cellpadding="0" cellspacing="0" border="0" class="table table-bordered">
					<thead><tr>
							   
								<th>Supervisor Name</th>
								
								<th>building Name</th>
								
							</tr>
						</thead>
						<tbody>
					<?php 
					 if(isset($_POST['sup_submit']) ){
                               if (isset($_POST['user'])) {
	                               $user=$_POST['user'];
	
		                            while( list ($key,$val) = @each ($user))
									{
									$result=$mysqli->query("select * from user where id=$val");
									// $result1 =  $mysqli->query("SELECT * FROM user_has_role where user_id=$val");
									  $result2 =  $mysqli->query("SELECT * FROM  building  ");
								      $num_results = $result->num_rows;
									 
                                     
                               		
									
                                    $row = mysqli_fetch_assoc($result)  ;
                                  //  $row1 = mysqli_fetch_assoc($result1); 
									//$r=$row1['user_id'];
									$rid=0;
									echo "<div class=\"input-group\">";
									echo "<tr  > ";
									echo "<input type=\"hidden\"  class=\"form-control\" id=";echo $row['id']." \" "." name=\"id[]\" value=";echo $row['id']." \" >";
									echo "<input type=\"hidden\"  class=\"form-control\" id=\"name\" name=\"name\" value=";echo $row['first_name']." \" >";
									echo "<td  >".$row['first_name']." ".$row['middle_name']." ".$row['last_name']."</td>";
							    	        echo "<td>";
									
                                   
									 echo "<p><div class=\"bfh-selectbox\" data-name=\"selectbox3\" data-value=\"\" data-filter=\"true\">";
									while($row2 = mysqli_fetch_assoc($result2)){
									if($row2['b_id']==$row['b_id'] ) 
										echo "<div data-value=\"".$row2['b_name']."\"><input type=\"hidden\"  name=\"bname\"  id=\"bname\" value =\"".$row2['b_name']."\">".$row2['b_name']."</div>";
									 else { 									 
										echo "<div data-value=\"".$row2['b_name']."\"><input type=\"hidden\"  name=\"bname\"  id=\"bname\" value =\"".$row2['b_name']."\">".$row2['b_name']."</div>";
									   
									 }
						

									 }
									echo "</div></p>";
									   
									echo "</td></tr></div>";
                      				
								
									
   
									
									 
									 

						}}}
                               ?>
                               
							
							
							 
											
				
					
					</tbody>
					
					</table> 
					 
							
		            
					<button  name="sup_submit" id="sup_submit" type="submit"  class="btn btn-primary"><i class="glyphicon glyphicon-floppy-disk"></i>Save</button>
					&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</form>
					
		
					
			 
					
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
