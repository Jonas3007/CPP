#include <iostream>

using namespace std;

int zahl1()
{
    int zahl1;
    cout << "Gib Zahl1 ein: "<< endl;
    cin >> zahl1;
    return zahl1;
}
int zahl2()
{
    int zahl2;
    cout << "Gib Zahl2 ein:" <<endl;
    cin >> zahl2;
    return zahl2;
}
char choseOperator(int zahl1, int zahl2)
{
    char rechenzeichen;
    cout << "Wähle einen Operator (+,-,/,*,%)" << endl;
    cin >> rechenzeichen;

    switch (rechenzeichen)
    {
        case '+':
            cout <<"Das Ergebnis lautet:" <<zahl1<< '+'<< zahl2<< '=' <<zahl1 + zahl2<<endl;
            break;
        case '-':
            cout <<"Das Ergebnis lautet:" <<zahl1<< '-'<< zahl2<< '=' << zahl1 - zahl2 << endl;
            break;
        case '*':
            cout <<"Das Ergebnis lautet:" <<zahl1<< '*'<< zahl2<< '=' << zahl1 * zahl2 << endl;
            break;
        case '/':
            cout <<"Das Ergebnis lautet:" <<zahl1<< '/'<< zahl2<< '=' << (float)zahl1 / zahl2 << endl;
            break;
        case '%':
            cout <<"Das Ergebnis lautet:" <<zahl1<< '%'<< zahl2<< '=' << zahl1 % zahl2 << endl;
            break;
    

    }
    return rechenzeichen;
}
bool numberInputValidation(int zahl1,int zahl2)
{
   
}
bool goAgain()
{
    bool again = false;
    string askUser;
    do
    {
        cout <<"Möchtest du noch etwas rechnen? (y|n)" << endl;
        cin >> askUser;
        if(askUser == "y")
        {
            return true;
            again = false;
        }
        else if(askUser == "n")
        {
            return false;
            again = false;
        }
        else
        {
            cout<<"Bitte gib entweder y oder n ein "<<endl;
            
        }
    }while(again ==false);
}
int main()
{
    int nr1;
    int nr2;
    bool askNewCalc = false;
    do
    {
        char askUser;
        nr1 = zahl1();
        nr2 = zahl2();
        choseOperator(nr1, nr2);
        cout <<"Möchtest du noch etwas rechnen? (y|n)" << endl;
        cin >> askUser;
        if(askUser == 'y')
        {
            return askNewCalc = true;    
        }
        else if(askUser == 'n')
        {
            return askNewCalc = false; 
        }
        else
        {
            cout<<"Bitte gib entweder y oder n ein "<<endl;  
        }
        
    }while (askNewCalc == false);

    
    return 0;
}

