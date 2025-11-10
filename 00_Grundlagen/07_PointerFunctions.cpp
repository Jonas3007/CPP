#include <iostream>

using namespace std;
int sum(int number1, int number2)
{
    return number1 + number2;
}
int main()
{
    int(*pFunc)(int, int);
    pFunc = sum;                //Wird ohne & aufgerufen, da die Funktion ohne Klammern direkt
                                //auf die Adresse verweist

    cout << pFunc(15,2) << endl;
    return 0;
}