#include <iostream>

using namespace std;

struct Student
{
    string name;
    int age;
    float height_cm;
};

int main()
{
    Student student1;
    student1.name = "Nico";
    student1.age = 20;
    student1.height_cm = 171;
    
    Student student2;
    student2.name = "Flora";
    student2.age = 18;
    student2.height_cm = 169;

    cout << student1.name<< " " << student1.age << " " << student1.height_cm << endl;
    cout << student2.name<< " " << student2.age << " " << student2.height_cm << endl;

    return 0;
}