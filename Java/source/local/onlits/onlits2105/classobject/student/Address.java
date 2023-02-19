package local.onlits.onlits2105.classobject.student;

public class Address {
    private String street;
    private String city;
    private String state;
    private String pin;

    void setStreet(String street) {         //setter method
        this.street = street;
    }

    String getStreet() {
        return street;
    }

    void setCity(String city) {
        this.city = city;
    }

    String getCity() {
        return city;
    }

    void setState(String state) {
        this.state = state;
    }

    String getState() {
        return state;
    }

    void setPin(String pin) {
        if(pin.length() == 6)
            this.pin = pin;
    }

    String getPin() {
        return pin;
    }
}
