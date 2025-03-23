class Solution {
    public:
        bool suffTime(vector<int> &ranks , int cars , long long mingiven){
            long long done = 0;
            for(int r : ranks ){
                long long c2 = mingiven /r;
                long long c = floor(sqrt(c2));
                done +=c;
            }  
            return done >=cars;
        }
        long long repairCars(vector<int>& ranks, int cars) {
            long long l= 1 , r= 1e14;
            while(l<r){
                long long mid = (l+r) /2;
                if(suffTime(ranks , cars , mid)){
                    r =mid;
                } else{
                    l=mid +1;
                }
            }
            return l;
            
        }
    };