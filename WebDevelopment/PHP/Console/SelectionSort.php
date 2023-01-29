<?php
function display($arr, $size)
{
    for($i=0; $i<$size; $i++) {
        echo "$arr[$i]\n";
    }
}

function selection_sort($arr, $size)
{
    
}

$arr = array(23, 6, 95, 15, 46, 33, 61);
$size = 7;

display($arr, $size);