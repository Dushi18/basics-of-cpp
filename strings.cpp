#include <iostream>
using namespace std;
#include <string>

int main(){
    string userName = "Dushyant";
    cout<<"The Username as submitted is "<<userName<<endl;
    cout<<"The length of username is "<<userName.length()<<endl;
    // substr(userName.begin, userName.charcters)
    cout<<"The substring1 of username is "<<userName.substr(0,4)<<endl;
    cout<<"The substring2 of username is "<<userName.substr(2,10)<<endl;

}