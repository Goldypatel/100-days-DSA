#include <bits/stdc++.h>
using namespace std;

 int singleNumber(vector<int>& nums) {
        int ans;
        unordered_map<int, int> freq ;
        for(auto i:nums){
            freq[i]++;
        }

        for(const auto &pair : freq){
            if(pair.second ==1){
                ans = pair.first;
            }
        }

        return ans;
    }

    int main() {
    vector <int> arr = {1,1,2,2,3,4,5,5,3};
    
    int ans =singleNumber(arr);
    cout << ans;
    

    return 0;
}