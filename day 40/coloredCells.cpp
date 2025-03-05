class Solution {
    public:
        long long coloredCells(int n) {
            if(n==0) return 0;
            
            return pow(n-1,2) + pow(n,2);
        }
    };