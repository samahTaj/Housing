<div class="page-content">
    	<div class="row">
		  
		  <div class="col-md-10">

		  	<div class="row">
  			</div>
 <form method="post" action="fines_penalties.php">
  			<div class="content-box-large">
  				<div class="panel-heading">
				</div>
  				<div class="panel-body">
  					<div class="responsive">
  					
		  				 
		  					<div class="content-box-header"><br/>
                                                            <div class="panel-title"><h1><i class="fa fa-user"></i> Profile</h1>
								</div>
								
                                                            <br/><br/><br/>
				  			</div>
				  			<div class="content-box-large box-with-header">
				  			  
                                                            <?php
							    $id=$_SESSION['login_ID'];
								$result =  $mysqli->query("SELECT * FROM student_profile where user_id=$id");
                                                                $result1 =  $mysqli->query("SELECT * FROM user where id=$id");
                                                                $row1 = mysqli_fetch_assoc($result1);
							        $row = mysqli_fetch_assoc($result);
                                                                   
								       echo"<h4><ul class=\"nav\">";
                                                                       echo"<li>Name : ".$row1['first_name']." ".$row1['middle_name']." ".$row1['last_name']." "."</li>";
                                                                       echo"<br/><li>City  : ".$row1['city']."</li>";
				                                       echo"<br/><li>State  : ".$row1['state']."</li>";
                                                                       echo"<br/><li>Residential Area : ".$row1['residential_area']."</li>";
                                                                       echo"<br/><li>phone : ".$row1['phone']."</li>";
                                                                       echo"<br/><li>Date of birth  : ".$row['date_of_birth']."</li>";
				                                       echo"<br/><li>Place of birth  : ".$row['place_of_birth']."</li>";
                                                                       echo"<br/><li>Religion : ".$row['religion']."</li>";
                                                                       echo"<br/><li>Nationality : ".$row['nationality']."</li>";
                                                                       echo"<br/><li>Faculty : ".$row['faculty']."</li>";
                                                                       echo"<br/><li>Department : ".$row['department']."</li> ";
                                                                       echo"<br/><li>Guardian Name : ".$row['guardian_name']."</li> ";
                                                                       echo"<br/><li>Guardian Phone : ".$row['guardian_phone']."</li> ";
                                                                       echo"<br/></ul></h4>";
								  
                                                                  
?>
           
		                                             	
                                                        
		  				</div>
		  			</div></div>
                                            <input name="back" id="back" type="submit" value="Back" class="btn btn-primary"/> 
                                            </div></form>
		  	</div>

						<br /><br />					
					
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
