#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p1 ={1,3};
    cout <<p1.first<<endl; 

    pair <int, int> p2 = {32, 46};
    cout <<p2.first<<" "<<p2.second<<endl;

    pair <int , pair<int, int> > p3 ={1, {2,3}};
    cout<<p3.second.second<<endl;

    pair <int, int> arr[] = {{1,2}, {2,3}, {3,4}};
    cout<<arr[2].second<<endl;
    return 0;
};