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
	$q1="SELECT role_role_id  FROM user_has_role WHERE user_id=$VarStudentID";
	$result1=  $mysqli->query($q1);
	$num_results = $result->num_rows;

	if($num_results==1)
{  session_start();
		
   		$row = mysqli_fetch_array($result, MYSQLI_BOTH);
		$row1 = mysqli_fetch_array($result1);
   		$_SESSION['login_ID'] = $row[0];
   		$_SESSION['login_Name'] = $row[2];

	
	if(sha1($row[1])==$hash){
	switch($row1['role_role_id']) {
    case 1:
        header("location: std/house_request.php");
        break;
    case 2:
        header("location: std/house_request.php");
        break;
    case 3 :
        echo "Your favorite color is green!";
        break;
    default:
        echo "Your favorite color is neither red, blue, or green!";}}
 
}}}
function login_check($mysqli){
	
	session_start();

	if(!isset($_SESSION['login_ID'])) header("Location:  ../login.php");

 	$userName  = $_SESSION['login_Name'];
	$userID  = $_SESSION['login_ID'];
}

function add_role($mysqli) {
$t=false;
$V=$_POST['role_name'];

$q="SELECT role_name FROM role WHERE role_name like ('$V')";
$result=  $mysqli->query($q);
$num_results = $result->num_rows;


if ($num_results==0) 
       { $mysqli->query("INSERT INTO role (role_name)values('$V')");
            
		$t= true;	
		}
return $t;	
	  


 	

}


function edit_role($mysqli) {
	
$v=$_POST['role_id'];
	while (list ($key,$val) = @each ($v)) {
		$r=$val ;
    					 }

$N=$_POST['role_name'];
$mysqli->query("UPDATE role SET role_name =('$N') WHERE role_id=$r");
  
}
function delete_role($mysqli) {

$v=$_POST['role_id'];
	while (list ($key,$val) = @each ($v)) {
		$r=$val ;
    					 }
$mysqli->query("DELETE FROM role WHERE role_id=$r");
  
}
function delete_user($mysqli) {

$v=$_POST['user'];
	while (list ($key,$val) = @each ($v)) {
		$r=$val ;
    					 }
$mysqli->query("DELETE FROM user WHERE role_id=$r");
  
}
?>

