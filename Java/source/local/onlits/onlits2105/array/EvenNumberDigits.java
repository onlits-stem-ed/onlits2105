package local.onlits.onlits2105.array;

public class EvenNumberDigits {
    int[] arr = { 42, 564, 5775, 34, 123, 454, 1, 5, 45, 3556, 23442 };

    void find() {
        for(int i=0; i<arr.length; i++)
        {
            if(numberOfDigits(arr[i]) % 2 == 0) {
                System.out.println(arr[i]);
            }
        }
    }

    int numberOfDigits(int n) {
        int digits = 0;
        while(n>0) {
            n = n / 10;
            digits++;
        }
        return digits;
    }

    public static void main(String[] args) {
        new EvenNumberDigits().find();
    }
}
