<?php 

if( $_POST )
{


  $un_id = $_POST['un_id'];
  $value = $_POST['valuef'];
  $type = $_POST['typef'];
  $reason = $_POST['reason'];

  $query = "
  INSERT INTO fines_penalties (id,value,type,reason) VALUES ($un_id,'$value',
        '$type', '$reason')";

  $mysqli->query($query) ;

}

include('body/body_fines.inc');


?>
