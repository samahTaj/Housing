<?php 

if( $_POST )
{
$renew=$_POST['renew'];

 $id = $_POST['id'];
 $q1 = "select type from request where type like('$renew') and user_id=$id ";
$result=  $mysqli->query($q1);
$num_results = $result->num_rows;
if ($num_results==0)
 {
    $id = $_POST['id'];
    $want = $_POST['want'];
    $renew = $_POST['renew'];
    $Reason=$_POST['Reason'];
  
   $query = " INSERT INTO request (type,text,date,want_want_not,user_id) VALUES ('$renew', '$Reason',NOW(),'$want',$id)";
 
 $mysqli->query($query) ;
include('body/body_renew_request.inc');}
 

else {
$message = "You already submitted renew request . ";
echo "<script type='text/javascript'>alert('$message');</script>";

include('body/body_renew_request.inc');
}
}

?>