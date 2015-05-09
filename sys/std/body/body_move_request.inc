<div class="page-content">
    	<div class="row">
             <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                    <li class="disabled"><a ><i class="glyphicon glyphicon-edit"></i>House Request</a></li>
                     <li class="current"><a href="move_request.php"><i class="glyphicon glyphicon-edit"></i>Move Request</a></li>
                    <li ><a href="renew_request.php"><i class="glyphicon glyphicon-edit"></i>Renew/Not Request</a></li>
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
  					 <form method="post" action="body_success_move.php">
					 <table>
					 <td> <label class="col-sm-2 control-label" for="text-field">Current Building</label></td>
					  <td>
					 <div class="col-md-3"> <?php  
					  $id=$_SESSION['login_ID'];
					  $result =  $mysqli->query("SELECT * FROM building join user  where building.b_id=user.b_id and user.id=$id ");
						$row = mysqli_fetch_assoc($result);
                                                $b=$row['b_id'];
					         echo "<h5><b>".$row['b_name']."</b></h5>";
					  ?>
					  </div></td></table>
					  
					</br></br></br> <label class="col-sm-2 control-label" for="text-field">New Building</label>
											<div class="col-md-3">
				    <p>
			  							<select class="form-control" name="building_id"  id="building_id"  required=""/ >
										     <option value="" disabled selected>Select Building</option>
										   <?php  
										   $result =  $mysqli->query("SELECT * FROM building where b_id <> $b   ");
										   while( $row1 = mysqli_fetch_assoc($result))
									        echo "<option value=\"".$row1['b_id'] ."\" >".$row1['b_name']."</option>";
											 ?>
										 
										  </select>
			  						</p> 	</div>	</br></br></br></br></br></br></br>
					 
					 <label class="col-sm-2 control-label" for="text-field">Reason </label>    
										    <div class="col-sm-5">
                                           <textarea class="form-control"   name="Reason" id="Reason" rows="3"  required=""/></textarea>
			                                      </div>
					</br></br></br></br></br></br></br>
					   <?php  
							echo"<input  name=\"id\" id=\"".$_SESSION['login_ID'] ."\" type=\"hidden\" value =\"";echo $_SESSION['login_ID'] ."\">
							<input name=\"move\" id=\"move\" value =\"move\"  type=\"hidden\" /> ";
							?>
					<input name="user_submit" id="user_submit" type="submit" value="Send" class="btn btn-primary"/> 
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
