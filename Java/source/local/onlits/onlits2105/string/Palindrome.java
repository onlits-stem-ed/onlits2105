package local.onlits.onlits2105.string;

import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        String str;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        str = scanner.next();
        StringBuffer rev = new StringBuffer(str);
        rev.reverse();
        if(str.equalsIgnoreCase(rev.toString()))
            System.out.println(str + " is palindrome");
        else
            System.out.println(str + " is not a palindrome");
        scanner.close();
    }
}