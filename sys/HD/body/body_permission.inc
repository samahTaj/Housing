<body>
 
 <div class="container">
<div class="page-content">
    	<div class="row">
		  <div class="col-md-2">
		  	<div class="sidebar content-box" style="display: block;">
                <ul class="nav">
                    <!-- Main menu -->
					<li ><a href="users.php"><i class="glyphicon glyphicon-user"></i>Users</a></li>
                     <li class="submenu" >
                           <a href="#">
                            <i class="glyphicon glyphicon-inbox"></i> Inbox
                            <span class="caret pull-right"></span>
                           </a>
                            <!-- Sub menu -->
                         <ul>
                            <li  class="current"><a href="accept_std.php"> Student Requests </a></li>
                            <li><a href="daily.php"> Daily Documents</a></li>
							<li><a href="need.php"> Special needs</a></li>
                        </ul></li>
                    </li>
                    <li  ><a href="role.php"><i class="glyphicon glyphicon-stats"></i> Roles</a></li>
                    <li class="current"><a href="permission.php"><i class="glyphicon glyphicon-list"></i> Permission</a></li>
					<li><a href="fines_penalties.php"><i class="glyphicon glyphicon-tasks"></i>Fines & Penalties </a></li>
				   <li><a href="building.php"><i class="glyphicon glyphicon-home"></i>building </a></li>
		              <li  ><a href="add_sup.php"><i class="glyphicon glyphicon-plus"></i>Add Supervisor</a></li>

                </ul>
             </div>
		  </div>
		  <div class="col-md-10">
		       <div class="row">
		  		  		<div class="col-md-9">
		  			<div class="content-box-large">
		  				<div class="panel-heading">
						
		  				<div class="panel-body">
		  					<div id="rootwizard">
  						         <?php include('body/body_check_permission.inc'); ?>
           	
		  			            </div>
		  		            </div>
                              </div>
		  	            </div>
                        </div>
		                </div>
		            </div>
                		  			