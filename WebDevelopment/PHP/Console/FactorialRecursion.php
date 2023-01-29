<?php
$glob = 20;     //Global
function factorial($n)
{
    $var = 10;      //Local
    if($n == 1)
        return 1;

    return $n * factorial($n - 1);
}

echo "The factorial of 5 is " . factorial(5);
echo "\n";
echo $glob;
echo "\n";
// echo $var;              //error