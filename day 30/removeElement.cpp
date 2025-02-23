class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int j=nums.size()-1;
            int cnt =0;
            for(int i=0;i<j ;i++){
                if(nums[i] ==val || nums[j]==val){
                    cnt++;
                }
                if(nums[i]!=val && nums[j] == val){
                    i++;
                    j-- ;
                }
                if(nums[i] == val && nums[j]!=val){
                    swap(nums[i], nums[j]);
                    j--;
                    i++;
                }
                if(nums[i]==val && nums[j] == val){
                    j-- ;
                }
                if(nums[i]!=val && nums[j] != val){
                    i++;
                    j-- ;
                }
    
            }
            return nums.size() - cnt;
        }
    };