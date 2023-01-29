public class Integer {
    private int i;

    public Integer() {
        i = 0;
    }

    public Integer(int i) {
        this.i = i;
    }

    Integer plus(Integer x) {
        Integer sum = new Integer();
        sum.i = this.i + x.i;
        return sum;
    }

    int get() {
        return this.i;
    }

    public static void main(String[] args) {
        Integer a = new Integer(10);
        Integer b = new Integer(20);
        Integer c;
        c = a.plus(b);
        System.out.println("c = " + c.get());
    }
}