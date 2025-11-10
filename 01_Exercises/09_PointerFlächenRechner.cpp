#include <iostream>
#include <cmath>

using namespace std;
void Durchmesser(float *r, float *pRes)
{   
    
     *pRes = *r *2;
     cout << "Durchmesser: "<< *pRes<< endl;
    
}

void Umfang(float *r, float *pRes)
{
    *pRes = *r *2* M_PI;
    cout << "Umfang: "<< *pRes<< endl;
}
void Flaeche(float *r, float *pRes)
{
    *pRes = M_PI * (*r) * (*r);
    cout << "Flaeche: "<< *pRes<< endl;
}

int main()
{
    float res;
    float *pRes = &res;
    float userInput;
    cout <<"Gib den Radius des Kreises ein: "<< endl;
    cin >> userInput;
    float *r = &userInput;
    Durchmesser(r, pRes);
    Umfang(r,pRes);
    Flaeche(r,pRes);

    return 0;
}