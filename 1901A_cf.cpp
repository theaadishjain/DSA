#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int val=arr[0];
     for(int i = 0; i < n-1; i++){
    val = max(val, arr[i+1] - arr[i]);
     }
        val=max(val,2*(x-arr[n-1]));
        cout<<val<<endl;
    }
    
    return 0;
}