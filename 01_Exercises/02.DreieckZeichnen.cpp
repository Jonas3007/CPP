#include <iostream>

using namespace std;


int main()
{
    int height;
    cout << "Gib die Höhe des Dreiecks ein [2-25]: " << endl;
    cin >> height;

    

    
    

    for(int i=1 ; i <= height; i++)
    {
        // Leerzeichen vor den Sternen: Bsp height = 3 -> k = 3-1 -> 
        // nächste iteration der Schleifen wird i 2 sein heißt 
        // nur mehr ein Leerzeichen -> k = 3 -2 -> k = 1 = 1 Leerzeichen
        for (int k= height-i;k >= 0; k--)
        {
            cout << " ";
           
        }
         // Stern: solange j kleiner gleich als i ist wird ein stern in die reihe dazugegeben
         for(int j= 1;j <=i; ++j)
        {
                cout<<  "* ";
        }
        //sobald die for schleifen fertig sind wird die nächste zeile begonnen
        cout << endl;
    }
return 0; // damit compiler nicht meckert
}