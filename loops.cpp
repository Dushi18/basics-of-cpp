#include<iostream>
using namespace std;

int main(){
    int i=0;
    int j=0;
    while (i<10)
    {
        cout<<i<<endl;
        i=i+1;
    };
    cout<<"second loop"<<endl;
    do
    {
        cout<<j<<endl;
        j=j+1;
    } while (j<10);
    
    return 0;
};