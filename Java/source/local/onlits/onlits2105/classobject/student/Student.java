package local.onlits.onlits2105.classobject.student;

import java.util.Date;

public class Student {
    private int admissionNumber;
    private String name;
    private char gender;
    private Date dob;
    private String fathersName;
    private String mothersName;
    private Address address = new Address();                //Composition

    void setAdmissionNumber(int admissionNumber) {
        this.admissionNumber = admissionNumber;
    }

    int getAdmissionNumber() {
        return admissionNumber;
    }

    public static void main(String[] args) {
        Student s = new Student();
        s.address.setStreet("Srinagar Colony");
        System.out.println(s.address.getStreet());
    }
}
