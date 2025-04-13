// Online C++ compiler to run C++ program online
//max subarray sum
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int n= 5;
     vector<int>ans;
    for(int st =0;st<n ;st++){
        int sum =0;
        for(int end =st;end <=n ;end++){
            sum +=arr[end];
            // ans.push_back(sum);
            // cout<<endl;
        }
        ans.push_back(sum);
        cout<<endl;
    }
    
    int lar =0;
    for(int i =0 ;i<ans.size() ;i++){
        if (ans[i] > lar ){
            lar = ans[i];
        }
    }
    
    cout<< "Largest array sum is : "<<lar ;

    return 0;
}