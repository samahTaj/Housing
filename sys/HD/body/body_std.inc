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
  					<form method="post" action="more_detial.php">
					<table cellpadding="0" cellspacing="0" border="0" class="table table-bordered" id="example">
						 <thead>
							<tr>
							    <th></th>
								<th >Student ID</th>
							        <th>Type</th>
								<th></th>
								
								
							</tr>
						</thead>
						<tbody>
							
							<?php
							  
								$result =  $mysqli->query("SELECT * FROM request where status = 0");
								
							  
						       while ( $row = mysqli_fetch_assoc($result) )
                                { 
								    $status=$row['status'];
									
									 if($status ==0)
                                     echo "<tr class=\"warning\">";
									 if( $status == -1)
                                     echo "<tr class=\"danger\"> ";
									 if($status == 1)
                                     echo "<tr class=\"success\"> ";
									 
									
 
								     echo "<td><input type=\"hidden\"  name=\"user\" id=";echo $row['user_id']." value=";echo $row['user_id'].">".$row['user_id']."</td> ";
						            echo "<td>".$row['user_id']."</td>";
                                                            echo "<td>".$row['type']." request </td>";
								    
								   echo "<td><button  class=\"btn btn-primary btn-xs\" type=\"submit\" name=\"more[]\" id=\"more[]\"  value=";echo $row['user_id']."> More Detail </button></td>";

									
								    echo "</tr>";
								  
								}
								
						
						          
	                    
                               ?>
							
							
							 
											
				
					
					</tbody>
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
