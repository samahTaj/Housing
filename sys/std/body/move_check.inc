<?php 

if( $_POST )
{
$move=$_POST['move'];

 $id = $_POST['id'];
 $q1 = "select type from request where type like('$move') and user_id=$id ";
$result=  $mysqli->query($q1);
$num_results = $result->num_rows;
if ($num_results==0)
 {
    $id = $_POST['id'];
    $building_id = $_POST['building_id'];
    $move = $_POST['move'];
    $Reason=$_POST['Reason'];
  
   $query = " INSERT INTO request (type,text,date,user_id,b_id) VALUES ('$move','$Reason', NOW(),$id,$building_id)";
 
 $mysqli->query($query) ;
 

include('body/body_move_request.inc');}
 

else {

include('body/body_move_request.inc');
}
}

?>