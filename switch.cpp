#include <iostream>
using namespace std;

int main(){
    int i,j;
    cout<<"enter an integer"<<endl;
    cin >> i;
    switch (i)
    {
    case 1:
        cout<<"you are 1 "<<endl;
        break;
    case 2:
        cout <<"you are 2 "<<endl;
        break;
    default:
        cout<<"you are neither 1 nor 2"<<endl;
        break;
    }
    cout<<"enter another integer"<<endl;
    cin >> j;
    switch (j)
    {
    case 1:
        cout<<"this is 1 without break"<<endl;
    case 2:
        cout<<"this is 2 without break"<<endl;
    case 3:
        cout<<"this is 3 without break"<<endl;        
    default:
        cout<<"this is default"<<endl;
        break;
    }
    return 0;
};
