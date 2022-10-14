#include <bits/stdc++.h>
using namespace std;

void findDuplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] == arr[i]){
                cout << "Duplicate" << arr[i] << endl;
            }
        }


    }
    cout << "no Duplicate";
}



int main(){
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
findDuplicate(arr,n);
}