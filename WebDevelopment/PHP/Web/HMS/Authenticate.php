<?php
$userid = $_POST['userid'];
$password = $_POST['password'];
$con = new mysqli("localhost", "2105", "2105", "hotel_2105");

if ($con->connect_error) {
    echo $con->connect_error;
} else {
    $sql = "SELECT user_id FROM users WHERE user_id=? AND password=?";
    $stmt = $con->prepare($sql);
    $stmt->bind_param("ss", $userid, $password);
    $stmt->execute();

    $result = $stmt->get_result();
    
    if($result->num_rows>0)
    {
        echo "<script>window.location.href='Dashboard.php'</script>";
    } else {
        echo "<script>alert('Invalid userid/password')</script>";
        echo "<script>window.location.href='index.php'</script>";
    }
}
