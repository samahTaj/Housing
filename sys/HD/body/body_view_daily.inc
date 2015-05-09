<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                 <ul class="nav">
                    <!-- Main menu -->
                    <li ><a href="users.php"><i class="glyphicon glyphicon-user"></i>Users</a></li>
                       <li class="submenu" class="active">
                         <a href="accept_std.php">
                            <i class="glyphicon glyphicon-list"></i> Inbox
                            <span class="caret pull-right"></span>
                         </a>
                         <!-- Sub menu -->
                         <ul >
                            <li  ><a href="accept_std.php">Student Requests </a></li>
                            <li ><a href="daily.php">Daily Documents</a></li>
							<li><a href="need.php">Special needs</a></li>
                        </ul></li>
                    </li>
                     <li><a href="role.php"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                     <li ><a href="permission.php"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
					 <li><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
                     <li><a href="building.php"><i class="glyphicon glyphicon-home"></i>building </a></li>
					 <li><a href="add_sup.php"><i class="glyphicon glyphicon-plus"></i>Add Supervisor</a></li>
					 					 


					 

                </ul>
             </div>
		  </div>
		  
  			<div class="col-md-10">

		  	<div class="content-box-large">
	       <div class="col-md-12 panel-info">
			  			<div class="content-box-header panel-heading"><p><h3><center>Daily Documents</center></h3></p></div></div>
  				<div class="panel-heading">
				
				</div>
  				<div class="panel-body">
  					<div class="table-responsive">
				
  					  <table cellpadding="0" cellspacing="0" border="0" class="table table-striped table-bordered" id="example">
						 <thead>
							<tr>
							    <th>No.&nbsp;&nbsp;</th>
								<th >Text</th>
								
								
							</tr>
						</thead>
						<tbody>
							
							<?php
							
                                                                          if($_POST['read']){
                                                                                
                                                                               $id=$_POST['read'];
                                                                                while( list ($key,$val) = @each ($id))
					          				{
									$q=$mysqli->query("select * from daily_needs  where sup_id=$val and type_dn like('daily')");
									 $c=1;
									 while($row = mysqli_fetch_assoc($q))
									 {
										 echo "<tr>";
										 echo "<td>".$c."</td>";
										 echo "<td>";
										 ?><p><?php
                     								 echo $row['text']."</p></td>";
										$c++;
										 echo "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tr>";
                                                                          } }}
						     ?>
				
					
					</tbody>
					</table> 
					</div>
  			             </div></div>
						 
						 
						 	
						  
	                  	
	
