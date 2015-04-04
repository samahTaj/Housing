<?php
include('includes/db.inc');
include('includes/functions.inc');
if (login_check($mysqli) != true) header('login.php');

include('body/header.inc'); ?>
    <body>
        <!-- Registration form to be output if the POST variables are not
        set or if the registration script caused an error. -->
        <h1>Add new user</h1>
        <?php
        if (!empty($error_msg)) {
            echo $error_msg;
        }
        ?>
       
        <form method="post" name="registration_form" action="registration_success.php">
            Username: <input type='text' name='username' id='username' /><br>
           
            Password: <input type="password"
                             name="password" 
                             id="password"/><br>
            Confirm password: <input type="password" 
                                     name="confirmpwd" 
                                     id="confirmpwd" /><br>
            <input type="button" 
                   value="Register" 
                   onclick="return regformhash(this.form,
                                   this.form.username,
                                   
                                   this.form.password,
                                   this.form.confirmpwd);" /> 
        </form>
        <p>Return to the <a href="login.php">login page</a>.</p>
    </body>
</html>
