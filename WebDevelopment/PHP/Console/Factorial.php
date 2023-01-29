<?php
$n = readline("Enter a number: ");
$f = 1;
for ($i = 1; $i <= $n; $i = $i + 1) {
    $f = $f * $i;
}
echo "The factorial of $n is $f.\n";
