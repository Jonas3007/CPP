#include <iostream>

using namespace std;
void swapNumbers(int* pNumber1, int* pNumber2)
{
    int temp = *pNumber1; // Wert von number1 wird in temp gespeichert
    *pNumber1 = *pNumber2; // Wert von number2 wird in number1 gespeichert
    *pNumber2 = temp;      // Wert von temp (ursprünglicher number1) wird in number2 gespeichert
}

    
int main()
{
    int number1 = 10;
    int number2 = 5;

    swapNumbers(&number1, &number2);    //Übergibt die Adressen der Variablen
    cout << number1<< "\t" << number2 << endl; // Ausgabe: 5 10

    cout << &number1 << endl;
    int num = 10;
    int* ptr = &num;
    *ptr = 5; // Ändert den Wert von num auf 5
     //ptr = 5; // Niemals machen, da ptr eine Adresse speichert
     cout << ptr << "\t" << *ptr << endl; // Ausgabe: Adresse von num und dann Wert
    return 0;
}