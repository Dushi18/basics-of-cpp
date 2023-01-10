#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age";
    cin >> age;
    if (age < 10)
    {
        cout << "you are not eligible for any vaccine" << endl;
    }
    if (age >= 10 && age < 18)
    {
        cout << "you are eligible for child vaccine" << endl;
    }
    if(age>=18){
        cout<<"you are "<<age<<" years old and you are eligible for both covishield and covaxin"<<endl;
    }
    return 0;
}