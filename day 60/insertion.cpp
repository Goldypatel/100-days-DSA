// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
#include <algorithm> 
using namespace std;
int main() {
    int arr[] = {3,2,4,1,5,6,9,8,7};
    int n = 9;
    
     for(int i=1 ;i<n ;i++){
       int curr= arr[i];
       int prev = i-1;
       while(prev>=0 && arr[prev] > curr){
           swap(arr[prev] , arr[prev+1]);
           prev--;
       }
    //   arr[prev+1] = curr;
   }
    // cout<<"small is : " <<small<<endl;
    for(int a :arr){
        cout << a<<endl;
    }

    return 0;
}