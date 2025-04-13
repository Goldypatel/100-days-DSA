// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;
int main() {
    int arr[] = {1,-2,3,4,5 ,-1};
    int n= 6;
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i =0;i<n ;i++){
        currSum += arr[i];
        maxSum = max(currSum , maxSum);
        if(currSum < 0) currSum =0;
    }
    
    
    cout<< "Largest array sum is : "<<maxSum ;

    return 0;
}