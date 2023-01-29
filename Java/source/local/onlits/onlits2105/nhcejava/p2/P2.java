package local.onlits.onlits2105.nhcejava.p2;

public class P2 {
    public static void main(String[] args) {
        int[] arr = { 12, 1, 49, 5, 15 }; // local variable
        Sorting.bubbleSort(arr);
        display(arr);
    }

    static void display(int[] arr) {
        System.out.println("The sorted array is:");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}