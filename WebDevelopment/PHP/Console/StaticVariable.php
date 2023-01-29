<?php
function static_variable_test()
{
    static $var = 0;
    $var++;
    echo "$var\n";
}

for($i=1; $i<=5; $i++)
{
    static_variable_test();
}