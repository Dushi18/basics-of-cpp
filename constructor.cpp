// CONSTRUCTOR
#include<iostream>
#include <string>
using namespace std;

class HouseMember{
    public:
    string name;
    string position;
    /// Construct
    HouseMember(string n, string pos , int sp ){
        this->name = n;
        this->position = pos;
        this->secretPassword =sp;
    }
    // Method
    void printDetails(){
        cout<<"the name of first housemember is "<<this->name<<" and his position is "<<this->position<<endl;
    }
    void getsecretPassword(){
        cout <<" his secret password is "<<this->secretPassword<<endl;
    }
    private:
    int secretPassword;
};
int main(){
    // Object
    HouseMember papa("Balveer", "Father", 123456);
    papa.printDetails();
    papa.getsecretPassword();
}