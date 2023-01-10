#include <iostream>
using namespace std;

int main(){
    int i=14;
    int* ptri;
    ptri = &i;
    cout<<"the value of integer is "<<i<<endl;
    cout<<"the value of integer is "<<*ptri<<endl;
    cout<<"the address of integer is "<<ptri<<endl;
    cout<<"the address of integer is "<<&i<<endl;
    return 0;
}