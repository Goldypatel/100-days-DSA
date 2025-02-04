#include <bits/stdc++.h>
using namespace std;


    int maxAscendingSum(vector<int>& nums) {
        int cnt = nums[0];
        int ans =nums[0];
       
        if(nums.size() == 1){
            return nums[0];
        }
        for(int i =0; i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                cnt +=nums[i+1];
                // if(i==nums.size()-1){
                //     if(nums[nums.size()-1] > nums[nums.size()-2]){
                //         cnt+=nums[nums.size()-1];
                //     }
                // }n 
                if(cnt>ans){
                    ans=cnt;
                }
            }
            else{
                cnt = nums[i+1];
            }
        }
        return ans;
    }
int main() {
    vector <int> arr = {10,20,30,5,10,50};
    
    int ans =maxAscendingSum(arr);
    cout << ans;
    

    return 0;
}
