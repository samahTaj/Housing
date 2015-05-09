<?php

include('includes/db.inc');


function login($mysqli) {
	
    if(isset($_POST['Login_submit']))
{
	
	
   // include('includes/db.inc');

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
        echo "Your favorite color is neither red, blue, or green!";}}
 
}}}
function login_check($mysqli){
	 if(!isset($_SESSION)) 
    { 
	session_start();

	if(!isset($_SESSION['login_ID'])) header("Location: ../login.php");

 	$userName  = $_SESSION['login_ID'];
	 
    } 
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
           header("location: role.php");

}
function delete_role($mysqli) {

$v=$_POST['role_id'];
	while (list ($key,$val) = @each ($v)) {
		$r=$val ;
    					 }
$mysqli->query("DELETE FROM role WHERE role_id=$r");
  
}

function delete_b($mysqli) {

$v=$_POST['b_id'];
	while (list ($key,$val) = @each ($v)) {
		$r=$val ;
    					 }
$mysqli->query("DELETE FROM building WHERE b_id=$r");
  
}
function edit_b($mysqli) {
$v=$_POST['b_id'];
	while (list ($key,$val) = @each ($v)) {
		$table = "select b_id from building where b_id=$val ";
       $r= $mysqli->query($table) ;
      $r= $val; 
									 }
    


if (isset($_POST['b_name'])) {
	$b_name=$_POST['b_name'];
	while (list ($key,$val) = @each ($b_name)) {
		$table = "UPDATE building SET b_name='$val' where  b_id=$r";
        $mysqli->query($table) ;
                                       	}
    
}
 
if (isset($_POST['street_no'])) {
	$street_no=$_POST['street_no'];
	
	while (list ($key,$val) = @each ($street_no)) {
		$table = "UPDATE building SET street_no='$val' where  b_id=$r";
            $mysqli->query($table) ;
	                                        }
											
}
if (isset($_POST['street_name'])) {
	$street_name=$_POST['street_name'];
	
	while (list ($key,$val) = @each ($street_name)) {
		$table = "UPDATE building SET street_name='$val' where  b_id=$r";
            $mysqli->query($table) ;
	                                        }
											
}
if (isset($_POST['building_no'])) {
	$building_no=$_POST['building_no'];
	
	while (list ($key,$val) = @each ($building_no)) {
		$table = "UPDATE building SET building_no=$val where  b_id=$r";
            $mysqli->query($table) ;
	                                        }
}
if (isset($_POST['floor_no'])) {
	$floor_no=$_POST['floor_no'];
	
	while (list ($key,$val) = @each ($floor_no)) {
		$table = "UPDATE building SET floor_no=$val where  b_id=$r";
            $mysqli->query($table) ;
	                                        }
}
if (isset($_POST['room_no'])) {
	$room_no=$_POST['room_no'];
	
	while (list ($key,$val) = @each ($room_no)) {
		$table = "UPDATE building SET room_no=$val where  b_id=$r";
            $mysqli->query($table) ;
	                                        }
}
if (isset($_POST['sup_no'])) {
	$sup_no=$_POST['sup_no'];
	
	while (list ($key,$val) = @each ($sup_no)) {
		$table = "UPDATE building SET sup_no=$val where  b_id=$r";
            $mysqli->query($table) ;
	                                        }
}
           header("location: building.php");
  
}


function accp_std($mysqli) {
 if(isset($_POST ['accp_std'])){
   $v=$_POST['user_id'];
	while (list ($key,$val) = @each ($v)) {
		$r=$val ;
    					 }
                                         
   $t=$_POST['type']; 
   echo $t;
   
   switch ($t){
       case 'house':{
       $mysqli->query("UPDATE request SET status=1 WHERE user_id=$r and type like ('house') ");
       $mysqli->query("DELETE FROM request WHERE user_id=$r and type  like('renew') ");
       $mysqli->query("DELETE FROM request WHERE user_id=$r and type  like('move') ");
       
       
            break;
             }
       case 'renew':
               {
       $mysqli->query("UPDATE request SET status=1 WHERE user_id=$r and type like ('renew') ");
       $mysqli->query("DELETE FROM request WHERE user_id=$r and type  like('house') ");
       $mysqli->query("DELETE FROM request WHERE user_id=$r and type  like('move') ");
       

   break; }
       case 'move':{
          
            $mysqli->query("UPDATE request SET status=1 WHERE user_id=$r and type like ('move') ");
            $mysqli->query("DELETE FROM request WHERE user_id=$r and type  like('renew') ");
            $mysqli->query("DELETE FROM request WHERE user_id=$r and type  like('house') ");
       

       }
   
 }
 header("location: accept_std.php");
 
       }

          

}

function rej_std($mysqli) {
 if(isset($_POST ['rej_std']));
   $v=$_POST['user_id'];
	while (list ($key,$val) = @each ($v)) {
		$r=$val ;
    					 }
$mysqli->query("UPDATE request SET status=-1 WHERE user_id=$r");
          // header("location: accept_std.php");

}

?>

