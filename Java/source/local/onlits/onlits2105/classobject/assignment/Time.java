package local.onlits.onlits2105.classobject.assignment;

public class Time {
    int hour;
    int minute;
    int second;
    String meridien;

    Time() { // default constructor
    }

    Time(int hour, int minute, int second, String meridien) { // parameterized constructor
        this.hour = hour;
        this.minute = minute;
        this.second = second;
        this.meridien = meridien;
    }

    void setTime(int hour, int minute, int second, String meridien) { // setter method
        this.hour = hour;
        this.minute = minute;
        this.second = second;
        this.meridien = meridien;
    }

    void setHour(int hour) {
        this.hour = hour;
    }

    void setMinute(int minute) {
        this.minute = minute;
    }

    void setSecond(int second) {
        this.second = second;
    }

    void setMeridien(String meridien) {
        this.meridien = meridien;
    }

    int getHour() { // getter method
        return hour;
    }

    int getMinute() {
        return minute;
    }

    int getSecond() {
        return second;
    }

    String getMeridien() {
        return meridien;
    }

    void displayTime(int type) {
        switch (type) {
            case 0:
                System.out.printf("%02d:%02d:%02d %s", hour, minute, second, meridien);
                break;
            case 1:
                int hour24 = hour + 12;
                hour24 = (hour24 == 24) ? 0 : hour24;
                System.out.printf("%02d:%02d:%02d", hour24, minute, second);
                break;
        }
    }

    void addTime(String type, int value) {
        if (type == "ss") {
            second += value;
            if (second >= 60) {
                minute++;
                second -= 60;
            }
            if (minute >= 60) {
                hour++;
                minute -= 60;
            }
            if (hour >= 12) {
                hour -= 12;
                meridien = meridien.equals("AM") ? "PM" : "AM";
            }
        } else if (type == "mm") {
            minute += value;
            if (minute >= 60) {
                hour++;
                minute -= 60;
            }
            if (hour >= 12) {
                hour -= 12;
                meridien = meridien == "am" ? "pm" : "am";
            }
        } else if (type == "hh") {
            hour += value;
            if (hour >= 12) {
                hour -= 12;
                meridien = meridien == "am" ? "pm" : "am";
            }
        }
    }

    void timeDifference(Time t2) {
        
    }
}