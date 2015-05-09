<?php
include('includes/db.inc');
include('includes/functions.inc');
if (login_check($mysqli) != true) header('login.php');

	 if(isset($_POST['addrole_submit'])  == true ){
		  add_role($mysqli);
	 }
	  if(isset($_POST['editrole_submit'])  == true ){
		  edit_role($mysqli);
	 }
	  if(isset($_POST['deleterole_submit'])  == true ){
		  delete_role($mysqli);
	 }
                                  
	
include('body/header.inc');
include('body/body_roleedit.inc');
include ('body/footer.inc');
?>

   
