#include <iostream>
#include <math.h>

using namespace std;

/*
#Aufgabenstellung:
- Schreiben Sie ien Programm, welches dem Beutzer ein Menü zur Auswahl verschiedener Flächenberechnungen anbietet.
- Punkt1: soll in einen Programmteil verzweigen, welcher die Fläche eines Rechtecks berechnet.(Eingabe)
- Punkt2: soll in einen Programmteil verzweigen, welcher das Volumen eines Quaders berechnet.(Eingabe)
- Punkt3: soll in einen Programmteil verzweigen, welcher die Fläche eines Kreises berechnet.(Eingabe)
- Punkt4: soll das Programm beenden.
- Verwenden Sie Funktionen für die einzelnen Berechnungen.
-BerechneFleacheRechteck
-BerechneVolumenQuader
-BerechneFlaecheKreis
*/

int berechneFlaecheRechteck();
int berechneVolumenQuader();
int berechneFlaecheKreis();

/// @brief main menu for area and volume calculations
/// @return 0 if program ends
int main ()
{
    float res;
    int userInput;
    system("clear");
    while (userInput !=4)
    {
        cout<< "Was möchtest du machen?\n -[1] Fläche vom Rechteck berechnen \n -[2] Volumen vom Quader berechnen \n -[3] Fläche vom Kreis berechnen \n -[4]Programm beenden "  << endl;
        cin >> userInput;
        switch (userInput)
        {
            case 1:
                res = berechneFlaecheRechteck();
                cout << "Die Fläche des Rechtecks beträgt: " << res << endl;
                break;
            case 2:
                res = berechneVolumenQuader();
                cout << "Das Volumen des Quaders beträgt: " << res << endl;
                break;
            case 3:
                res = berechneFlaecheKreis();
                cout << "Die Fläche des Kreises beträgt: " << res << endl;
                break;
            case 4:
                cout << "Programm wird beendet." << endl;
                break;
            default:
                cout << "Ungültige Eingabe. Bitte wähle eine Zahl zwischen 1 und 4." << endl;
                break;
        }
    }
}
/// @brief berechnung der Rechteck Fläche
/// @return rechteck fläche
int berechneFlaecheRechteck()
{
    system("clear");
    float height;
    float width;
    cout<< "Gib die Höhe des Rechtecks an:  " << endl;
    cin >> height;
    cout<< "Gib die Breite des Rechtecks an: "<< endl;
    cin >> width;
    return height * width;
    
}
/// @brief berechnung des Quader Volumens
/// @return quader volumen
int berechneVolumenQuader()
{
    float height;
    float width;
    float depth;
    cout<<"Gib die Höhe des Quaders an: "<< endl;
    cin >> height;
    cout<<"Gib die Breite des Quaders an: "<< endl;
    cin >> width;
    cout<<"Gib die Tiefe des Quaders an: "<< endl;
    cin >> depth;
    return height * width * depth;
}
/// @brief berechnung der Kreis Fläche
/// @return kreis fläche
int berechneFlaecheKreis()
{
    float radius;
    float pi = 3.141592653589793238462643383279;
    cout << "Gib den Radius des Kreises ein: "<< endl;
    cin >> radius;
    return pow(radius,2)*pi;
}
