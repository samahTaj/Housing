<?php 

if( $_POST )
{
$house=$_POST['house'];

 $id = $_POST['id'];
 $q1 = "select type from request where type like('$house') and user_id=$id ";
$result=  $mysqli->query($q1);
$num_results = $result->num_rows;
if ($num_results==0)
 {
 $building_id = $_POST['building_id'];
  $capacity_of_room = $_POST['capacity_of_room'];
  $house=$_POST['house'];
  $date=date(DATE_RFC822);
 $query="INSERT INTO request (type,date,room_capacity,user_id,b_id) VALUES ('$house', NOW(),$capacity_of_room,$id,$building_id)";
 $mysqli->query($query) ;
 
 $message = "Your House Request is Sent";
echo "<script type='text/javascript'>alert('$message');</script>";


include('body/body_house_request.inc');}
 

else {
$message = "You already Select this building";
echo "<script type='text/javascript'>alert('$message');</script>";

include('body/body_house_request.inc');
}}

?>
