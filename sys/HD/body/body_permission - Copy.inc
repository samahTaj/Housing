<body>
 
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
                    <li  ><a href="role.php"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                    <li class="current"><a href="permission.php"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
					<li><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
				   <li><a href="building.php"><i class="glyphicon glyphicon-home"></i>building </a></li>
		              <li  ><a href="add_sup.php"><i class="glyphicon glyphicon-plus"></i>Add Supervisor</a></li>

                </ul>
             </div>
		  </div>
		  <div class="col-md-10">
		  		  		<div class="col-md-9">
		  			<div class="content-box-large">
		  				<div class="panel-heading">
						
		  				<div class="panel-body">
		  					<div id="rootwizard">
  						        <form method="post" action="body_success_permission.php">
 <table class="table">
			              <thead>
			                <tr>
			                  <th class="style2">Permission</th>
			                  <th class="style1" id="1">Housing Department</th>
			                  <th class="style1" id="2">Supervisor</th>
			                  <th class="style1" id="3"> Student</th>
			                </tr>
			              </thead>
			              <tbody>
			              	<?php
									$result=$mysqli->query("select * from permission");
									
                                     
                               		
									
                                   while($row = mysqli_fetch_assoc($result))
                                   
                      			{	
							echo "<div class=\"input-group\">";
							echo "<tr  > ";
			                echo "<td class=\"style2\">".$row['permission_name']."</td>";
			                echo "<label><td class=\"style1\">&nbsp;<label><input type=\"checkbox\" name=hd[] value=\"1\"  ></label></td>";
			                echo "<td><label><input type=\"checkbox\" name=sup[] value=\"1\" ></label></td>";
			                echo "<td><label><input type=\"checkbox\" name=std[]  value=\"1\" ></label></td>";
			                echo "</tr>";
								}	
   
									
									 
									 

						?> 
										
			              </tbody>
			            </table>
						           
	                                       <div class="col-md-12">
												&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
												<button class="btn btn-default" type="reset">
													      Reset
												</button> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;
												<button class="btn btn-primary" type="submit" name="sub">
													<i class="fa fa-save"></i>
													Submit
												</button>
											&nbsp;</div></form>
											
		  			            </div>
		  		            </div>
                              </div>
		  	            </div>
                        </div>
		                </div>
		            </div>
                		  			