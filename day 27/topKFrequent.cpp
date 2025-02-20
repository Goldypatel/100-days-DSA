class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
           unordered_map<int, int> map;
           //put elements in hashmap
           for(int i =0;i<nums.size();i++){
            map[nums[i]] +=1;
           }
    
           //sort them according to frequency
    
        //    priority_queue<pair<int,int>> maxHeap;
        //    for(pair<int , int> mapPair : map){
        //     maxHeap.push({mapPair.second , mapPair.first});
        //    }
    
    
    //using minHeap
           priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
            for(pair<int , int> mapPair : map){
            minHeap.push({mapPair.second , mapPair.first});
            if(minHeap.size() > k) minHeap.pop() ;
           }
    
           vector<int> ans;
           for(int i=0;i<k ;i++){
                int element = minHeap.top().second;
                minHeap.pop();
                // int element = maxHeap.top().second;
                // maxHeap.pop();
                ans.push_back(element);
           }
           return ans;
        }
    };
    
    //  int n = nums.size();
    //         unordered_map<int, int> map;
    //         vector<int> ans;
    //         for (int &x : nums) map[x]++;
    //         vector<vector<int>> arr(n + 1);
    //         for (auto [a, b] : map) arr[b].push_back(a);
    //         for (int i = n; i > 0; i--) {
    //             for (int &x : arr[i]) {
    //                 if (ans.size() == k) return ans;
    //                 ans.push_back(x);
    //             }
    //         }
    //         return ans;
    
    