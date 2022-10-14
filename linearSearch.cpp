#include <bits/stdc++.h>
using namespace std;

bool linearSearch1(int *arr,int n,int findElement){
    for(int i=0;i<n;i++){
        if(arr[i] == findElement){
            return true;
        }
    }
    return false;
}



int main(){
    int n;
    cout << "enter the size of array" << endl;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int findElement;
    cout << "enter the element you want to search" << endl;
    cin >> findElement;
    bool ans = linearSearch1(arr,n,findElement);
    cout << ans;


}