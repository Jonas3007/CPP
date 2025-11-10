#include <iostream>

using namespace std;

int main()
{
    int Array[] = {1,2,3,4,5};
    int *pArray = &Array[0];
    cout << "Old Array: " << endl;
    for(int i = 0; i < 5; i++)
    {
        
        cout << *(pArray + i)<< " ";
        
    }
    cout << "\nNew Array each +10: "<< endl;
    for(int i = 0; i < 5; i++)
    {
        
        cout << *(pArray + i)+ 10<<" ";
        
    }

}