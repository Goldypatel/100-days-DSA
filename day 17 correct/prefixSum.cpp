#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int* Largest(int arr[] , int size){
    int* prefix = new int[size];
    prefix [0] = arr[0];
    for(int i =1;i<size; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    return prefix;
}
int main()
{
    int size = 11;
    int arr[size] ={ 1,4,2,3,5,6,7,8,9,9,8};
    int* ans = Largest(arr , size);
    for(int i = 0 ; i<size ; i++){
        cout<<ans[i]<<" , ";
    }


    return 0;
}