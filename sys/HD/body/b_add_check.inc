<?php 

if( $_POST )
{


  $b_name = $_POST['b_name'];
  $street_no = $_POST['street_no'];
  $street_name = $_POST['street_name'];
  $building_no = $_POST['building_no'];
  $room_no = $_POST['room_no'];
  $floor_no = $_POST['floor_no'];
  $sup_no = $_POST['sup_no'];
  

  $query = "
  INSERT INTO building (b_name,street_no,street_name,building_no,floor_no,room_no,sup_no) 
       VALUES ('$b_name',$street_no,
        '$street_name', $building_no, $floor_no, $room_no,$sup_no)";

  $mysqli->query($query) ;

 header("location: building.php");

}

else {
include('body/body_building.inc');
}

?>
