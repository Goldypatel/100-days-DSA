class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            // priority_queue<int> maxH(nums.begin() , nums.end());
            priority_queue<int> maxH ;
                for(int i=0;i<nums.size();i++){
                    maxH.push(nums[i]);
                }
                int great = maxH.top();
                maxH.pop();
                int SecondGreat = maxH.top();
                maxH.pop();
    
                return (great -1) * ( SecondGreat -1);
    
        }
    };
    
    //optimal way would be to use simple one loop find greatest and second greatest in one go