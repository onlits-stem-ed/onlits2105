package local.onlits.onlits2105.loop;

public class EvenOdd {
    public static void main(String[] args) {
        System.out.println("The even numbers between 1 and 100 are:");
        for(int i=1; i<=100; i++) {
            if(i % 2 == 0)
                System.out.print(i + " ");
        }
        System.out.println();

        System.out.println("The odd numbers between 1 and 100 are:");
        for(int i=1; i<=100; i++) {
            if(i % 2 != 0)
                System.out.print(i + " ");
        }
        System.out.println();
    }
}