#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec;
    cout << "Size before pushback: " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(42);
    vec.push_back(45);
    cout << "Size after pushback: " << vec.size() << endl;
    vec.pop_back();
    cout << vec.front() << endl;
    cout << vec.back() << endl;

    for(int val: vec){
        cout << val << " ";
    }
 }