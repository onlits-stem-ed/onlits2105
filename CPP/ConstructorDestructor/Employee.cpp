#include <iostream>
using namespace std;
namespace constructor_destructor
{
    class employee
    {
    private:
        int id;
        string name;
        string designation;
        float salary;
    public:
        employee(int id, string name, string designation, float salary);

        void set_id(int id)
        {
            this->id = id;
        }

        int get_id()
        {
            return id;
        }

        void set_name(string name)
        {
            this->name = name;
        }

        string get_name()
        {
            return name;
        }
    };

    employee::employee(int id, string name, string designation, float salary)
    {
        this->id = id;
        this->name = name;
        this->designation = designation;
        this->salary = salary;
    }
}

using namespace constructor_destructor;
int main()
{
    int a = 10;
    int ar[] = {2, 3, 4, 5, 6};
    employee e(1, "Prince Kumar", "SWE2", 50000.00f);
    cout << "Id: " << e.get_id() << endl;
    cout << "Name: " << e.get_name() << endl;
}