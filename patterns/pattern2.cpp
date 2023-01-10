#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int rows;
    cout << "enter no. of rows" << endl;
    cin >> rows;
    for (i; i < rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {

            if (j<rows-i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<< endl;
    }

    return 0;
};