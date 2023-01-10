#include<bits/stdc++.h>
using namespace std;

int main(){
    //it is same as vector only, front operations are also exists
    list <int> ls;
    ls.push_back(3);
    ls.emplace_back(4);

    ls.push_front(2);
    ls.emplace_front(1);

    for(list <int> ::iterator it = ls.begin(); it != ls.end(); it++){
        cout<< *(it)<<" ";
    }
}+y9