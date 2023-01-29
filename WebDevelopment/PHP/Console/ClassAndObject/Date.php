<?php
class date
{
    private $day;               //instance variable
    private $month;             //  "
    private $year;              //  "

    function __construct($day, $month, $year)
    {
        $this->day = $day;
        $this->month = $month;
        $this->year = $year;
    }

    function display_short_date()
    {
        $date_string = "$this->day/$this->month/$this->year\n";
        echo $date_string;
    }

    function display_long_date()
    {
        $month = null;
        switch ($this->month) {
            case 1:
                $month = "January";
                break;
            case 2:
                $month = "February";
                break;
            case 3:
                $month = "March";
                break;
            case 4:
                $month = "April";
                break;
            case 5:
                $month = "May";
                break;
            case 6:
                $month = "June";
                break;
            case 7:
                $month = "July";
                break;
            case 8:
                $month = "August";
                break;
            case 9:
                $month = "September";
                break;
            case 10:
                $month = "October";
                break;
            case 11:
                $month = "November";
                break;
            case 12:
                $month = "December";
        }
        echo "$month $this->day, $this->year\n";
    }
}

$dob = new date(29, 3, 2022);
$dob->display_short_date();
$dob->display_long_date();
