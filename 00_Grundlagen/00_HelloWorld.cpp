#include <iostream>             // includieren Input-Output Stream zum lesen von Inputs und
                                // Outputs ausgeben
#define HELLO_WORLD "Hello World" //Braucht keinen Speicherplatz; ist quasi eine globale variable

using namespace std;            // zeigt dem Compiler wo etwas hingehört

int main()                      // Start des Standarprogramms
{   
    cout << HELLO_WORLD << endl; // cout = Console Out 
                                    //endl = End of Line ; es geht auch \n
            
    return 0;                       // bei void main() brauche ich kein return 0;
}