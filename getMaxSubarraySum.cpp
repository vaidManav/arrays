#include <bits/stdc++.h>
using namespace std;

int getMaxSubarraySum(int arr[],int n){
    int ans = INT_MIN; //maxsofar
    int sum = 0; //maxeh
    for(int i = 0; i < n; i++){
        //include current elements 
        sum += arr[i];

        //update the ans
        ans = max(sum,ans);
        
        //if max ending is 0 then dnt include that term
        if(sum < 0)
            sum = 0;
        }
        return ans;

}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << getMaxSubarraySum(arr,n) << endl;
}