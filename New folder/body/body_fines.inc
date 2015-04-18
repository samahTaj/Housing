<!-- jQuery UI -->
    <link href="https://code.jquery.com/ui/1.10.3/themes/redmond/jquery-ui.css" rel="stylesheet" media="screen">

<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                    <li ><a href="users.php"><i class="glyphicon glyphicon-user"></i>Users</a></li>
  
                    <li><a href="role.php"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                     <li ><a href="permission.php"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
					 <li class="current"><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
					 					<li><a href="building.php"><i class="glyphicon glyphicon-home"></i>building </a></li>

                    
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
  					 <form method="post" action="body_success_fp.php">
					                  <div class="form-group">
											<label class="col-sm-1 control-label" for="text-field">Unversity ID.</label>
											<div class="col-md-2">
                                    <p>
			  							<select class="form-control" name="un_id"  id="un_id" >
										     <option value="" disabled selected>Select id</option>
										   <?php  
										   $result =  $mysqli->query("SELECT * FROM user_has_role where role_role_id=1");
										   while( $row = mysqli_fetch_assoc($result))
									        echo "<option>".$row['user_id']."</option>";
											 ?>
										 
										  </select>
			  						</p> 											</div>
										</div>					<br/><br/><br/><br/>

										<div class="form-group">
										
										<label class="col-sm-1 control-label" for="text-field">value</label>
											<div class="col-md-2">
												<input class="form-control" name="valuef"  id="valuef" placeholder="value" type="text">
											</div>
										</div>					<br/><br/><br/>

										<div class="form-group">
											<label class="col-md-1 control-label" for="text-field">Type</label>
											<div class="col-md-2">
									<p>
			  							<select class="form-control" name="typef"  id="typef">
										   <option value="" disabled selected>Select type</option>
											<option>fine</option>
										    <option>penalty</option>
										 
										  </select>
			  						</p> 
									<span class="note"><strong>Note:</strong>imposition the penalties and fines against the student.</span></div></div>
										<br/><br/><br/><br/><br/>
									<div class="form-group">
										    <label class="col-sm-1 control-label">Reason</label>
										    <div class="col-sm-5">
										      <textarea class="form-control" placeholder="Reason" name="reason"  id="reason" rows="3"></textarea>
										    </div>
										  </div>
			  					<br/><br/>

					<br/><br/><br/>
					<input name="fp_submit" id="fp_submit" type="submit" value="submit" class="btn btn-primary"/> 
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
	
