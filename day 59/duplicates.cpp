#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;
bool duplicates(vector<int> arr, int n){
    sort(arr.begin() ,arr.end());
    for(int i =0 ;i<n ;i++){
        if(arr[i] == arr[i+1]) return true;
    }
    return false;
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8};
    int n = 8;
    bool ans = false ;
    ans = duplicates(arr , n);
    cout<<ans;
    return 0;
}