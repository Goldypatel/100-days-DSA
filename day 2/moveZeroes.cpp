#include <bits/stdc++.h>

using namespace std;
 void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i =0 ;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }    
    }
int main()
{

    vector<int> arr ={ 1,0,35,50,0,2};
     moveZeroes(arr);

     for(int i =0;i<arr.size();i++){
        cout<<arr[i];
     }

    

    return 0;
}