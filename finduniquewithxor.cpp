#include <bits/stdc++.h> 
using namespace std;
int findUnique(int *arr, int size)
{
    //Write your code 
    int ans =0;
    for(int i =0;i<size;i++){
        ans^=arr[i];
    }
    return ans;
}