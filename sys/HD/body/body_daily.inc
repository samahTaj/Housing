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

		  	<div class="row">
  			</div>

  			<div class="content-box-large">
  				<div class="panel-heading">
				</div>
  				<div class="panel-body">
  					<div class="table-responsive">
  					<form method="post" action="view_daily.php">
					<table cellpadding="0" cellspacing="0" border="0" class="table table-bordered" id="example">
						 <thead>
							<tr>
							    <th >ID. </th>
							    <th>Supervisor Name</th>
								
								  <th>Text</th>
														
								
							</tr>
						</thead>
						<tbody>
							
							<?php
							          $result1 =  $mysqli->query("SELECT * FROM user join daily_needs where user.id=daily_needs.sup_id  and daily_needs.type_dn like ('daily') group by user.id  ");
					                              
                                                                           while ( $row1= mysqli_fetch_assoc($result1)){
                                                                               $v=$row1['id'];
                                                                                echo "<td><input type=\"hidden\" id=\"";echo $row1['id']."\" name=\"sup\" value=\"";echo $row1['id']."\">".$row1['id']."</td>";
								    		
						                                echo "<td>".$row1['first_name']."</td>";
									        echo "<td><button  class=\"btn btn-primary btn-xs\" type=\"submit\" name=\"read[]\" id=\"read[]\"  value=$v><i class=\"glyphicon glyphicon-eye-open\"></i>&nbsp;&nbsp; See  </button></td>";
                                                                                echo "</tr>";
									       }
								 
								       
					                 ?>
							
					         </tbody>
					</table> 
			
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
