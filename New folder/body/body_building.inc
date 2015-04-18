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
					 <li ><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
					<li class="current"><a href="building.php"><i class="glyphicon glyphicon-home"></i>building </a></li>

                    
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
  					 <form method="post" action="body_success_building.php">
					                  <div class="form-group">
											<label class="col-sm-1 control-label" for="text-field">Building Name</label>
											<div class="col-md-2">
												<input class="form-control" name="b_name"  id="b_name" placeholder="name" type="text">
											</div>
										</div><br/><br/><br/>
										<br/><br/><span style="background-color:#0085b5" class="input-group-addon"><i class="glyphicon glyphicon-map-marker"></i><strong >Address</strong> </span><legend></legend>
										

										<div class="form-group">
										
											<label class="col-sm-1 control-label" for="text-field">Street No</label>
											<div class="col-md-2">
												<input class="form-control" name="street_no"  id="street_no" placeholder="no" type="number" min="0">
											</div>
										</div>				
                                  <div class="form-group">
										
											<label class="col-sm-1 control-label" for="text-field">Street Name</label>
											<div class="col-md-2">
												<input class="form-control" name="street_name"  id="street_name" placeholder="street name" type="text">
											</div>
										</div>	
                                    <div class="form-group">
										
											<label class="col-sm-1 control-label" for="text-field">Building No</label>
											<div class="col-md-2">
												<input class="form-control" name="building_no"  id="building_no" placeholder="no" type="number" min="0">
											</div>
										</div>												
										<br/><br/><br/>
                                       <br/><br/> <span style="background-color:#0085b5" class="input-group-addon"><i class="glyphicon glyphicon-align-center"></i><strong> Room/Floor</strong></span><legend></legend>
										<label class="col-sm-1 control-label" for="text-field">Number of Room</label>
											<div class="col-md-2">
												<input class="form-control" name="room_no"  id="room_no" placeholder="no" type="number" min="0">
											</div>
										</div>	
										<label class="col-sm-1 control-label" for="text-field">Number of Floor</label>
											<div class="col-md-2">
												<input class="form-control" name="floor_no"  id="floor_no" placeholder="no" type="number" min="0">
											</div><br/><br/><br/>
											
		             								<br/><br/> <span style="background-color:#0085b5" class="input-group-addon"><i class="glyphicon glyphicon-user"></i><strong> Supervisor</strong></span><legend></legend>
										<label class="col-sm-1 control-label" for="text-field">Number of Supervisor</label>
											<div class="col-md-2">
												<input class="form-control" name="sup_no"  id="sup_no" placeholder="no" type="number" min="0">
											</div>
			  					<br/><br/>

					<br/><br/><br/>
					<input name="user_submit" id="user_submit" type="submit" value="submit" class="btn btn-primary"/> 
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
	
