#include <iostream>
using namespace std;

int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        int product = 1;
        while (x > 0)
        {
            product = product * x;
            x = x - 1;
        }
        return product;
    }
};
int factorial_using_recursion(int x){
    if (x==0||x==1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
    
};

int main()
{
    int a;
    cout << "enter a number" << endl;
    cin >> a;
    cout << "factorial of " << a << " is " << factorial(a) << endl;
    cout << "factorial of " << a << " using recursion is " << factorial_using_recursion(a) << endl;
    return 0;
};