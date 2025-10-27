#include <iostream>

using namespace std;

int main()
{

    int uInput;
    cout << "Gib eine Zahl ein" << endl;
    cin >> uInput;
    while (1)
    {
        
        if(uInput <= 0)
        {
            break;
        }
        uInput--;
        cout << uInput << endl;
    }   
}
    
    