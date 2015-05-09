<?php
include('includes/db.inc');
include('includes/functions.inc');
if (login_check($mysqli) != true) header('login.php');

			                                     
if(isset($_POST['deleteb_submit'])  == true ){
		  delete_b($mysqli);
	 }
	 if(isset($_POST['editb_submit'])  == true ){
		  edit_b($mysqli);
	 }
	 
include('body/header.inc');
include('body/body_building.inc');
include ('body/footer.inc');
?>

   
