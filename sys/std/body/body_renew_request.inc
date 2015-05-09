<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                      <?php 
                      $id = $_SESSION['login_ID'];
                    $q1 = "select * from request where want_want_not like('want not') and status=1 and user_id=$id ";
                     $result=  $mysqli->query($q1);
                     $num_results = $result->num_rows;
                     if ($num_results==1)
                     { 
                      header("location: house_request.php");
                     }
                    else{ 
                     echo " <li class=\"disabled\"><a><i class=\"glyphicon glyphicon-edit\"></i>House Request</a></li>";
                     echo " <li ><a href=\"move_request.php\"><i class=\"glyphicon glyphicon-edit\"></i>Move Request</a></li>";
                      echo "<li class=\"current\"><a href=\"renew_request.php\"><i class=\"glyphicon glyphicon-edit\"></i>Renew/Not Request</a></li>";
		      echo "<li><a href=\"fines_penalties.php\"><i class=\"glyphicon glyphicon-tasks\"></i>Fines & Penalties </a></li>";
                       }
                                         ?>
                    			
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
  					 <form method="post" action="body_success_renew.php">
					        <div class="radio">
						       <label><input type="radio" name="want" id="want" value="want">I want to renew the enrollment in housing </label>
						</div>
						<div class="radio">
						       <label><input type="radio" name="want" id="want" value="want ">I don't want to renew the enrollment in housing </label>
						</div>
                                               </br></br>
					                <label class="col-sm-2 control-label" for="text-field">Reason  </label>    
						<div class="col-sm-5">
                                                        <textarea class="form-control"   name="Reason" id="Reason" rows="3"  required=""/></textarea>
			                        </div>
							<?php  
							echo"<input  name=\"id\" id=\"".$_SESSION['login_ID'] ."\" type=\"hidden\" value =\"";echo $_SESSION['login_ID'] ."\">
							<input name=\"renew\" id=\"renew\" value =\"renew\"  type=\"hidden\" /> ";
							?>
				                 </br></br></br></br></br></br></br>
					<input name="user_submit" id="user_submit" type="submit" value="Send" class="btn btn-primary"/> 
		                         </form>
					
		
  				       </div>
  			        </div>
                        </div>
		   </div>
        </div>
</div>
		  		