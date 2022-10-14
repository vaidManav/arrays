#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int arr[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }else{
            return false;
        }
        return true;
    }
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
   int ans = checkPalindrome(arr,n);
   cout << ans << endl;
}