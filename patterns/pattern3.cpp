#include<iostream>
using namespace std;

int main(){
    int i,j, rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = rows; j>i; j--)
        {
            cout<<"* ";
        }cout<<endl;
    }
    
    return 0;
};