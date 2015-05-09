<?php
include('includes/db.inc');
include('includes/functions.inc');
if (login_check($mysqli) != true) header('login.php');
 if(isset($_POST['editb_submit'])  == true ){
		  edit_b($mysqli);
	 }
include('body/header.inc');
include ('body/b_add_check.inc');
include ('body/footer.inc');
?>
