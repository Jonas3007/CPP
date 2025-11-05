#include <iostream>

using namespace std;
/// @brief simple counter that decrements from user input to 0
/// @return   
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
        cout << uInput;
    }
}
    
    