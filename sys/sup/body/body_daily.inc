
<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                    <li class="current"><a href="daily.php"><i class="glyphicon glyphicon-book"></i>Daily Document</a></li>
                     <li><a href="need.php"><i class="glyphicon glyphicon-list-alt"></i>Special Needs</a></li>
					<li><a href="view.php"><i class="glyphicon glyphicon-eye-open"></i>View Daily Document and Special Needs</a></li>

                  
					 

                    
                </ul>
             </div>
		  </div>
		  <div class="col-md-10">
		  	<div class="row">
		  		<div class="col-md-9">

  			<div class="content-box-large">
  				<div class="panel-heading">
				<div class="panel-options">
							</div>
  				<div class="panel-body">
  					<div class="table-responsive">
  					 <form method="post" action="">
					 <input type="hidden" value="<?php echo $_SESSION['login_ID']; ?>" id="sup_id" name="sup_id" >
					<input type="hidden" value="daily" id="daily" name="daily" >

					<div class="panel-body">
            <textarea id="ckeditor_standard"  name="text"></textarea>
          </div>

    	
<br/>
<br/>
			
	                                        <div class="col-md-12">
										&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; </td> 
											<button class="btn btn-primary" type="submit" name="daily_sub">
													<i class="glyphicon glyphicon-send"></i>
													Send
												</button>&nbsp;</form>
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
    </div>
  