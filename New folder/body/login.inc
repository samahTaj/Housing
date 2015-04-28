<?php

include('includes/db.inc');


function login($mysqli) {
	
    if(isset($_POST['Login_submit']))
  {
	
	
    include('includes/db.inc');

	$VarStudentID=$_POST['SID'];
	$VarPassword =$_POST['Pass'];
	

    $pass = $VarPassword;
    $hash = sha1($pass);
   
	$q="SELECT id, pass,first_name FROM user WHERE id=$VarStudentID";
	$result=  $mysqli->query($q);
	$num_results = $result->num_rows;

	if($num_results==1)
	{  session_start();
		
   		$row = mysqli_fetch_array($result, MYSQLI_BOTH);
   		$_SESSION['login_ID'] = $row[0];
   		$_SESSION['login_Name'] = $row[2];
	if(sha1($row[1])==$hash)
   		{ header("location: users.php");}
	}}


}



?>

