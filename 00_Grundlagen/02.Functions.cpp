#include <iostream>

using namespace std;

// Typ der Funktion | Name der Funktion | () Parameter der Funktion
void myVoidFunction(void)
{
    cout << "Das ist eine void Funktion." << endl;
}

int myIntFunction(int a,int b)
{
    cout << "Das ist eine Funktion mit Rückgabewert" << endl;
    //int c = a + b;    // Rechnung kann zwischengespeichert werden
    return a+b;         //Rechnung kann direkt zurückgegeben werden
}
void function(int zahl)
{
    if(zahl == 6)
    {
        return;
    }
    cout << "Zahl ist nicht 6" << endl; 
}
int main()
{
    int a;
    myVoidFunction();   
    a = myIntFunction(5,4);
    cout << a << endl;
    
    function(5);
    function(6);
    return 0;
}