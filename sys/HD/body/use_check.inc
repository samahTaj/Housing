<?php 
	

if (isset($_POST['use_sub']))
{

$v=$_POST['id'];
	while (list ($key,$val) = @each ($v)) {
		$table = "select id from user where id='$val' ";
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

include('body/done_user.txt');
 

}

?>
