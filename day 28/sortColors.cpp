class Solution {
    public:
    
        //dutch flag algortihm
        void sortColors(vector<int>& nums) {
           int low = 0, mid = 0, high = nums.size() - 1;
    
        while (mid <= high) {
            if (nums[mid] == 0) { 
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } 
            else if (nums[mid] == 1) {  
                mid++;
            } 
            else { 
                swap(nums[mid], nums[high]);
                high--;
            }
        }
        }
    
    };
    
    // int lessthan = 0;
    //         int greaterthan = nums.size() - 1;
    //         int middle = nums[nums.size() / 2];;
    //         int i=0;
    //         while(i<greaterthan){
    //             if(nums[i] < middle){
    //                 swap(nums[i], nums[lessthan]);
    //                 i++ ; lessthan++;
    //             }
    //             if(nums[i] > middle){
    //                 swap(nums[i], nums[greaterthan]);
    //                 greaterthan--;
    //             }
    //             if(nums[i] == middle){
    //                 i++;
    //             }
    //         }
    //     }