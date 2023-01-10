#include <iostream>
using namespace std;

int main(){
    int array1[5];
    for (int i = 1; i <= 5; i++)
    {
        cout<<"enter your marks in subject "<<i<<endl;
        cin>>array1[i-1];
    }
    for (int i = 1; i <=5; i++)
    {
        cout <<"your marks in subject "<<i<<" are "<<array1[i-1]<<endl;
    }
    int arr2[4][3] ={
        {1,2,3}, {1,3,4}, {1,4,5}, {1,5,6}
    };
    // cout<<arr2[0][2];
    for(int i = 0; i < 4; i++){

        for (int j = 0; j < 3; j++)
        {
            cout<<"the array contains value at position ("<<i<<", "<<j<<")"<<"is "<<arr2[i][j]<<endl;
        }
    };
    return 0;
};