class Solution {
    public:
        vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
           int freq[1001] = {0};
           int maxE = 0;
            int index = 0 ;
           for(int a : arr1){
                freq[a]++;
                maxE = max(a ,maxE );
           }
            vector<int> ans (arr1.size());
             for (int num : arr2){
                while (freq[num]-- > 0){
                    ans[index++] = num;
                }
            }
    
            for (int num = 0; num <= maxE; num++){
                while (freq[num]-- > 0){
                    ans[index++] = num;
                }
            }
            return ans;
    
    
            
        }
    };
    
    //   int a = 0;
    //          for(int i =0; i< arr2.size(); i++){ 
    //             for(int j= 0; j<arr1.size();j++){      
    //                 if(arr1[j]==arr2[i]){
    //                     swap(arr1[a],arr1[j]);
    //                     a++;
    //                 }  
    //             }
    //         }
    //         sort(arr1.begin()+a, arr1.end());
    //         return arr1;