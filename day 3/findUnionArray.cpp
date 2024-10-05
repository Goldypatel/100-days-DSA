/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       int i=0;
       int j =0;
       vector <int> unionArr;
       while(i<n && j<m){
           if(arr1[i]< arr2[j]){
               if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                   unionArr.push_back(arr1[i]);
               }
               i++;
           }
            else{
                if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                   unionArr.push_back(arr2[j]);
               }
               j++;
            }
           }
       
       while(j<m){
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                   unionArr.push_back(arr2[j]);
               }
               j++;
       }
       while(i<n){
           if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                   unionArr.push_back(arr1[i]);
       }
       i++;
    }
    return unionArr;
    }

int main()
{
    int arr1[] = {-3, -2, 4, 5, 6};
    int arr2[] = {-3, -2, 4, 5, 6, 7, 8};
    
        int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    vector <int> ans = findUnion(arr1, arr2, n, m);
    
    for( auto s: ans){
        cout<<s<<"  ";
        
    }
    return 0;
}