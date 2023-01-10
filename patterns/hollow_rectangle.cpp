#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "enter no. of rows for rectangle" << endl;
    cin >> rows;
    cout << "enter no. of columns for rectangle" << endl;
    cin >> columns;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 0 || i == rows - 1)
            {
                cout << "* ";
            }
            else
            {
                if (j == 1 || j == columns)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }cout << endl;
    }

    return 0;
}