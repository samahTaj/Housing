<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                    <li ><a href="daily.php"><i class="glyphicon glyphicon-book"></i>Daily Document</a></li>
                     <li ><a href="need.php"><i class="glyphicon glyphicon-list-alt"></i>Special Needs</a></li>
					<li class="current"><a href="view.php"><i class="glyphicon glyphicon-eye-open"></i> View Daily Document and Special Needs</a></li>


                                  </ul>
             </div>
		  </div>
		  
  			<div class="col-md-10">

		  	<div class="content-box-large">
	       <div class="col-md-12 panel-info">
			  			<div class="content-box-header panel-heading"><p><h3><center>Daily Documents</center></h3></p></div></div>
  				<div class="panel-heading">
				
				</div>
  				<div class="panel-body">
  					<div class="table-responsive">
				
  					  <table cellpadding="0" cellspacing="0" border="0" class="table table-striped table-bordered" id="example">
						 <thead>
							<tr>
							    <th>No.&nbsp;&nbsp;</th>
								<th >Text</th>
								
								
							</tr>
						</thead>
						<tbody>
							
							<?php
							 $id=$_SESSION['login_ID'];
															$q=$mysqli->query("select * from daily_needs where sup_id=$id and type_dn like('daily')");
															 $c=1;
															 while($row = mysqli_fetch_assoc($q))
															 {
															 echo "<tr>";
															 echo "<td>".$c."</td>";
															 
															 echo "<td>";
													?><p><?php

															 
															 echo $row['text']."</p></td>";
															$c++;
															 echo "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tr>";
															 } 
						     ?>
				
					
					</tbody>
					</table> 
					</div>
  			             </div></div>
						 
						 
						 	<div class="content-box-large">
	                       <div class="col-md-12 panel-info">
			  			<div class="content-box-header panel-heading"><p><h3><center>Special Needs</center></h3></p></div></div>
  			       	<div class="panel-heading">
				
				</div>
				
  				<div class="panel-body">
                 <div class="table-responsive">				
  					<form method="post" action="body_success_edit_building.php">
					
  					  <table cellpadding="0" cellspacing="0" border="0" class="table table-striped table-bordered" id="example">
						 <thead>
							<tr>
							    <th>No.&nbsp;&nbsp;</th>
								<th >Reason</th>
								
								
							</tr>
						</thead>
						<tbody>
							
							<?php
							 $id=$_SESSION['login_ID'];
															$q=$mysqli->query("select * from daily_needs where sup_id=$id and type_dn like('need')");
															 $c=1;
															 while($row = mysqli_fetch_assoc($q))
															 {
															 echo "<tr>";
															 echo "<td>".$c."</td>";
															 
															 echo "<td>";
													?><div id="textarea" disabled="true"><?php

															 
															 echo $row['text']."</div></td>";
															$c++;
															 echo "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tr>";
															 } 
						     ?>
				
					
					</tbody>
					</table> 
					
							   	</form>
		
					</div>
  			             </div>
						  </div>
						  
	                  	
	
