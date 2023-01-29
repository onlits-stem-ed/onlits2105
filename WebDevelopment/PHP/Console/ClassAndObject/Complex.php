<?php
class complex
{
    private $real;
    private $imaginary;

    public function set_real($real)
    {
        $this->real = $real;
    }

    public function set_imaginary($imaginary)
    {
        $this->imaginary = $imaginary;
    }

    public function get_real()
    {
        return $this->real;
    }

    public function get_imaginary()
    {
        return $this->imaginary;
    }
}


$c = new complex();
$c->set_real(10.4);
$c->set_imaginary(4.5);
echo "real: " . $c->get_real() . "\n"; 
echo "imaginary: " . $c->get_imaginary() . "\n";