class Solution {
    public:
        int maxFrequencyElements(vector<int>& nums) {
            unordered_map<int, int> freq;
            for(int a:nums){
                freq[a]++;
            }
            int maxfreq =0;
            for(const auto& a : freq){
                maxfreq = max(maxfreq , a.second );
            }
    
            int elements =0;
            for(const auto& a:freq){
                if(a.second == maxfreq){
                    elements++;
                }
            }
            return elements *maxfreq;
        }
    };