<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                    <li class="current"><a href="house_request.php"><i class="glyphicon glyphicon-edit"></i>House Request</a></li>
  
                     <li class="disabled"><a ><i class="glyphicon glyphicon-edit"></i>Move Request</a></li>
                     <li class="disabled"><a ><i class="glyphicon glyphicon-edit"></i>Renew/Not Request</a></li>
					 <li><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
                    			
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
  					 <form method="post" action="body_success_house.php">
					 <label class="col-sm-2 control-label" for="text-field">Buildinng Name</label>
											<div class="col-md-3">
				    <p>
			  							<select class="form-control" name="building_id"  id="building_id"  required=""/ >
										     <option value="" disabled selected>Select Building</option>
										   <?php  
										   $result =  $mysqli->query("SELECT * FROM building");
										   while( $row = mysqli_fetch_assoc($result))
									        echo "<option value=\"".$row['b_id'] ."\" >".$row['b_name']."</option>";
											?>
                                           							
										  </select>
			  						</p> 	</div>	</br></br></br></br>
					 
					 <label class="col-sm-2 control-label" for="text-field">Capacity_of Room </label>    
							<div class="col-md-2"><input class="form-control"  name="capacity_of_room" id="capacity_of_room" type="number" min="1"  required=""/>
			                </div>
							  <?php  
							echo"<input  name=\"id\" id=\"".$_SESSION['login_ID'] ."\" type=\"hidden\" value =\"";echo $_SESSION['login_ID'] ."\">
							<input name=\"house\" id=\"house\" value =\"house\"  type=\"hidden\" /> ";
							?>	
							
					</br></br></br></br>
					<input name="house_submit" id="house_submit" type="submit" value="Send" class="btn btn-primary"/> 
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
