<?php
include('includes/db.inc');
include('includes/functions.inc');
if (login_check($mysqli) != true) header('login.php');

	 if(isset($_POST['deleteb_submit'])  == true ){
		  delete_b($mysqli);
	 }
		                                     
	
include('body/header.inc');
include('body/body_bdelete.inc');
include ('body/footer.inc');
?>

   
