#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    for (int i = 0; i <= 255; i++)
    {

        cout  << (char)i;
        if( i%16 == 0)
        {
            cout << "\n";
        }
    }
    return 0;
}