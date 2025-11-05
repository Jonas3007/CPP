#include <iostream>

#define UPPERLIMITEASY 10
#define LOWERLIMITEASY 1
#define UPPERLIMITMEDIUM 20
#define LOWERLIMITMEDIUM 5
#define UPPERLIMITHARD 100
#define LOWERLIMITHARD 1

using namespace std;

/// @brief checks if guessedNumber is equal to randomNumber
/// @param guessedNumber 
/// @param randomNumber 
void correctNumber(int guessedNumber, int randomNumber)
{
    if(guessedNumber == randomNumber)
    {
        cout<< "You guessed right!"<< endl;
    }
    else
    {
        cout<< "You guessed wrong! The correct number was: "<< randomNumber<< endl;
    }
   
}
/// @brief random Number in number range 1-10
/// @return randomNumber gets returned (1-10)
int randomNumberSmall()
{

    int randomNumber;
    srand(time(NULL));      //Wird mit der Zeit berechnet deswegen nur Pseudozufallszahl
    randomNumber = rand() % (UPPERLIMITEASY - LOWERLIMITEASY +1) + LOWERLIMITEASY; // Generiert eine Zahl zwischen lowerLimit und upperLimit
    return randomNumber;
}
/// @brief random number in number range 5-20
/// @return randomNumber gets returned (5-20)
int randomNumberMedium()
{
    int randomNumber;
    srand(time(NULL));      //Wird mit der Zeit berechnet deswegen nur Pseudozufallszahl
    randomNumber = rand() % (UPPERLIMITMEDIUM- LOWERLIMITMEDIUM +1) + LOWERLIMITMEDIUM; // Generiert eine Zahl zwischen lowerLimit und upperLimit
    return randomNumber;
}
/// @brief random number in number range 1-100
/// @return randomNumber gets returned (1-100)
int randomNumberBig()
{
    int randomNumber;
    srand(time(NULL));      //Wird mit der Zeit berechnet deswegen nur Pseudozufallszahl
    randomNumber = rand() % (UPPERLIMITHARD - LOWERLIMITHARD +1) + LOWERLIMITHARD; // Generiert eine Zahl zwischen lowerLimit und upperLimit
    return randomNumber;
}
/// @brief lets the user choose in what number range they want to play (easy, medium, hard)
/// @return the random number in the chosen range
int chooseNumberRange()
{
    int userInput;
    cout<< "In welchem Zahlenbereich willst du spielen?\n -[1] EASY: 1-10 \n -[2] MEDIUM: 5-20 \n -[3] HARD: 1-100 "  << endl;
    cin >> userInput;
    switch (userInput)
    {
        case 1:
            cout<< "You choose EASY: 1-10."<< endl;
            return randomNumberSmall();
            break;
        case 2:
            cout<< "You choose MEDIUM: 5-20."<< endl;
            return randomNumberMedium();
            break;
        case 3:
            cout<< "You choose HARD: 1-100."<< endl;
            return randomNumberBig();
            break;
        default:
            cout << "Ungültige Eingabe. Bitte wähle eine Zahl zwischen 1 und 3." << endl;
            break;
    }
}
/// @brief executes the methods in the right order + asks if user wants to play again
/// @return 
int main()
{
    int guessedNumber;
    int randomNumber;
    char goAgain = 'y';
    while(goAgain == 'y')
    {
        randomNumber = chooseNumberRange();
        cout<< "Rate die Zahl: ";
        cin >> guessedNumber;
        correctNumber(guessedNumber, randomNumber);
        cout<< "Do you want to play again? y | n :" << endl;
        cin >> goAgain;
    }

    return 0;
}