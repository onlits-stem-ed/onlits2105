package local.onlits.onlits2105.loop;

import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        int n, fact=1;
        Scanner scan = new Scanner(System.in);
        System.out.print("Please enter a number: ");
        n = scan.nextInt();
        for(int i=n; i>0; i--) {
            fact = fact * i;
        }
        System.out.println("The factorial of " + n + " is " + fact + ".\n");
        scan.close();
    }
}
