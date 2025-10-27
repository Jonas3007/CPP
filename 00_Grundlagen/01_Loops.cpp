#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 10, j = 0;
    char redo;

    cout << "Das ist eine for-SChleife!" << endl;
    // Zählvariable, Bedingung, Erhöhung der Zählvariable
    for(int i = 0; i<=10; i++)
    {
        cout  << i << endl;
    }

    cout << "\nDas ist eine While-SChleife!" << endl;
    // While hat nur die Bedingung
    while(a < 10)
    {
        cout << a << endl;
        a++;
    }
    if (b>= 0) // hüpft solange in die if-Anweisung, solange b > 0
    {
        cout << b << endl;
        b--;

    }
    else
    {
        //tut nix
    }
    do
    {
        cout << j++ << endl;
        cout << "Nochmal? (y,n)";
        cin >> redo;            // cin = console input
    } while (redo == 'y');
    
    int c = 0;
    while (1)
    {
        cout << "Hallo" << endl;
        if(c >= 7)                  //immer auf <= 0 abfragen und nicht genau 0!!
        {
            break;
        }
        c--;
    }
    

    return 0;
}