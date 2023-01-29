<?php
$rev = 0;
$n = readline("Enter a number: ");
while ($n >= 1) {
    // echo "[loop]";
    $d = $n % 10;
    $rev = $rev * 10 + $d;
    $n = $n / 10;
}
echo "The reverse is $rev.\n";
