#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;


struct Apprentice
{
    string name;
    string birthday;
    string profession;
    ushort height; 
};

void createApprentice(Apprentice*& apprentices, int &apprenticeCount)
{
    string name;
    string birthday;
    string profession;
    ushort height;
    cout<< "Enter your Name: ";
    cin >> name ; 
    cout<< "Enter your Birthday [DD/MM/YYYY]: "<< endl;
    cin >> birthday;
    cout<< "Enter your profession [IK/ME/MB/APP/IT]: "<< endl;
    cin >> profession;
    cout<< "Enter your height (in cm): "<< endl;
    cin >> height;

    Apprentice *tempArray = new Apprentice[apprenticeCount +1];

    for (int i = 0; i < apprenticeCount; i++){
        tempArray[i] = apprentices[i];
    }

    tempArray[apprenticeCount] = {name,birthday,profession,height};
    delete[] apprentices;

    apprentices = tempArray;
    apprenticeCount++;

}
void showApprenticeList(int *apprenticeCount, Apprentice *apprentices)
{
    if(*apprenticeCount == 0)
    {
        cout<< "No apprentieces listed"<< endl;
        return;
    }
    for(int i = 0; i < *apprenticeCount; i++)
    {
         cout << "----------------------------------" << endl;
         cout <<"Name: "<< apprentices[i].name << endl;
         cout <<"Birthday: "<< apprentices[i].birthday<< endl;
         cout <<"Profession" << apprentices[i].profession<<endl;
         cout <<"Height: " << apprentices[i].height<<"cm"<<endl;
         cout << "----------------------------------"<< endl;

    }

}
void userMenu()
{
    cout<< "[1] Create new apprentice)"<< endl;
    cout<< "[2] Display list of all apprentices"<< endl;
    cout<< "[3] Display all minor/legal aged apprentices"<< endl;
    cout<< "[4] Create birthday-list"<< endl;
    cout<< "[5] Show all <profession> apprentices"<< endl;
    cout<< "[6] Quit"<< endl;
    cout<< "Please selcect what you want to do [1-6]: "<< endl;
}
bool navigateMenu()
{
    int apprenticeCount= 0;
    Apprentice *apprentices = nullptr;
    int choise;
    system("clear");
    userMenu();
    cin>>choise;
    switch(choise)
    {
    case 1: 
        createApprentice(apprentices, apprenticeCount);
        break;
    case 2:
        showApprenticeList(&apprenticeCount, apprentices);
        break;
    case 3: 
        //displayAgeList();
        break;
    case 4: 
        //birthdayList();
        break;
    case 5:
        //showProfession();
        break;
    case 6:
        cout<< "Exiting..."<< endl;
        return true;
        break;
    default: 
        cout << "Ungültige Eingabe. Bitte wähle eine Zahl zwischen 1 und 4." << endl;
        return false;
        break;
    }

}



int main()
{
    while(navigateMenu()== false);
    return 0;
}