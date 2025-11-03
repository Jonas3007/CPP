#include <iostream>
using namespace std;

int main()
{
    // Größe des Feldes angeben beim initialisierien direkt den Wert angeben mit {}
    int Feld[10] = {0,1,2,3,4,5,6,7,8,9};
    for(int i = 0; i < 10; i++)
    {
        cout << Feld[i] << endl;
    }
    // Wenn die Größe des Arrays nicht angegeben wird, muss es mit Werten initialisiert werden
    char Name[] = {'J','o','n','s','\0'}; // \0 = null terminator

    int i = 0;
    while(Name[i] != '\0') // solange bis null terminator kommt
    {
        cout << Name[i];
        i++;
    }
    cout << endl;

    int Feld2 [4][5] ={{11,12,13,14,15},
                      {21,22,23,24,25},
                      {31,32,33,34,35},
                      {41,42,43,44,45}};
    // 2D-Feld ersten Zeilen, dann Spalten
    //Feld kann mit einer Zahl initialisiert werden, dann sind alle Werte 0
    for(int i = 0; i < 4; i++) // zeilen
    {
        for(int j = 0; j < 5; j++) // spalten
        {
            cout << Feld2[i][j] << " "; // ausgabe der werte     
        }
        cout << endl; // zeilenumbruch nach jeder zeile
    }
}