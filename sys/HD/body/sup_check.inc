<?php 
	

if (isset($_POST['sup_submit']))
{

$v=$_POST['id'];
	while (list ($key,$val) = @each ($v)) {
	$table = "select id from user where id='$val' ";
     $r= $mysqli->query($table) ;
      $r= $val; 
									 }
    
if (isset($_POST['bname'])) {
$n=$_POST['name'];
$bname=$_POST['bname'];

   $id_b= $mysqli->query("select b_id from building where b_name like('$bname')") ;

   $row = mysqli_fetch_assoc($id_b)  ;
   $id_be=$row['b_id'];
   $table = "UPDATE user SET b_id=$id_be where id=$r";
   $mysqli->query($table) ;					
 
}


include('body/body_sup.inc');
 

}

?>
