package local.onlits.onlits2105.classobject.assignment;

public class TimeDriver {
    public static void main(String[] args) {
        Time t1 = new Time();
        t1.setTime(12, 4, 56, "PM");
        t1.displayTime(0);
        System.out.println();
        t1.displayTime(1);
        System.out.println();
        System.out.println("Adding 20 seconds to t1");
        t1.addTime("ss", 20);
        t1.displayTime(0);
        System.out.println("Adding 60 minutes to t1");
        t1.addTime("mm", 60);
        t1.displayTime(0);
        System.out.println();
    }
}
