class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            int size = nums.size();
            unordered_map<int,int> freq;
            for(int a : nums){
                freq[a]++;
            }
            int n = size/2;
            for(auto i:freq){
                if(i.second % 2 !=0) return false;
            }
    
            return true;
        }
    };