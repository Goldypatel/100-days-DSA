#include <iostream>
using namespace std;

int Largest(int arr[] , int size){
    int largest = arr[0];
    
    for( int i = 0;i<size ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    return largest;
}
int main()
{
    int size = 11;
    int arr[size] ={ 1,4,2,3,5,6,7,8,9,9,8};
    
    int ans =Largest(arr , size);
    cout << ans;


    return 0;
}