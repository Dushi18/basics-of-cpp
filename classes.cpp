#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int marks;

    void printReport(){
        cout<<"The name of our first student is "<<this->name<<" and his marks are "<<this->marks<<endl;
    }
};

int main(){
    Student dushi;
    dushi.name = "Dushyant";
    dushi.marks = 99;
    dushi.printReport();
};