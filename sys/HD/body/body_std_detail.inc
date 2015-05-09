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
                     <li><a href="role.php"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                     <li ><a href="permission.php"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
					 <li><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
                     <li><a href="building.php"><i class="glyphicon glyphicon-home"></i>building </a></li>
		              <li  ><a href="add_sup.php"><i class="glyphicon glyphicon-plus"></i>Add Supervisor</a></li>
					 

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
  					<form method="post" action="accept_std.php">
					<table cellpadding="0" cellspacing="0" border="0" class="table table-bordered">
					<thead>
							<tr>
					<?php  if(isset($_POST['more']) ){
								 $u=$_POST['more'];
                                                                  while( list ($key,$val) = @each ($u))
									{ 
								$result =  $mysqli->query("SELECT * FROM request where status=0 and user_id=$val ");
								$result1 =  $mysqli->query("SELECT * FROM user where id=$val");
								$row1 = mysqli_fetch_assoc($result1);
                                                                
                                                                
								while ( $row = mysqli_fetch_assoc($result) )
                                                  { 
								
								 $type=$row['type'];
						switch($type)
						{ case 'renew':
								 
							  
					?>
						 
							    <th >Student ID</th>
								<th >Student Name</th>
								<th>Type of Request</th>
								<th> Want/not Want</th>
								<th> Reason</th>
                                                                <th> Date </th>
								
								
								
							</tr>
						</thead>
						<tbody>
							
							<?php
							    
						       
								     $status=$row['status'];
									
									 if($status ==0)
                                                                         echo "<tr class=\"warning\">";
									 if( $status == -1)
                                                                          echo "<tr class=\"danger\"> ";
									 if($status == 1)
                                                                             echo "<tr class=\"success\"> ";
									 
									 
								 echo "<td><input type=\"hidden\" class=\"form-control\"  id=\"user_id\" name=\"user_id[]\"  value=";echo $row['user_id']." \">".$row['user_id']."</td> ";
								 echo "<td >".$row1['first_name']." ".$row1['middle_name']." ".$row1['last_name']."</td>";
                                                                 echo "<td><input type=\"hidden\" class=\"form-control\"  id=\"type\" name=\"type\"  value=";echo $row['type']." \">".$row['type']."</td>";
								 echo "<td>".$row['want_want_not']."</td>";
								 echo "<td>".$row['text']."</td>";
                                                                 echo "<td>".$row['date']."</td>";
								 echo "</tr>";
								
	                                                          break; 
							 
							         case 'house': ?>
                                                    	<thead>

							         <th >Student ID</th>
								<th >Student Name</th>
								<th>Type of Request</th>
								<th> Building ID</th>
								<th> Capacity of Room</th>
								
								
								
							         </tr>
						       </thead>
						<tbody>
							
							<?php
							    
						       
								     $status=$row['status'];
									
									 if($status ==0)
                                                                          echo "<tr class=\"warning\">";
									 if( $status == -1)
                                                                          echo "<tr class=\"danger\"> ";
									 if($status == 1)
                                                                           echo "<tr class=\"success\"> ";
									 
									 
								        echo "<td><input type=\"hidden\" class=\"form-control\"  id=\"user_id\" name=\"user_id[]\"  value=";echo $row['user_id']." \">".$row['user_id']."</td> ";
									  echo "<td >".$row1['first_name']." ".$row1['middle_name']." ".$row1['last_name']."</td>";
                                                                          echo "<td><input type=\"hidden\" class=\"form-control\"  id=\"type\" name=\"type\"  value=";echo $row['type']." \">".$row['type']."</td>";
								          echo "<td>".$row['b_id']."</td>";
									  echo "<td>".$row['room_capacity']."</td>";
								          echo "</tr>";
								  
								
								
						
						          
	                         break; 
							 case 'move': ?>
							 
						 
							    
								<th >Student ID</th>
								<th >Student Name</th>
								<th>Type of Request</th>
								<th> Building ID</th>
								<th> Reason</th>
								
								
								
							</tr>
						</thead>
						<tbody>
							
							<?php
							    
						       
								     $status=$row['status'];
									
									 if($status ==0)
                                     echo "<tr class=\"warning\">";
									 if( $status == -1)
                                     echo "<tr class=\"danger\"> ";
									 if($status == 1)
                                     echo "<tr class=\"success\"> ";
									 
									 
								 echo "<td><input type=\"hidden\" class=\"form-control\"  id=\"user_id\" name=\"user_id[]\"  value=";echo $row['user_id']." \">".$row['user_id']."</td> ";
							         echo "<td >".$row1['first_name']." ".$row1['middle_name']." ".$row1['last_name']."</td>";
                                                                 echo "<td><input type=\"hidden\" class=\"form-control\"  id=\"type\" name=\"type\"  value=";echo $row['type']." \">".$row['type']."</td>";
								 echo "<td>".$row['b_id']."</td>";
								 echo "<td>".$row['text']."</td>";
								   
									
								    echo "</tr>";
								  
								
								
						
						          
	                         break; 
							 }}}}
                               ?>
							
							
							 
											
				
					
					</tbody>
					
					</table>&nbsp;&nbsp;&nbsp;&nbsp;</td>  
					
					<table>
                                            
					<td><button  name="user_submit" id="user_submit" type="submit" value="Back" class="btn btn-default">Cancel </button>&nbsp;&nbsp;&nbsp;&nbsp;</td>  
					
		            
					<td><button  name="accp_std" id="accp_std" type="submit" value="Accept" class="btn btn-success"><i class="glyphicon glyphicon-ok"></i> Accept </button></td>
					<td>&nbsp;&nbsp;&nbsp;&nbsp;<button  class="btn btn-danger" type="submit" value="Reject"  name="rej_std" id="rej_std"><i class="glyphicon glyphicon-remove"></i>Reject</button></td>
												
		
					
			 
					
			             </table></form>
  				</div>
  			</div>



		  </div>
		</div>
    </div>

		  			</div>
		  		