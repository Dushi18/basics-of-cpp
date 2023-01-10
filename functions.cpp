#include <iostream>
using namespace std;

int sumOfAp(int a, int l, int d)
{
    int sum, n;
    n = 1 + ((l - a) / (d));
    sum = n*(a + l) / 2;
    return sum;
}
int main()
{
    int a, d, l;
    cout << "enter the first term of arithmetic progression" << endl;
    cin >> a;
    cout << "enter the last term of arithmetic progression" << endl;
    cin >> l;
    cout << "enter the common differnce of arithmetic progression" << endl;
    cin >> d;
    // cout << "number of terms in this ap are " << n << endl;
    cout << "sum of this AP is " << sumOfAp(a, l, d) << endl;
    return 0;
}