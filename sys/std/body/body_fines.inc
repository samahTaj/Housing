<!-- jQuery UI -->
    <link href="https://code.jquery.com/ui/1.10.3/themes/redmond/jquery-ui.css" rel="stylesheet" media="screen">

    
<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
					<?php $id=$_SESSION['login_ID'];
					       $q1 = "select status from request where user_id=$id ";
                                                  $result=  $mysqli->query($q1);
						  $row = mysqli_fetch_assoc($result);
						  
                                                  $q2 = "select * from request where type like('house') and status=1 and user_id=$id ";
                                                  $result2=  $mysqli->query($q2);
                                                  $row2 = mysqli_fetch_assoc($result2);
                                                  $num_results = $result2->num_rows;
						 
                                                  
                                                   if ( $row2['status']==1)
{ 
                                                          echo " <li class=\"disabled\"><a><i class=\"glyphicon glyphicon-edit\"></i>House Request</a></li>";
                                                          echo " <li ><a href=\"move_request.php\"><i class=\"glyphicon glyphicon-edit\"></i>Move Request</a></li>";
                                                          echo "<li ><a href=\"renew_request.php\"><i class=\"glyphicon glyphicon-edit\"></i>Renew/Not Request</a></li>";
                                                          }
                                                    else 
                                                        { 
                                                          echo " <li ><a href=\"house_request.php\"><i class=\"glyphicon glyphicon-edit\"></i>House Request</a></li>";
                                                          echo " <li class=\"disabled\"><a ><i class=\"glyphicon glyphicon-edit\"></i>Move Request</a></li>";
                                                          echo "<li class=\"disabled\"><a ><i class=\"glyphicon glyphicon-edit\"></i>Renew/Not Request</a></li>";
                                                           }
                                                     ?>
                    
                    			
                                                      <li class="current"><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
    

                    
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
					               <table cellpadding="0" cellspacing="0" border="0"  class="table table-striped table-bordered" >
						<thead>
							<tr>
							   
								<th>Type</th>
								<th>Value</th>
								<th>Reason</th>
								
								
							</tr>
						</thead>
						<tbody>
  						<?php
						$u= $_SESSION['login_ID'];
							
								$result =  $mysqli->query("SELECT * FROM  fines_penalties where id=$u ");
								
						        $count = $result->num_rows;
						        //$count1 = $result1->num_rows;
							  if ($count!=0){
						       while ( $row = mysqli_fetch_assoc($result) )
                                {  echo "</tr>";
								  echo "<td>".$row['type']."</td>";
								  echo "<td>".$row['value']." JD </td>";
						           echo "<td>".$row['reason']."</td>";
								   
									echo "</tr></div>";
                      				}}
									else {
									 echo "<tr><td colspan=\"3\"><center>You don't have fines/penalties</center></td></tr>";
									}
									?>  
                                						</form>
<br/>
<br/>	</tbody></table> 
				
		</form>
					
		
  		   </div>
  		</div>
             </div>
         </div>
    </div>
</div>
		  		
 
	
