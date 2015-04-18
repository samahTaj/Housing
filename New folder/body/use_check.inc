<?php 
	

if (isset($_POST['use_sub']))
{
	
$v=$_POST['id'];
	while (list ($key,$val) = @each ($v)) {
		$table = "select id from where id='$val' ";
       $r= $mysqli->query($table) ;
      $r= $val; 
									 }
    


if (isset($_POST['city'])) {
	$city=$_POST['city'];
	while (list ($key,$val) = @each ($city)) {
		$table = "UPDATE user SET city='$val' where id=$r";
        $mysqli->query($table) ;
                                       	}
    
}
 
if (isset($_POST['state'])) {
	$state=$_POST['state'];
	
	while (list ($key,$val) = @each ($state)) {
		$table = "UPDATE user SET state='$val' where id=$r";
            $mysqli->query($table) ;
	                                        }
											
}
if (isset($_POST['residential_area'])) {
	$residential_area=$_POST['residential_area'];
	
	while (list ($key,$val) = @each ($residential_area)) {
		$table = "UPDATE user SET residential_area='$val' where id=$r";
            $mysqli->query($table) ;
	                                        }
											
}
if (isset($_POST['phone'])) {
	$phone=$_POST['phone'];
	
	while (list ($key,$val) = @each ($phone)) {
		$table = "UPDATE user SET phone='$val' where id=$r";
            $mysqli->query($table) ;
	                                        }
}
if (isset($_POST['role'])) 
{
   $role=$_POST['role'];
   $id_role= $mysqli->query("select role_id from role where role_name like('$role')") ;
   $row = mysqli_fetch_assoc($id_role)  ;
   $id_role=$row['role_id'];
   $table = "UPDATE user_has_role SET role_role_id=$id_role where user_id=$r";
   $mysqli->query($table) ;
	                                        
										
}

include('body/done_user.txt');
 

}

?>
