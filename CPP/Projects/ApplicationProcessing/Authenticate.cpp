#include <cstdlib>
#include "Common.cpp"
using namespace std;
// using namespace application_processing;

namespace application_processing
{
    class authentication
    {
    private:
        string user_id;
        string password;
    public:
        void authenticate()
        {
            char c;
            system("clear");
            cout << "APPLICATION PROCESSING SYSTEM" << endl;
            common::dash(29);
            cout << endl << endl << endl;

            cout << "Enter user_id: ";
            cin >> user_id;
            getchar();
            cout << "Enter password: ";
            
            do
            {
                cout<<"\r";
                cout << "*";
            }
            while((c=getchar())!='\n');

        }
    };
}

using namespace application_processing;
int main()
{
    authentication auth;
    auth.authenticate();
    return 0;
}