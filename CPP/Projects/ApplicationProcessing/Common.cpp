#include <iostream>
using namespace std;
namespace application_processing
{
    class common
    {
    public:
        static void dash(int len);
    };

    void common :: dash(int len)
    {
        for (int i = 1; i <= len; i++)
        {
            cout << "-";
        }
    }
}