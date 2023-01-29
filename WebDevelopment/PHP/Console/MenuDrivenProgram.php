<?php
while (1) {
    echo "What do you want to do?\n";
    echo "1. Add two integers\n";
    echo "2. Substract an integer from another\n";
    echo "3. Exit\n";
    $ch = readline("Enter choice: ");
    switch ($ch) {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            exit();
            break;
        default:
            echo "Wrong Option!";
    }
}


function add()
{
    $a = readline("Enter a number: ");
    $b = readline("Enter another number: ");
    $c = $a + $b;
    echo "The sum is $c.";
    echo "\n\n";
}

function sub()
{
    $a = readline("Enter a number: ");
    $b = readline("Enter another number: ");
    $c = $a - $b;
    echo "The difference is $c.";
    echo "\n\n";
}
