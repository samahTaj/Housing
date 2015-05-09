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
        header("location: sup/daily.php");
        break;
     case 3 :
         header("location: HD/users.php");
        break;
    default:
        echo "login.php";}}
 
}}}
function login_check($mysqli){
	
	session_start();

	if(!isset($_SESSION['login_ID'])) header("Location:  ../login.php");

 	$userName  = $_SESSION['login_ID'];
}

function daily_send($mysqli) {
if( $_POST )
{
$id = $_POST['sup_id'];
$text=$_POST['text'];
$daily=$_POST['daily'];
 $query="INSERT INTO daily_needs (text,type_dn,sup_id) VALUES ('$text','$daily',$id)";
 $mysqli->query($query) ;
 
  header("location: daily.php");

}
 

else {
header("location: daily.php");
}

}

function need_send($mysqli) {
if( $_POST )
{
$id = $_POST['sup_id'];
$text=$_POST['reason'];
$need=$_POST['need'];
$type=$_POST['type'];
$other=$_POST['other'];
if($other!= null){
 $query="INSERT INTO daily_needs (other_type,text,type_dn,sup_id) VALUES ('$other','$text','$need',$id)";
 }
 else{
  $query="INSERT INTO daily_needs (type,text,type_dn,sup_id) VALUES ('$type','$text','$need',$id)";
}
$mysqli->query($query) ;
 
header("location : need.php");
}
}
?>

