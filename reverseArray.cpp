#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Array provided by us" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Reverse Array" << endl;
    for(int i=sizeof(arr[i]);i>=0;i--){
        cout << arr[i] << " ";
    }
}