#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> nums;
    int num;
    while (cin >> num)
    {
        nums.push_back(num);
    }
    
    int ans = 0;
    for(int val: nums){
        ans = ans ^ val;
    }

    cout << ans;
    return 0;

}

