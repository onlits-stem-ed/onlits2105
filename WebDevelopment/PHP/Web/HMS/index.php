<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>HMS</title>
    <link rel="stylesheet" href="app.css">
</head>

<body>
    <h1>Identify yourself</h1>
    <form action="Authenticate.php" method="POST" class="form">
        <label for="userid">User Id</label>
        <input type="text" name="userid" id="userid">
        <label for="password">Password</label>
        <input type="password" name="password" id="password">
        <button type="submit">Login</button>
        <button type="reset">Reset</button>
    </form>
</body>

</html>