#include <bits/stdc++.h>
using namespace std;

 int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int sum = n*(n+1)/2;

        int arrSum = 0;
        for(int i = 0; i<nums.size(); i++){
            arrSum+=nums[i];
        }

        int missingNum = sum - arrSum;

        return missingNum;
    }

int main() {
    vector <int> arr = {1,2,3,4,5,6,8};
    
    int ans =missingNumber(arr);
    cout << ans;
    

    return 0;
}