package local.onlits.onlits2105.string;

import java.util.Scanner;

public class InventoryOfC {
    public static void main(String[] args) {
        String answer;
        Scanner scanner = new Scanner(System.in);
        for (int i = 1; i <= 3; i++) {
            System.out.println("Q. Who is the inventory of C?");
            System.out.print("A. ");
            answer = scanner.nextLine();
            if (answer.equalsIgnoreCase("Dennis Ritchie")) {
                System.out.println("Good");
                break;
            } else {
                if (i <= 2) {
                    System.out.println("Try again!");
                } else {
                    System.out.println("You have exhausted all you attemps. The correct answer is 'Dennis Ritchie'.");
                }
            }
        }
        scanner.close();
    }
}
