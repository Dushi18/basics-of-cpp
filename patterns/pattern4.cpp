#include <iostream>
using namespace std;

int main(){
    int i,j,rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j>i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }cout<<endl;
        
    }
    
    return 0;
}