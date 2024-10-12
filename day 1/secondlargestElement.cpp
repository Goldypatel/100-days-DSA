/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int secondLargest(int arr[] , int size){
    int largest = arr[0];
    int Slargest = 0 ;
    
    for( int i = 0;i<size ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    
    for( int i=0;i<size ; i++){
        if(arr[i] > Slargest && arr[i] != largest){
            Slargest = arr[i];
        }
    }
    return Slargest;
}
int main()
{
    int size = 11;
    int arr[size] ={ 1,4,2,3,5,6,7,8,9,9,8};
    
    int ans =secondLargest(arr , size);
    cout << ans;
    

    return 0;
}