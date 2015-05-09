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
											