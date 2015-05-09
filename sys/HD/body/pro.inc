<div class="page-content">
    	<div class="row">
		  
		  <div class="col-md-10">

		  	<div class="row">
  			</div>
 <form method="post" action="users.php">
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
								$result =  $mysqli->query("SELECT * FROM user where id=$id");
                                                                $result2 =  $mysqli->query("SELECT * FROM  user join building where building.b_id=user.b_id and user.id=$id");
                                                                
                                                                $row = mysqli_fetch_assoc($result);
                                                                $row2 = mysqli_fetch_assoc($result2);
                                                                  
								       echo"<h4><ul class=\"nav\">";
                                                                       echo"<li>Name : ".$row['first_name']." ".$row['middle_name']." ".$row['last_name']." "."</li>";
                                                                       echo"<br/><li>City  : ".$row['city']."</li>";
				                                       echo"<br/><li>State  : ".$row['state']."</li>";
                                                                       echo"<br/><li>Residential Area : ".$row['residential_area']."</li>";
                                                                       echo"<br/><li>phone : ".$row['phone']."</li>";
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
