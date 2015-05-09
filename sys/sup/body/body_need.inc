
<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
                    <li ><a href="daily.php"><i class="glyphicon glyphicon-book"></i>Daily Document</a></li>
                     <li class="current"><a href="need.php"><i class="glyphicon glyphicon-list-alt"></i>Special Needs</a></li>
					<li><a href="view.php"><i class="glyphicon glyphicon-eye-open"></i> View Daily Document and Special Needs</a></li>

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
					<input type="hidden" value="need" id="need" name="need" >

                      <table  class="table" cellspacing="0" cellpadding="0">
                        <thead><tr><td>
                       <div class="form-group"><label class="col-sm-1 control-label">Type</label> 
				         <div class="col-md-10">
							<select onchange="display(this,'text');"  name="type" multiple="multiple" id="type" class="form-control custom-scroll" title="Click to Select a City" onchange="showDiv(this)">
													<option  value>Internt</option>
													<option selected="selected">Gas</option>
													<option>Water</option>
													<option>Electricity</option>
													<option>Buenos Aires</option>
													<option>Building Rapiar</option>
													<option value="text" >other</option>
													
												</select>
											</div></div>
											
</td>
</tr>
</thead>

<tbody id="text" style="display: none;">
<tr>
<td >Other</td>
<td ><input class="form-control" type="text" name="other" id="other"  /></td>
</tr>
</tbody>
    	
<br/>
<br/>
						
				
						</tbody>
					</table> <div class="form-group">
 <label class="col-sm-1 control-label">Reason  </label>
 <div class="col-md-10">
 <textarea class="form-control" placeholder="Reason" name="reason"  id="reason" rows="4"></textarea>
 </div>  </div>
				
	                                        <div class="col-md-12">
												<br/><br/>
									<button class="btn btn-primary" type="submit" name="need_sub">
													<i class="fa fa-save"></i>
													Send
												</button></form>
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
	