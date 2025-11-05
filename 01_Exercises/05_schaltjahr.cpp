#include <iostream>

using namespace std;

bool schaltjahr(int jahr)
{
    if ((jahr % 4 ) == 0  || (((jahr % 400) == 0) && ((jahr % 100) !=0)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int Jahr;
    cout << "Gib ein Jahr ein: " << endl;
    cin >> Jahr;
    if (schaltjahr(Jahr) == true)
    {
        cout << Jahr << " ist ein Schaltjahr." << endl;
    }
    else
    {
        cout << Jahr << " ist kein Schaltjahr." << endl;
    }

    return 0;
}