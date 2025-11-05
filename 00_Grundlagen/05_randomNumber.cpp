#include <iostream>

using namespace std;

int main()
{
    int zufallszahl;
    srand(time(NULL));      //Wird mit der Zeit berechnet deswegen nur Pseudozufallszahl
    zufallszahl = rand() % 6+1; // Zufallszahl = rand() % (obere Grenze - untere Grenze +1) + untere Grenze;
                                //Generiert eine Zahl zwischen 1 und 6
    cout << zufallszahl << endl;

    return 0;
}