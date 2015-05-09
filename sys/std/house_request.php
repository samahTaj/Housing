<?php
include('includes/db.inc');
include('includes/functions.inc');
if (login_check($mysqli) != true) header('login.php');

include('body/header.inc');
include('body/body_house_request.inc');

include ('body/footer.inc');
?>
