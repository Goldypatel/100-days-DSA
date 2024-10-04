class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> temp;
        int n = nums.size();
        for ( int i =0 ; i<=k ; i++){
            temp.push_back(nums[i]);
        }
       
        for(int i=n; i<nums.size();i++){
            nums[i-nums.size()]=nums[i];
        }
        int j=0;
        for( int i = n - k ; i<nums.size() ; i++){
            nums[i]= temp[j];
            j++;
        }
    }
};

//wrong code
