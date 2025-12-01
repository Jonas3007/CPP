#include <iostream>
#include <fstream> // filestream library für Files bearbeiten

using namespace std;

int main()
{
    //ofstream MyFile("filename.txt");     // File kommt direkt in den gleichen Ordner wie die .cpp Datei
    ofstream MyFile("08_Files/filename.txt"); // File kommt in den Ordner 08_Files
    MyFile << "Hallo dieser Text wird in die Datei geschrieben!" << endl;
    MyFile.close(); // File schließen

    string text; //Hilfsvariable um Zeilenweise aus der Datei zu lesen
    ifstream MyFile2("08_Files/filename.txt"); // File zum lesen öffnen

    while(getline(MyFile2, text))
    {
        cout << text << endl;
    }
    MyFile2.close();
    return 0;
}