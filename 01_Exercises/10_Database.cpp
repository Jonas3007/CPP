#include <iostream>
#include <sstream>
#include <cstdlib>
#include <limits>

using namespace std;


struct Apprentice
{
    string name;
    string birthday;
    string profession;
    ushort height; 
};

void createApprentice(Apprentice* apprentices, int* apprenticeCount)
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    string name;
    string birthday;
    string profession;
    ushort height;
    cout<< "Enter your Name: ";
    getline(cin, (apprentices[*apprenticeCount]).name ); 
    cout<< "Enter your Birthday [DD/MM/YYYY]: "<< endl;
    getline(cin, (apprentices[*apprenticeCount]).birthday );
    cout<< "Enter your profession [IK/ME/MB/APP/IT]: "<< endl;
    getline(cin, (apprentices[*apprenticeCount]).profession );
    cout<< "Enter your height (in cm): "<< endl;
    cin >> (apprentices[*apprenticeCount]).height;
    
   (*apprenticeCount) ++;

}
void showApprenticeList(int *apprenticeCount, Apprentice *apprentices)
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if(*apprenticeCount == 0)
    {
        cout<< "No apprentices listed"<< endl;
        
    }
    else
    {
        for(int i = 0; i < *apprenticeCount; i++)
        {
            cout << "----------------------------------" << endl;
            cout <<"Name: "<< apprentices[i].name << endl;
            cout <<"Birthday: "<< apprentices[i].birthday<< endl;
            cout <<"Profession: " << apprentices[i].profession<<endl;
            cout <<"Height: " << apprentices[i].height<<"cm"<<endl;
            cout << "----------------------------------"<< endl;

        }

    }
    
    
    cout << "\nDrücke Enter, um fortzufahren...";
    cin.get();  // Wartet, bis Enter gedrückt wird

    cout << "\nWeiter geht's!\n\n";
    


}
int calculateAge(string birthdate)
{

int age = 0;
int day, month, year;
struct tm date = {0};
char slash;


stringstream ss(birthdate); // stringstream read data from string <sstream> needed

ss >> day >> slash >> month >> slash >> year; // stores every part of the string in seperat variable
date.tm_year = year - 1900; // time since 1900
date.tm_mon = month - 1; // month starts with 0
date.tm_mday = day;


// ctime needed

time_t t = time(NULL); // initialize the time to 1.1.1970, stores the time in seconds

tm* now = localtime(&t); // stores the seconds in year, month, day, hour...

age = now->tm_year + 1900 - year;

if((now->tm_mon + 1 < month) || (now->tm_mon + 1 == month && now->tm_mday < day))

age--;


return age;

}
void sortByBirthdays()
{

}
void showProfession()
{
    cout<<"Which apprentice profession do you want to see?"<<endl;
    cout<<"[IK]/ME/MB/APP/IT]"
}
void displayMinorOrLegalList(int *apprenticeCount,Apprentice *apprentices)
{
    
    int age =0;
    char input;
    cout << "Do you want to see legal(l) aged or minors(m)?"<< endl;
    cin >> input;
    for(int i = 0;i < *apprenticeCount; i++ )
    {
        age=calculateAge((apprentices[i]).birthday);
        if( input == 'm')
        {
            if( age < 18 )
            {
                cout <<"Name: "<<(apprentices[i].name)<< endl;
                cout <<"Age: "<<age<< endl;
            }
        }
        else
        {
            if( age >= 18 )
            {
                cout <<"Name: "<<(apprentices[i].name)<< endl;
                cout <<"Age: "<<age<< endl;
            }
        }    
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "\nDrücke Enter, um fortzufahren...";
    cin.get();  // Wartet, bis Enter gedrückt wird

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
    static int apprenticeCount= 0;
    static Apprentice apprentices[100];
    int choise;
    system("clear");
    userMenu();
    cin>>choise;
    switch(choise)
    {
    case 1: 
        createApprentice(apprentices, &apprenticeCount);
        return false;
        break;
    case 2:
        showApprenticeList(&apprenticeCount, apprentices);
        return false;
        break;
    case 3: 
        displayMinorOrLegalList(&apprenticeCount, apprentices);
        return false;
        break;
    case 4: 
        sortByBirthdays();
        return false;
        break;
    case 5:
        showProfession();
        return false;
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
    while(navigateMenu()==false);
    return 0;
}