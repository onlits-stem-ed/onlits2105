import java.util.Scanner;

public class Rectangle {
    public static void main(String[] args) {
        int length, breadth, area;
        var scanner = new Scanner(System.in);
        System.out.print("Enter length: ");
        length = scanner.nextInt();
        System.out.print("Enter breadth: ");
        breadth = scanner.nextInt();
        area = length * breadth;
        System.out.printf("The area is %d sq. units.\n", area);
        scanner.close();
    }
}