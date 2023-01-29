<?php

function factorial($n)
{
    $f = 1;
    for($i = $n; $i>1; $i--) {
        $f = $f * $i;
    }
    return $f;
}

echo "The factorial of 7 is " . factorial(7);
echo "\n";