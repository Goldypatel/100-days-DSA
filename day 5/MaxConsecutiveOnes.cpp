#include <bits/stdc++.h>
using namespace std;

 int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int max = 0;

        for (int i =0; i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                if(cnt > max){
                    max=cnt ;
                }
            }
            else{
                cnt = 0;
            }
        }

        return max;
    }

    int main() {
    vector <int> arr = {1,2,3,1,1,1,4,5,6,8};
    
    int ans =findMaxConsecutiveOnes(arr);
    cout << ans;
    

    return 0;
}