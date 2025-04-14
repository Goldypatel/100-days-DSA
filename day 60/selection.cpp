// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
#include <algorithm> 
using namespace std;
int main() {
    int arr[] = {3,2,4,1,5,6,9,8,7};
    int n = 9;
    
    for(int i = 0 ;i<n ;i++){
        int index = i;
        for(int j =i; j<n ;j++){
            if(arr[j] < arr[index] ) {
                index = j;
                }
        }   
        swap(arr[i],arr[index]);
    }   
    for(int a :arr){
        cout << a<<endl;
    }

    return 0;
}