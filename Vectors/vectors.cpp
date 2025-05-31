#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector <int> vec(3,0); // can be used for frequency array
    vector<int> vec = {'a','b','c','d','e'};
    for(char val: vec){
        cout << val << " ";
    }
    return 0;
}

