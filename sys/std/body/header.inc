<?php $userName  = $_SESSION['login_Name']; ?><!DOCTYPE html>
<html>
  <head>
     
    <title>Housing Management System </title>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <!-- jQuery UI -->
    <link href="https://code.jquery.com/ui/1.10.3/themes/redmond/jquery-ui.css" rel="stylesheet" media="screen">

    <!-- Bootstrap -->
    <link href="bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <!-- styles -->
    <link href="css/styles.css" rel="stylesheet">

    <link href="//netdna.bootstrapcdn.com/font-awesome/4.0.3/css/font-awesome.css" rel="stylesheet">
    <link href="vendors/form-helpers/css/bootstrap-formhelpers.min.css" rel="stylesheet">
    <link href="vendors/select/bootstrap-select.min.css" rel="stylesheet">
    <link href="vendors/tags/css/bootstrap-tags.css" rel="stylesheet">

    <link href="css/forms.css" rel="stylesheet">

    <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
    <!--[if lt IE 9]>
      <script src="https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js"></script>
      <script src="https://oss.maxcdn.com/libs/respond.js/1.3.0/respond.min.js"></script>
    <![endif]-->
	<link rel="shortcut icon" type="image/x-icon" href="images\Science-School-icon.png" /></head>
  <body  >
 
  	<div style="background-color:#0085b5"   class="header">
	     <div class="container" >
	        <div class="row">
	           <div class="col-md-5">
	              <!-- Logo -->
	              <div class="logo">
	             <h1 ><a href="users.php"> Housing Management System</a></h1> 
	             </div>
	           </div>
	           
	            <div class="navbar navbar-inverse" role="banner">
	                  <nav class="collapse navbar-collapse bs-navbar-collapse navbar-right" role="navigation">
	                    <ul class="nav navbar-nav" role="navigation">
	                      <li class="dropdown">
	                           <a class="dropdown-toggle" data-toggle="dropdown"><?php 
                                            if(isset($userName)) echo "Welcome ".$userName ; ?> <b class="caret"></b></a>
	                             <ul class="dropdown-menu animated fadeInUp">
	                             <li><a href="profile.php" ><i class="fa fa-user"></i> Profile </a></li>
                                     <li><a href="logout.php"><i class="glyphicon glyphicon-log-out"></i>Logout</a></li>
	                           </ul>
	                      </li>
					
	                    </ul>
						
	                  </nav> 
	              </div>
	           
	        </div><br/><br/>
	     </div>
		 <br/><br/>
	</div>	

 <div class="container">
