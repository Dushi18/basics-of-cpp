// vectors are dynamic in nature...
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int, int>> vec_pair;
    vec_pair.push_back({1, 3});
    vec_pair.emplace_back(1, 4);

    vector<int> v1(5, 100);
    // [100, 100, 100, 100, 100]
    vector<int> v2(v1);
    // v2 will be a copy of v1
    cout << v.size() << endl;
    cout << vec_pair.size() << endl;
    cout << v1.size() << endl;
    cout << v2.size() << endl;

    // accessing elements of vector
    vector<int> vec_access;
    vec_access.push_back(1);
    vec_access.push_back(2);
    vec_access.push_back(3);
    vec_access.push_back(4);
    vec_access.push_back(5);
    vec_access.push_back(6);
    cout << vec_access[2] << endl;
    cout << vec_access.back() << endl;

    // iterator
    vector<int>::iterator it1 = vec_access.begin();
    it1 = it1 + 5;
    cout << *(it1) << " " << endl;
    vector<int>::iterator it2 = vec_access.end();
    it2--;
    cout << *(it2) << " " << endl;
    // vector <int>::iterator it3 = vec_access.rbegin();
    // vector <int>::iterator it4 = vec_access.rend();

    //loop accessing
    for (vector <int> ::iterator i = vec_access.begin(); i!= vec_access.end(); i++){
        cout <<*(i)<<" ";
    };cout << endl;
    for(auto i = vec_access.begin(); i!= vec_access.end(); i++){
        cout << *(i) << " ";
    };cout << endl;
    for (auto i : vec_access){
        cout << i << " ";
    };cout << endl;

    // deleteing element in vector 
    vec_access.erase(vec_access.begin()+2);
    for (vector <int> ::iterator i = vec_access.begin(); i!= vec_access.end(); i++){
        cout <<*(i)<<" ";
    };cout << endl;
    vec_access.erase(vec_access.begin()+1, vec_access.begin()+3);//deleting two elements  not deleting the begin+ 3 element
    for (vector <int> ::iterator i = vec_access.begin(); i!= vec_access.end(); i++){
        cout <<*(i)<<" ";
    };cout << endl;

    //INSERT FUNCTION
    vec_access.insert(vec_access.begin(), 0);//[0,1,5,6]
    vec_access.insert(vec_access.begin()+2, 2);//[0,1,2,5,6]
    vec_access.insert(vec_access.begin()+3, 3);//[0,1,2,3,5,6]
    vec_access.insert(vec_access.begin()+4, 4);//[0,1,2,3,4,5,6]
    for (vector <int> ::iterator i = vec_access.begin(); i!= vec_access.end(); i++){
        cout <<*(i)<<" ";
    };cout << endl;
    vec_access.insert(vec_access.begin(), 2, 0);//two occurences of 0 are inserted at beginning of vector
    for (auto i : vec_access){
        cout << i << " ";
    };cout << endl;

    //inserting one vector into another
    vector<int> copy_vector(2, 7);
    copy_vector.push_back(8);
    for (auto i : copy_vector){
        cout << i << " ";
    };cout << endl;
    vec_access.insert(vec_access.end(), copy_vector.begin()+1, copy_vector.end());
    for (auto i : vec_access){
        cout << i << " ";
    };cout << endl;

    //functions
    // v1.swap(v2) ----> this will swap vector v1 with v2
    // v.pop_back()-----> deltes the last element of vector v
    // v.clear()-----> clear the vector v
    // v.empty()-----> returns wethr the vector is empty or not
    return 0;
}