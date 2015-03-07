<?php

session_start();
include('db.php');
		
	$myusername = $_POST['user'];
	$mypassword = $_POST['pass'];
	
	$myusername = stripslashes($myusername);
	$mypassword = stripslashes($mypassword);
	
	
	$result =  $mysqli->query("SELECT id FROM user WHERE id=$myusername and pass=$mypassword");
	$count = $result->num_rows;

	
	if($count==1){
		$seconds = 5 + time();
		setcookie(loggedin, date("F jS - g:i a"), $seconds);
		header("location:users.php");
	}else{
		echo 'Incorrect Username or Password';
	}
	
?>