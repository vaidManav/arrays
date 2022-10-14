#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int zeroCount = 0;
    int oneCount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]==0){
            zeroCount++;
        }if(arr[i]==1){
            oneCount++;
        }
    }
    for(int i = 0; i < zeroCount; i++){
        arr[i] = 0;
    }
    for (int i = zeroCount; i < (zeroCount+oneCount); i++){
        arr[i]=1;
    }
    for (int i=zeroCount+oneCount; i < n; i++){
        arr[i] = 2;
    }
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
}