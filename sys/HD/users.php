<?php
include('includes/db.inc');
include('includes/functions.inc');
if (login_check($mysqli) != true) header('../login.php');
if(isset($_POST['deleteuser_submit'])  == true ){
		  delete_user($mysqli);
	 }
include('body/header.inc');
include('body/body_user.inc');

include ('body/footer.inc');
?>
