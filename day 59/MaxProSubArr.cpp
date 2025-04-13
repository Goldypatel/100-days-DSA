class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int maxPro = nums[0];
            int currMin = nums[0];
            int currMax = nums[0];
    
            for(int i =1; i<nums.size() ;i++){
               int temp = currMax ;
                currMax = max({nums[i], currMax* nums[i], currMin*nums[i]});
                currMin = min({nums[i], temp * nums[i] , currMin*nums[i]});
                maxPro = max(maxPro , currMax);
                
            }
    
            return maxPro;
        }
    };