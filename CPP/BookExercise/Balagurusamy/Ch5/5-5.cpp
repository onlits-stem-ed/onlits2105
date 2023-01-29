#include <iostream>
using namespace std;

namespace Ex5_5
{
    class DM
    {
        int metres;
        int centimeters;
    public:
        void getdata();
        void putdata();
    };

    void DM :: getdata()
    {
        cout << "Enter Distance in meters and centimeters: ";
        cin >> metres >> centimeters;
    }

    void DM :: putdata()
    {
        cout << "Distance in meters and centimeters is: " << metres << "m " << centimeters << "cm" << endl;
    }

    class DB
    {
        int feet;
        int inches;
    public:
        void getdata();
        void putdata();
    };

    void DB :: getdata()
    {
        cout << "Enter Distance in feet and inches: ";
        cin >> feet >> inches;
    }

    void DB :: putdata()
    {
        cout << "Distance in feet and inches is: " << feet << "feet " << inches << "inches" << endl;
    }
}

using namespace Ex5_5;

int main()
{
    DM dm;
    DB db;
    dm.getdata();
    dm.putdata();
    db.getdata();
    db.putdata();
}