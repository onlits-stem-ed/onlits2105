<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>New Product</title>
</head>
<body>
    <div>
        <form action="NewProductScript.php" method="POST" enctype="multipart/form-data">
            <input type="text" name="product_code" id="product_code" placeholder="Product Code">
            <input type="text" name="product_name" id="product_name" placeholder="Product Name">
            <input type="file" name="image" id="image">
            <button>Submit</button>
        </form>
    </div>
</body>
</html>