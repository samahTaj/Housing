<?php
include('includes/db.inc');
include('includes/functions.inc');
if (login_check($mysqli) != true) header('login.php');
if(isset($_POST['accp_std'])  == true ){
		  accp_std($mysqli);
	 }
	if(isset($_POST['rej_std'])  == true ){
		  rej_std($mysqli);
	 }
include('body/header.inc');
include('body/body_std.inc');

include ('body/footer.inc');
?>
